import sqlite3,create,db_search
from db_search import search
def delete():
	field = input("Enter employee details to be deleted:")
	
	#Query
	sql = """
	SELECT * FROM Emp_Info"""
	
	create.cursor.execute(sql)
	lst = list(create.cursor.fetchall())
	print "final data:",lst
	
	s_list = search(field,lst)
	print "In delete",s_list
	
	for val in s_list:
		emp_id = val[0]
		create.cursor.execute("DELETE FROM Emp_Info WHERE EMP_ID  = ?", (emp_id,))



