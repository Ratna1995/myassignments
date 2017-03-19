print("1. decimal to binary,hexa,octal")
print("2. value of pi and sine 90")
print("3. clear the screen")
print("4. program to print python version")
print("5. change the directory")
print("6. prime numbers")
choice = int(input("enter your choice: "))

#decimal to other number systems
if(choice == 1):
	number = int(input("enter a number: "))
	print "binay of",number,"is",bin(number)
	print "hex of ",number, "is", hex(number)
	print "octal value of", number, "is", oct(number)

#value of pi and sine 90
if(choice == 2):
	import math
	print math.pi
	print math.sin(math.radians(90))

#change the directory
if(choice == 5):
	import os
	path = "/home/ratna/TRAINING/python_programs/new"
	os.chdir(path)
	print os.getcwd()

#clear the screen
if(choice == 3):
	import os
	os.system("clear")

#python version
if(choice == 4):
	import sys
	print sys.version

#prime number
if(choice == 6):
	number = int(input("enter a number: "))
	print "prime numbers"
	for num in range(1,number+1):
		count = 0
		for i in range(1,num+1):
			if(num % i == 0):
				count = count + 1
		if(count == 2):
			print num
