import sqlite3

# Connection Establishment and Creating Cursor
conn = sqlite3.connect('SqlDatabase.db')
cursor = conn.cursor()

# Creating Table ... 
cursor.execute('CREATE TABLE IF NOT EXISTS \
    Emp_Info(\
        EMP_ID TEXT PRIMARY KEY NOT NULL,\
        Name TEXT NOT NULL,\
        DOB TEXT,\
        Gender TEXT NOT NULL,\
        Email_ID TEXT NOT NULL,\
        Salary REAL,\
        Desgn TEXT NOT NULL,\
        Domain TEXT NOT NULL,\
        Phone INT NOT NULL,\
        Address TEXT NOT NULL)'\
    )




