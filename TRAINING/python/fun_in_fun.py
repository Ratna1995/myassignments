def outer():
	a = 50
	def inner(a=a):
		print(a)

	inner()
outer()
