#! /usr/bin/python

import sys
sys.path.append("/home/ratna/TRAINING/python_programs/day3/packages/xlrd-1.0.0")
import xlrd
if(len(sys.argv) == 2):
	f1 = xlrd.open_workbook(sys.argv[1],"r")
	s1 = f1.sheet_by_index(0)

	print ("contents of execl sheet:")
	cells = s1.row_slice(rowx = 0,start_colx=0,end_colx=2)
	for cell in cells:
		print cell.value

	cells = s1.col_slice(colx = 0, start_rowx = 1, end_rowx = 2)
	for cell in cells:
		print cell.value
