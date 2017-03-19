#! /usr/bin/python

import sys
import os
import re

if(len(sys.argv) == 2):
	if(os.path.isfile(sys.argv[1])):
		f1 = open(sys.argv[1],"r")
		str1 = f1.read()
		print len(re.findall("[^\s\n]", str1))
		str1 = f1.readlines()
		print len(re.findall("[^\n]",str1))
