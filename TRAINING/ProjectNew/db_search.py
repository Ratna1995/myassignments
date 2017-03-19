#import sqlite3, create

def search(emp,lst):
	count = 0
	s_list = []
	print lst
	for val in lst:
		for x in range(0,len(val)):
			if (val[x] == emp):
				s_list.append(val)
				count = count + 1
				break
	print "count=",count
	if count > 1:
		print s_list
		choice = input("Choose all employees with this data...[y/n]: ")
		if choice == 'n':
			emp = input('Enter particular details from the above list: ')
			list1 = search(emp,s_list)
			return list1
		if choice == 'y':
			return s_list
	else:
		return s_list

