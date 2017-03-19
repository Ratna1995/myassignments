def prime():
	for prime in range(1, 501):
		count = 0
		for i in range(1, prime+1):
			if (prime % i == 0):
				count = count + 1
		if (count == 2):
			rev = reverse(prime)
			if(rev == True):
				print("prime palindrome", prime)

def reverse(prime):
	temp = str(prime)
	i = 0
	j = len(temp)-1
	while(i < len(temp)//2):
		if(temp[i] != temp[j]):
			return False
		i=i+1
		j=j-1
	return True


prime()
