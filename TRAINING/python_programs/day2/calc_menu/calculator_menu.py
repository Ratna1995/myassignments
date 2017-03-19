import os
import sys
sys.path.append("/home/ratna/TRAINING/python_programs/day2/calc_opers")
import calc_ops

def simplecalcmenu():
	str1 = "SIMPLE CALULATOR"
	print (str1.center(50, '#'))
	print("1. Addition")
	print("2. Substraction")
	print("3. Multiply")
	print("4. Division")
	print("5. Go Back")
	try:
		choice1 = int(input("enter the operation: "))

		if(choice1 >= 1 and choice1 <=4): 
			num1 = int(input("enter a number: "))
			num2 = int(input("enter a number: "))
		if(choice1 == 1):
			result = calc_ops.add(num1, num2)
			print ("addition of",num1,num2,"=",result)
			simplecalcmenu()
		if(choice1 == 2):
			print ("sub of",num1,num2,"=",calc_ops.sub(num1, num2))
			simplecalcmenu()
		if(choice1 == 3):
			print ("multiplication of", num1, num2,"=",calc_ops.mul(num1, num2))
			simplecalcmenu()
		if(choice1 == 4):
			print ("division of",num1,num2,"=",calc_ops.div(num1, num2))
			simplecalcmenu()
		if(choice1 == 5):
			os.system("clear")
			main()
	except NameError, detail:
		print "name error ocured", detail
		os.system("clear")
		simplecalcmenu()

def scientificcalc():
	str1 = "SCIENTIFIC CALULATOR"
	print (str1.center(50, '#'))
	print("1. Sine")
	print("2. Cosine")
	print("3. Square root")
	print("4. Power of")
	print("5. Go Back")
	choice2 = int(input("enter the operation: "))
	if(choice2 >= 1 and choice2 <=3):
		num = int(input("enter a number: "))
	if(choice2 == 1):
		print ("sine of",num,"=",calc_ops.sine(num))
		scientificcalc()
	if(choice2 == 2):
		print ("cosine of",num,"=",calc_ops.cosine(num))
		scientificcalc()
	if(choice2 == 3):
		print ("square root of", num,"=",calc_ops.squareroot(num))
		scientificcalc()
	if(choice2 == 4):
		num = int(input("enter a number"))
		power = int(input("enter the value to get power of"))
		print ("power of",num,"^",power,"=",calc_ops.powerof(num, power))
		scientificcalc()
	if(choice2 == 5):
		os.system("clear")
		main()	

def main():
	str1 = "CALULATOR"
	print str1.center(50, '#')

	print("1. Simple Calculator")
	print("2. Scientific Calculator")
	print("3. Exit")
	try:
		choice = int(input("Enter your choice: "))
		if(choice == 1):
			os.system("clear")
			simplecalcmenu()
		if(choice == 2):
			os.system("clear")
			scientificcalc()
		if(choice == 3):
			pass
	
	except NameError, detail:
		print "Name error occured", detail
		print "enter the choice again"
		main()

main()

