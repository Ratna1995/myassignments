a = 0
print(id(a))
def outer():
	a = 50
	print(id(a))
	def inner():
		global a
		a = 1
		print(id(a))
		print(a)
	inner()
	print(a)
outer()
print(a)

