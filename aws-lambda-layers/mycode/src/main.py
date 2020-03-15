import os
from database import db_connection


def lambda_handler(event, context):
    db_connection.create_engine()
    path = os.popen("echo $PATH").read()
    directories = os.popen("find /opt/* -type d -maxdepth 4").read().split(
        "\n")
    return {
        'directories': directories
    }
