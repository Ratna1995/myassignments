class Employee():
	empcount = 0
	def __init__(self, salary):
		self.salary = salary
		Employee.empcount += 1
	@staticmethod
	def displaycount(self):
		return Employee.empcount

	def displaysalary(self):
		return self.salary

emp1 = Employee(100)
print Employee.displaycount(1)
#print emp1.displaysalary()
emp2 = Employee(120)
print Employee.displaycount(1)
print Employee.displaycount(1)
#print emp2.displaysalary()
#print emp1.displaycount()
#print emp1.displaysalary()
