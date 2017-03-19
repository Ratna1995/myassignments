#! /usr/bin/python

import sqlite3

print "1. insert"
print "2. delete"
print "3. update"
choice = input("Enter your choice: ")

connection_create = sqlite3.connect("EmployeeDB.db")
print "connection established"

cursor_cursor = connection_create.cursor()
cursor_cursor.execute("CREATE TABLE IF NOT EXISTS Employee \
						(EMP_ID TEXT PRIMARY KEY NOT NULL, \
						NAME TEXT NOT NULL, \
						SALARY INT);" )
print "table created"
#emp_record = [('30851', 'Ratna', 6000),('30872','Sireesha',6000),('30869','Madhu', 6000)]
#cursor_cursor.executemany("INSERT INTO Employee VALUES (?,?,?)", emp_record)

if(choice == 1):
	try :
		name = raw_input("enter the name of the employee: ")
		emp_id = raw_input("enter the employee ID: ")
		salary = input("enter the salary of the employee: ")
		emp_record = [emp_id,name,salary]
		cursor_cursor.execute("INSERT INTO Employee(emp_id,name,salary) VALUES(?,?,?)",(emp_record))
	except sqlite3.IntegrityError, detail:
		print "Record already exists"
		pass

if(choice == 2):
	print "1.emp_id"
	print "2.name"
	choice = input("enter the choice:")
	if(choice == 1):
		emp_id = raw_input("enter the record to be deleted: ")
		sql = [emp_id]
		cursor_cursor.execute("DELETE FROM Employee WHERE emp_id = (?)", sql)
	if(choice == 2):
		name = raw_input("enter the record name:")
		cursor_cursor.execute("SELECT Emp_id, name FROM Employee WHERE name=?",[name])
		print cursor_cursor.fetchall()
		empid = raw_input("select the id of the name to be deleted: ")
		sql =[empid]
		cursor_cursor.execute("DELETE FROM Employee WHERE emp_id = (?)", sql)
	
if (choice == 3):
	print "1.update employee details by employee id :"
	print "2.update employee salary:"
	choice = input("enter the choice:")
	if(choice == 1):
		name = raw_input("enter the name to be updated:")
		emp_id = raw_input("enter the empl_id: ")
		sql = [name, emp_id]
		cursor_cursor.execute("UPDATE Employee SET name = (?) WHERE emp_id = (?)",sql)
	

#sql = UPDATE Employee
#SET name='sakshi'
		
#WHERE CustomerID=30872;
		


sql = """
SELECT * FROM Employee"""
cursor_cursor.execute(sql)
print cursor_cursor.fetchall()

connection_create.commit()
connection_create.close()
