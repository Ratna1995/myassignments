import unittest

def multiply(x, y):
	return x*y

class TestStringMethods(unittest.TestCase):
	def Test_multiply_integers(self):
		self.assertEqual(multiply(3,4),12)

	def Test_multiply_strings(self):
		self.assertEqual(multiply('a', 3), 'aa')

if __name__ == '__main__':
	unittest.main()
