#! /usr/bin/python
import re


#exp num 2
if(0):
	print "given 26 letters", 26 ** 10,"strings can be formed"


#exp num3
#multiplying a string with number and number with number
if(0):
	print "The output of ['Monty', 'Python']*20 is !!!!!\n"
	print ['Monty', 'Python'] * 20 #prints a list which consits of 'monty' and 'python' 20 times

	sent1 = raw_input("\nenter any string    ") #for string 
	print " The output when a string multiplied with integer --> string*3 is", sent1*3
	
	sent2 = input("\n enter a number  ") #for integer
	print "The output when integer multiplied with integer  ", sent2*3 

#exp num 4
#explanation of len(set(text4))
if(0):
#Two steps in this expression ---> len(set(text4))
# 1.given a text where set is a builin set(text4) will return a list of characters present in the list including space
# 2.Then passing that list to len (which is a builtin function)  which gives how many elements present in the list
	pass

#exp num 5
#to print a string using print and also by giving variable name and enter
if(0):
	str1 = "Assessment on python"
	print str1
	
	print "string concatination which concatenates without spaces in between---->"
	print str1 + str1 #concatenates without spaces
	
	print "string joing with spaces in between--->"
	print str1 + " "+ str1#concatenates with spaces
	
	print " string multiplied with number without spaces--->"
	print str1*3
	print "string multiplied with number with spaces in between--->"
	print (str1 + ' ')*3
	

#exp num6
#to join strings in a list and to split set of strings to a list

if(0):
	str1  = ['my', 'string']
	
	str1 = ' '.join(str1)#joins to strings
	print "converting list --> ['my', 'string'] to a string--->", str1
	print "converting string back to list---->", str1.split() #

#exp num 7
#join words
if(0):
	phrase1 = ["abc", "efg"]
	phrase2 = ["gef", "hij"]
	print phrase1 + phrase2 #first method to join 2 phrases
	#second method
	for i in phrase2:
		phrase1.append(i)
	print phrase1
	print len(phrase1 + phrase2)
	print len(phrase1) + len(phrase2)
#there is no difference in len(phrase1) + len(phrase2) and len(phrase1+phrase2)

#exp num 8
	'''sorted(set([w.lower() for w in text1])) --->
	takes one element full string and converts to list
	 with lowercase characters and set will remove repeated characters
	and sorted to sort alphabets

	sorted([w.lower() for w in set(text1)]) --->
	set will give text1 list of alphabets with no 
	repition and lower will convert that to lowercase
	sorted will sort list according to alphabetical order
	'''

#exp num 9
#w.isupper() and not w.islower()
#if the word is uppercase it returns true and second one gives true when word is not lowercase


#exp num 10
#slice expression that extracts the last two words of text2
if(0):
	text2 = ["hi","madhu","hello", "how", "are", "you"]
	ext_text2 = text2[len(text2) - 2:]
	print ext_text2

#exp num 11 
if(0):
	text = "dskjfkize ptsdjptfgsdj ptasd ;fasdf kjgklfjg dfksdf; l;sdkf"
	print "words ending with ize--->",re.findall("[A-Za-z]+ize", text)
	print "words containing sequence of pt -->", re.findall("[A-Za-z]*[(pt)]+[A-Za-z]*", text)
	print "All lowercase letters except initial character --", re.findall("[A-Z]+[a-z]*", text)
	print "words containing z -->", re.findall("[A-Za-z]*[z][A-Za-z]*", text)

#exp num 12
if(0):
	
	sent = ['she', 'sells', 'sea', 'shells', 'by', 'the', 'sea', 'shore']
	for ele in sent:
		if(len(ele) >= 4):
			print ele
	string = ' '.join(sent)
	print re.findall("sh[a-zA-z]*", string)

#exp num 13
'''sum([len(w) for w in text1])	
it is used to count number of characters in a list of strings
we cant use it to work out the average word length of a text 
because it gives total number of characters in a list of strings
'''
#exp num 14
#function to return the vocabulary size of the text
if(0):
	def vocab_size(text):
		return len(''.join(text.split()))
	text = raw_input("enter a text   ")
	print vocab_size(text) 

#exp num 15
if(0):
	def per(word, text):
		text_lst = text.split()
		return ((text_lst.count(word)*1.0)/len(text_lst))*100
	text = raw_input("enter the text  ")
	word = raw_input("enter the word in the text  ")

	print "how often a given word occurs in a text", per(word, text) ,"%"

#exp num 16
#set(sent3) <set(text1)
if(0):
	def set1(sent3,text1):
		print set(sent3)
		print set(text1)
		print set(sent3) < set(text1)
	
	sent3 = raw_input("Enter a msg")
	text1 = raw_input("Enter a text")
 	set1(sent3,text1)
	#set gives number of characters in a string without repition

#exp num 17
#changing colorless to colourless
if(0):
	string = "colorless"
	print "The string is -->", string
	string = string[:4]+"u"+string[4:]
	print "The changed string is---->", string

#exp num 20
#reads the contents of the URL
if(1):
	import urllib
	import bs4
	
	#to extract url contents
	url_obj = urllib.urlopen("https://www.python.org/")
		
	#to remove html tags
	url_obj_b = bs4.BeautifulSoup(url_obj)
	print url_obj_b.get_text()


#exp 21
#words.sort() and sorted(words)
if(0):
	words = ["hi", "how", "are", "you"]
	print "The original list is-->", words
	print "sorted(words) --->", sorted(words) #sorts the given list and returns a list
	print "words.sort ---->", words.sort() #sorts in given list and returns none
	print "the list is -->", words
#the difference is sorted will return sorted list without affecting original list
#but sort will change in the given list and returns none

#exp 22
if(0):
	msg = 'Monty Python'

