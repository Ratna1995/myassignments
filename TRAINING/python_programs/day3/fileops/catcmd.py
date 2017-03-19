#! /usr/bin/python
print("1. Implement cat command")
print("2. Implement copy command")
print("3. Implement wc command")
print("4. write and readback")
ch = int(input("enter your choice: "))
import sys
import os

if(ch == 1):
#cdir = os.getcwd()
	if(len(sys.argv) == 2):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1], "r")
			print f1.read()
			f1.close()
		else:
			print("file doesn't exist")
	else :
		print("invalid arguments")

if(ch == 2):
	if(len(sys.argv) == 3):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1],"r")
			f2 = open(sys.argv[2],"w")
			str1 = f1.read()
			f2.write(str1)
			f1.close()
			f2.close()
		else:
			print("file doesn't exist")
	else:
	  print("invalid arguments")

if(ch == 3):
	if(len(sys.argv)==2):
		if(os.path.isfile(sys.argv[1])):
			f1 = open(sys.argv[1],"r+")
			str1 = f1.read()
			print ("no. of characters =",len(str1))
			f1.seek(0)
			str1 = f1.readlines()
			print("number of lines =",len(str1))
			f1.seek(0)
			str1 = f1.read()
			print("no. of words = ", len(str1.split()))
			f1.close()
		else:
			print("file doesn't exist")
	else:
	  print("invalid arguments")

if(ch == 4):
	if(len(sys.argv) == 2):
		f1 = open(sys.argv[1],"w+")
		str1 = raw_input("enter a string")
		f1.write(str1)
		f1.seek(0)

		print ("contents of a file")
		print f1.read()
		f1.close()
	else:
		print("invalid arguments")
