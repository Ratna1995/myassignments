# taking input from user
if 0:
	class A:
		def __init__(self):
			self.x = input("enter a number")
		def func1(self):
			print "in func1"
			print self.x
	m = A()
	print m.x
	m.func1()

#class with constructor and destructor
if 1:
	class A:
		def __init__(self):
			print "constructor"
			self.x = 10
			self._y = 20
			self.__z = 30
		def fn1(self):
			print "in fn1 public method"
		def _fn2(self):
			print "in fn2 semi private method"
		def __fn3(self):
			print "in fn3 fully private method"
		def __del__(self):
			print "destructor"
	
	m = A()
######### accessing attributes of a class
	print m.x
	print m._y
#	print m.__z	#cannot access fully private attr outside the class
#	print m._A__z  	#not recommended
	

######### invoking methods of a class
	m.fn1()
	m._fn2()
#	m.__fn3() # cannot invoke fully private method outside the class
#	m._A__fn3() 	# not recommended
