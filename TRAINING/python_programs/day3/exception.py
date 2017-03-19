#Zero Division Error
if 0:
	try :
		a = 10/0
	except ZeroDivisionError,detail:
		print "Divide by zero exception", detail

# Name Error
if 0:
	try :
		print x
	except NameError, detail:
		print "name error occured : ",detail

#Type Error
if 0:
	def func(a):
		print a

	try :
		func(10,20)

	except TypeError, detail:
		print "typeerror: ",detail

#Value Error
if 0:
	try:
		a,b = 10,20,30
	except ValueError, detail:
		print "Value error: ",detail
	
#index Error
if 0:
	try:
		lst1 = [0,1]
		print lst1[2]
	except IndexError, detail:
		print "Index Error Occured:", detail

#Import Error
if 0:
	try:
		import xlrd
	except ImportError, detail:
		print "Import Error Occured: ", detail

if 0:
	try :
		print ("hello")
	except SyntaxError, detail:
		print detail

if 0:
	try :
		x = 10/0
	except ZeroDivisionError, detail:
		print detail
	else:
		import sys
		sys.exit()
	finally :
		x = 10
		print x

if 1:
	try :
		import sys
		sys.path.append("/home/ratna/TRAINING/python_programs/day3/packages/xlrd-1.0.0")
		import xlrd
		f1 = xlrd.open_workbook("sample.xlsx", "r");
	except IOError, detail:
		print "IOERROR", detail

