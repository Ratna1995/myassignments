def dcttest(dct2):
	"this is inttest function which prints an dictionary"

#function with no parameters and no return values
if 0:
	def test1():
		print "i am in test 1"

	test1()

#function with return value but no parameters
if 0:
	def test2():
		return "i am in test2"
	
	print test2()

#function with parameters but no return value
if 0:
	def test3(a, b):
		print a,b

	test3(10, 20)

#function with parameters
if 0:
	def test4(a,b):
		print a, b
	
	test4(a = 10, b = 30)

#a takes the value 30 and b takes the value 10
if 0:
	def test4(a,b):
		print a, b
	
	test4(b = 10, a = 30)

if 0:
	def test5(a = 10, b = 20):
		print a, b

	test5(30, 40)
	test5(50)
	test5()
	test5(b=60)

#parameters of default values have to start from right hand side only
if 0:
#	def test6(a = 10, b):
	def test6(a, b = 10):
		print a, b
	
	test6(a = 40, b = 10)
	test6(40)
	test6()	#takes atleast one argument

if 0:
	x = 100
	print x
	def test7():
#		x = 200
		global x
		x = 200
		print x
	test7()
	print x


#nested function
if 0:
	def fn1():
		print "outside"
		def fn2():
			print "inside"
		fn2()
	fn1()

if 0:
	def fn():
		print "outside"
		def fn():
			print "inside"
		fn()
	fn()

#passing dictionary as an argument
if 0:
	dct1 = {10:20, "sachin":99}
	print dct1

	def dcttest(dct2):
		"function which returns a dictionary"
		dct3 = dct2
		dct2[10] = 50
		dct2["sachin"] += 3
		print dct2
		return dct3

	dcttest(dct1)
	print dct1

#integer is immutable
if 0:
	int1 = 10
	print int1
	def inttest():
		global int1 
		int1 = 20
		print int1
#	return int2
	inttest()
	print int1

#variable arguments
if 1:
	def test10(*pos, **kwd):
		print "positional", pos
		print "keyword", kwd
	
	test10(10, 20, a = 30, b = 40)
	test10(10, 20)
	test10(a = 10, b = 20)
	test10()
