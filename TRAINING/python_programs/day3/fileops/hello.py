#! /usr/bin/python
print("1. Implement cat command")
print("2. Implement copy command")
print("3. Implement wc command")
ch = int(input("enter your choice: "))
import sys
import os

if(ch == 1):
#cdir = os.getcwd()
	if(len(sys.argv) == 2):
		try:
			if(os.path.isfile(sys.argv[1])):
				f1 = open(sys.argv[1], "r")
				print f1.read()
				f1.close()
		except Exception,detail:
			print("file doesn't exist",detail)
	else:
		print "invalid arguments",detail

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

