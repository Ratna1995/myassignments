num = int(input("enter a number: "))

def factorial(num):
	if(num == 0):
		return 0
	elif(num == 1):
		return 1
	else:
		return ((num)*factorial(num-1))

print factorial(num)
