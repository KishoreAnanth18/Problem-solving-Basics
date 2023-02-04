# import the module
import sys

# using sys.maxsize
max_int = sys.maxsize
min_int = -(sys.maxsize)
long_int = sys.maxsize+1

print("maxint :"+str(max_int)+" - "+str(type(max_int)))
print("maxint - 1 :"+str(min_int)+" - "+str(type(min_int)))

# the data type is represented as int
print("maxint + 1 :"+str(long_int)+" - "+str(type(long_int)))
