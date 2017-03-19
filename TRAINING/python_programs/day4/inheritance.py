#class example
if 0:
	class shape():
		def __init__(self, x, y):
			self.x = x
			self.y = y

		def area(self):
			return self.x * self.y
	
		def perimeter(self):
			return 2*self.x + 2*self.y

	shape1 = shape(10, 20)
	print shape1.area()
	print shape1.perimeter()

#inheritance
if 0:	
	class shape():
		def __init__(self, x, y):
			self.x = x
			self.y = y

		def area(self):
			return self.x * self.y
	
		def perimeter(self):
			return 2*self.x + 2*self.y

	class Square(shape):
		def __init__(self, x):
			shape.__init__(self, x,x)
#			self.x = x
#			self.y = x
	
	shape1 = shape(10, 20)
	square1 = Square(10)
	print square1.area()
	print square1.perimeter()

#multilevel inheritance
if 0:
	
	class shape():
		def __init__(self, x, y):
			self.x = x
			self.y = y

		def area(self):
			return self.x * self.y
	
		def perimeter(self):
			return 2*self.x + 2*self.y

	class Square(shape):
		def __init__(self, x):
			shape.__init__(self, x,x)
#			self.x = x
#			self.y = x
	
	class DoubleSquare(Square):
		def __init__(self,y):
			shape.__init__(self,y,2*y)
#			self.x = y
#			self.y = 2*y

		def perimeter(self):
			return 2*self.x + 3*self.y

	DoubleSquare1 = DoubleSquare(10)
	print DoubleSquare1.area()
	print DoubleSquare1.perimeter()

#multiple inheritance
if 1:
	class A:
		def __init__(self):
			print "i am in constructor 1"
			self.x = 10
		
		def func1(self):
			print "i am in function1"

		def __del__(self):
			print "i am in destructor 1"
	
	class B:
		def __init__(self):
			print "i am in constructor 2"
			self.y = 20

		def func2(self):
			print "i am in function 2"

		def __del__(self):
			print "i am in destructor 2"

	class c(A, B):
		def __init__(self):
			print "i am in sub class"
			self.z = 'z'

#def func3(self):
#			return obja.x,objb.y
		
		def __del__(self):
			print "i am in destructor 3"
	
#obja = A()
#	obja.func1()
#	objb = B()
#	objb.func2()
	objc = c()
#	print objc.z
#objc.func3()
	del objc
