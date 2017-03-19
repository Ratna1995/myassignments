#enter your choice
print("1.convert a variable to another type")
print("2.check if the number is greater then, equal or lesser than 100")
print("3.print 1 to 10")
print("4.print from 1 to 5")
print("5.print from 1 to 10 except 5")
print("6.days of a week")
ch = input("enter your choice: ")

# converting a variable from one type to another
if(ch is 1):
	number = input("enter a number: ")
	print(number)
	print(float(number))
	print(str(number))

#check if the number is greater then, equal or lesser than 100
if(ch is 2):
	number = input("enter a number: ")
	if(number is 100):
		print(number,"is equal to 100")
	elif(number > 100):
		print(number,"greater than 100")
	else:
	 	print(number," is less than 100")

#print 1 to 10
if(ch == 3):
	i = 1
	while(i <= 10):
		print(i)
		i = i + 1

#print 1 to 5
if(ch == 4):
	i = 1
	while(i <= 10):
		print(i)
		i = i + 1
		if(i > 5):
			break

# print 1 to 10 except 5
if(ch == 5):
	i = 1
	while(i <= 10):
		print(i)
		i = i + 1
		if(i == 5):
			i = i + 1
			continue

#days of a week
if(ch == 6):
	day = raw_input("enter the day: ")
	day = day.lower()
	if(day=='monday' or day=='tuesday' or day=='wednesday' or day=='thursday' or day=='friday' ):
		print("working day")
	elif(day=='saturday'):
		print("work alternate weeks")
	elif(day=='sunday'):
		print("weekend")
	else:
		print("wrong day entered")

