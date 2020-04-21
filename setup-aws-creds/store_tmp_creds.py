import subprocess
import boto3
import logging

logger = logging.getLogger()
logger.setLevel(logging.INFO)


def main(aws_profile_name='default'):
    logging.info('generating sts temp creds for profile {}'.format(aws_profile_name))
    session = boto3.Session(profile_name=aws_profile_name)
    sts_client = session.client('sts')
    response = sts_client.get_caller_identity()
    arn = (response.get('Arn')).replace('user', 'mfa')
    logging.info('enter mfa code for account arn {}'.format(arn))
    mfa_code = input()

    response = sts_client.get_session_token(SerialNumber=arn, TokenCode=mfa_code)
    session_accesskeyid = response.get('Credentials').get('AccessKeyId')
    session_secretaccesskey = response.get('Credentials').get('SecretAccessKey')
    session_sessiontoken = response.get('Credentials').get('SessionToken')

    print('[mfa]')
    print('aws_access_key_id = ', session_accesskeyid)
    print('aws_secret_access_key = ', session_secretaccesskey)
    print('aws_session_token = ', session_sessiontoken)

    update_credentials_file(session_accesskeyid, session_secretaccesskey, session_sessiontoken)
    logging.info('MFA profile updated with temporary credentials')
    export_profile_name = 'export AWS_DEFAULT_PROFILE=mfa'
    # subprocess.run(export_profile_name.split())
    print('\n', export_profile_name, '\n')
    logging.info('temp creds stored in mfa profile. execute the above command to use temp credentials')


def update_credentials_file(session_accesskeyid, session_secretaccesskey, session_sessiontoken, region='us-west-2'):
    setup_access_key = 'aws configure set aws_access_key_id {} --profile mfa'.format(session_accesskeyid)
    setup_secret_key = 'aws configure set aws_secret_access_key {} --profile mfa'.format(session_secretaccesskey)
    setup_session_token = 'aws configure set aws_session_token {} --profile mfa'.format(session_sessiontoken)
    setup_region = 'aws configure set region {} --profile mfa'.format(region)
    subprocess.run(setup_access_key.split())
    subprocess.run(setup_secret_key.split())
    subprocess.run(setup_session_token.split())
    subprocess.run(setup_region.split())


def get_deafult_region():
    get_region = 'aws configure get region --profile default'
    process = subprocess.Popen(get_region.split(),
                               stdout=subprocess.PIPE,
                               stderr=subprocess.PIPE,
                               universal_newlines=True)
    stdout, stderr = process.communicate()
    print('Found default region {}'.format(stdout))
    return stdout


if __name__ == '__main__':
    logging.info('Enter account profile name stored in credentials file.'
                 '\nPress enter to use default account')
    profile = input()
    if profile:
        main(profile)
    else:
        main()
