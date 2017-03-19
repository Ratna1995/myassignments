import math 

def add(num1, num2):
	''' returns addition of two numbers num1 and num2 -> integer'''
	return num1+num2

def sub(num1, num2):
	''' returns substraction of num1 and num2 -> integer'''
	return num1-num2

def mul(num1, num2):
	''' returns multiplication of two numbers num1 and num2 -> integer'''
	return num1*num2

def div(num1, num2):
	''' returns division of two numbers num1 and num2 -> integer'''
	return num1/num2

def sine(num):
	''' returns the sine of num '''
	return math.sin(math.radians(num))

def cosine(num):
	''' returns the cosine of num '''
	return math.cos(math.radians(num))

def squareroot(num):
	''' returns the square root of num '''
	return math.sqrt(num)

def powerof(num,power):
	''' returns the num**power(num to the power of power) '''
	return math.pow(num, power)

