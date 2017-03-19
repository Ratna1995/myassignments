print("1. negative index")
print("2. sequence : tuple in a list")
print("3. sequence : list in a tuple")
print("4. slicing")
print("5. Dictionary")
ch = int(input("enter your choice"))

#negative index
if(ch == 1):
	lst1 = [10, 20, 30]
	print lst1
	print lst1[0], lst1[1], lst1[2]
	print lst1[-1], lst1[-2], lst1[-3]

#sequence : collection of containers
#sequence : tuple in a list
if(ch == 2):
	lst1 = [10, 20, (30, 40)]
	print lst1
	print lst1[2][0]
#lst1[2][0] = 50
	lst1[2] = (50, 60)
	print lst1

#sequence : list in a tuple
if(ch == 3):
	lst1 = (10, 20, [30, 40])
	print lst1
	lst1[2][1] = 50
	print lst1
#	lst1[2] = 60

#slicing
if(ch == 4):
	lst1 = [10, 20, 30, 40, 50]
	print lst1[1:4]
	print lst1[:5]
	print lst1[1:]
	print lst1[:]
	print lst1[1:5:2]

#Dictionary
if(ch == 5):
	dct1 = {10:'ratna', 20:'karthik'}
	print dct1
	print dct1[10]
	print dct1.has_key(50)
	dct1[50] = 'madhu'
	print dct1

	lst1 = ['ratna', 'raichur']
	dct2 = {30851:lst1, 30852:['shweta', 'sirsi']}
	print dct2

	print dct2.values()
	print dct2.keys()
