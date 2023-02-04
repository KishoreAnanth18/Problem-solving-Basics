"""
class Student:
    '''This is a docstring. It contains the information about the class.'''
    def __init__(self,x,y,z):
        self.fname = x
        self.lname = y
        self.rollno = z
    def read(self):
        print(f"First name: {self.fname}\nLast name: {self.lname}\nRoll Number: {self.rollno}")
s1 = Student("kishore","Ananth","202IT156")
s1.read()
print(s1.__doc__)
"""
'''
import keyword
print(keyword.kwlist)
print(len(keyword.kwlist))
'''
num = 1000
rslt = 1
for i in range(1,num+1):
    rslt*=i
print(rslt)