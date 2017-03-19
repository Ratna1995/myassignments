#! /usr/bin/python

import sqlite3

conn = sqlite3.connect("test.db")
print "database created successfully"

#conn.execute('''CREATE TABLE EMPLOYEE
#		       (NAME TEXT PRIMARY KEY NOT NULL,
#				EMP_ID TEXT NOT NULL,
#				AGE INT NOT NULL,
#				ADDRESS CHAR(50),
#				SALARY INT);''')

print "table created"

conn.execute("INSERT INTO EMPLOYEE (NAME,EMP_ID,AGE,ADDRESS,SALARY) \
		      VALUES (1, 'Paul', 32, 'California', 20000.00 )");

conn.execute("INSERT INTO EMPLOYEE (NAME,EMP_ID,AGE,ADDRESS,SALARY) \
		      VALUES (2, 'Allen', 25, 'Texas', 15000.00 )");

conn.execute("INSERT INTO EMPLOYEE (NAME,EMP_ID,AGE,ADDRESS,SALARY) \
		      VALUES (3, 'Teddy', 23, 'Norway', 20000.00 )");

conn.execute("INSERT INTO EMPLOYEE (NAME,EMP_ID,AGE,ADDRESS,SALARY) \
		      VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 )");

conn.commit()
print "Records created successfully";
conn.close()
