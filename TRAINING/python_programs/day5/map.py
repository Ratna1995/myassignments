items = [1, 2, 3]
if 0:
#map will apply the functionality to each and every item in the list
	def sqrt(x):
		return x*x

	print map(sqrt, items)

if 0:
# lambda is a keyword which creates the functionality on the fly
	print map(lambda x:x*2, items)

if 0:
#filters the list based on the functionality
	print filter(lambda x:x==1, items)

if 1:
#reduce applyies the functionality and returns a single value
	num = input("enter a number:")
	L = [x for x in range(1,num+1)]
	print reduce(lambda x, y:x*y, L)
