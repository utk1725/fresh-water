# Alembic with SQLAlchemy

## Alembic setup
[Reference](https://alembic.sqlalchemy.org/en/latest/tutorial.html)

Clear details are mentioned in the above reference. Following points are my understanding and for quick reference
- Generate the alembic setup using command: `alembic init alembic`
- It generates env.py file. Inside that keep all required setup. This will reflect alembic.ini file
- `alembic.ini` this is the file will be looked when script invoked. This can be at any location. 
    If it is in different location, need to mention --config option to the alembic runner
 - Creating migration scrip `alembic revision -m "new table created"`
 - To run migration: `alembic upgrade/downgrade head`
 - Alembic creates an `alembic version` table inside the db which used to store the current version of the alembic.
     Whenever we run migration, it looks the head version and based on that perform the action.
 - In our applications we can't run alembic command manually. In that case, we can create a python file and 
    run that file. Refer `db_migration.py` file for this.
    
     