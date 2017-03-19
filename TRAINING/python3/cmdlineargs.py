#! /usr/bin/python

import sys
summ = 0
#num1 = int(sys.argv[1])
#num2 = int(sys.argv[2])
#print num1 + num2
for ele in sys.argv[1:]:
	summ += int(ele)
print summ
