#! /usr/bin/python

print "1. Python multiplication operation.3"
print "2. print a string.5"
print "3. join and split the string .6"
ch = input("enter your choice: ")

# python multiplication operation
if(ch == 1):
	sent1 = raw_input("enter a string: ")
	print 3*sent1

# printing a string
if(ch == 2):
	my_string = "global edge"
	print "my_string : ", my_string

	print my_string+my_string
	print my_string," ",my_string

#join and split the string
if(ch == 3):
	my_sent = ["As", "you", "sow", "so", "you", "reap"]
#	my_sent = str(my_sent)
	my_sent = ' '.join(my_sent)
	print my_sent
	my_sent = my_sent.split(" ")
	print list(my_sent)

# 8.
# sorted(set([w.lower() for w in text1]) : here each character of text1 are converted into lower case and then a set is being formed which eliminates the duplicate characters and then it is being sorted

#sorted([w.lower() for w in set(text1)]) : large 
