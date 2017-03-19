import sqlite3

conn = sqlite3.connect('test.db')
print "Opened database successfully";

cursor = conn.execute("SELECT * from EMPLOYEE")
for row in cursor:
	print "NAME = ", row[0]
	print "EMP_ID = ", row[1]
	print "AGE = ", row[2]
	print "ADDRESS = ", row[3]
	print "SALARY = ", row[4], "\n"

	print "Operation done successfully";
conn.close()
