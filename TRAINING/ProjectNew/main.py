import sqlite3,create,db_insert,db_update,db_delete
#from db_insert import Insert
#from db_update import Update

while 1:
	choice = int(input("1.Insert\n2.Update\n3.Delete\n4.Display\n5.Exit\n: "))
	if(choice == 1):
		try:
			db_insert.Insert()
			create.conn.commit()
		except sqlite3.IntegrityError, details:
			print details
			pass
	elif(choice == 2):
		try:
			db_update.Update()
			create.conn.commit()
		except sqlite3.IntegrityError, details:
			pass

	elif(choice == 3):
		try:
			db_delete.delete()
			create.conn.commit()
		except sqlite3.IntegrityError, details:
			pass
	elif(choice == 4):
		sql = """
		SELECT * FROM Emp_Info"""
		create.cursor.execute(sql)
		print create.cursor.fetchall()
	elif(choice == 5):
		exit(1)
	else:
		print ("Invalid choice\n")
		

create.conn.close()

