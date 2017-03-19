import sqlite3,create
from db_search import search

def display():
	sql = """
	SELECT * FROM Emp_Info"""
	create.cursor.execute(sql)
	lst = create.cursor.fetchall()
	return lst


def Update():
	choice = int(input("1.Hike salary\n2.Update based on particular field\n"))
	if(choice == 1):
		Salary = int(input("Hike salary of employees below: "))
		percent = int(input("Hike by %: "))
		
		create.cursor.execute("UPDATE Emp_Email SET Salary = (Salary + ((Salary*?)/100)) WHERE Salary < ?",[percent,Salary])
	if(choice == 2):
		print ("Based on Emp_ID ... Update.. \n1. Name \t2. Salary \t3. Designation \t4. Domain \t5. Address ")
		choice = int(input("\nEnter your choice: "))
		
		if (choice == 1):
			Old_Name = str(input("Enter the Name to be updated: "))
			New_Name = str(input("Enter the New Name: "))
			lst1 = display()
			s_list = search(Old_Name,lst1)
		
			print s_list
			for val in s_list:
                		emp_id = val[0]
                		create.cursor.execute("UPDATE Emp_Info SET Name = ? WHERE EMP_ID  = ?", (New_Name,emp_id))
				
			



	
