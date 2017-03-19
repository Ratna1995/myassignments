import sqlite3
import create

def Insert():
	print "Insert the new entry into database:"
	ID = raw_input("Employee ID: ")
	name = raw_input("Enter name: ")
	DOB = raw_input("DOB: ")
	Gender = raw_input("Gender: ")
	Email = raw_input("Mail ID: ")
	Salary = input("Salary: ")
	Designation = raw_input("Designation: ")
	Domain = raw_input("Domain: ")
	MobileNo = input("Mobile No. : ")
	Address = raw_input("Address: ")
	
	create.cursor.execute("INSERT INTO Emp_Info VALUES(?,?,?,?,?,?,?,?,?,?)",[ID,name,DOB,Gender,Email,Salary,Designation,Domain,MobileNo,Address])
