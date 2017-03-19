print("1.print the list element by element")
print("2.print the whole list")
print("3.insert at the begining")
print("  insert at pos 1")
print("  insert at end")
print("4.delete ele at pos 1")
print("  delete ele and print it")
ch = input("enter your choice: ")

lst1 = [10, "hi", 12.34]

#print lst1
if(ch == 1):
	i = 0
	print "length of list",len(lst1)
	while(i < len(lst1)):
		print lst1[i]
		i = i + 1


if(ch == 2):
	print lst1

#insert in the list
if(ch == 3):
	lst1.insert(0, 30)
	print lst1
	lst1.insert(1,40)
	print lst1
	lst1.insert(len(lst1), 50)
	print lst1

#delete the elements in the list
if(ch == 4):
#del lst1[0]
#	c = lst1.pop(1)
#	print c
	c = lst1.remove(10)
	print lst1
