def function():
	global str
	str = "hello"
	print(str)
	return 0

str = "hi"
print(function())
print(str)

