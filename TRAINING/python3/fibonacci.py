#fibonacci series
print("1.fibonacci series in the range 1000")
print("2.1000 fibonacci numbers")
choice = input("enter your choice: ")


lfib = [0 , 1]
if(choice == 1):
	num = input("enter the range of series: ")
	val = lfib[len(lfib) - 1] + lfib[len(lfib) - 2]

	while(val < num):
		lfib.append(val)
		val = lfib[len(lfib) - 1] + lfib[len(lfib) - 2]
	print lfib

if(choice == 2):
	num = input("enter the range of series: ")
	val = lfib[len(lfib) - 1] + lfib[len(lfib) - 2]

	while(len(lfib) < num):
		lfib.append(val)
		val = lfib[len(lfib) - 1] + lfib[len(lfib) - 2]
	print lfib

