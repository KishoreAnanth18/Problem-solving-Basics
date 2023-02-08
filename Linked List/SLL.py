class Node:
	def __init__(self,data = None):
		self.data = data
		self.next = None
	
class LinkedList:
	'''
		Linked List
		-----------------
		Methods available: 
		display()
		insertBegin(num)
		insertEnd(num)
		insertAt(pos,num)
		deleteBegin()
		deleteEnd()
		deleteAt(pos,num)
    '''
	#default constructor method to create a start(head)
	def __init__(self):
		self.start = None
	
	#method to print the data in Linked List
	def display(self):
		ptr = self.start
		while (ptr != None):
			print(ptr.data,end=" ")
			ptr=ptr.next
		print("\n",end="")
			
	#method to insert data at beginning in Linked List		
	def insertBegin(self,input):
		newNode = Node(input)
		if(self.start == None):
			self.start = newNode
		else:
			newNode.next  = self.start
			self.start = newNode
			
	#method to insert data at end in Linked List
	def insertEnd(self,input):
		newNode = Node(input)
		if(self.start == None):
			self.start = newNode
		else:
			ptr = self.start
			while(ptr.next!=None):
				ptr = ptr.next
			ptr.next = newNode
			
	#method to insert data at a position in Linked List
	def insertAt(self,pos,input):
		pass
	
	
	#method to delete data at beginning in Linked List
	def deleteBegin(self):
		if(self.start == None):
			print("Linked list is empty")
		else:
			temp = self.start
			self.start = self.start.next
			temp = None
	
	#method to delete data at end in Linked List
	def deleteEnd(self):
		if(self.start == None):
			print("Linked list is empty")
		else:
			ptr = self.start
			prev = None
			while(ptr.next != None):
				prev = ptr
				ptr = ptr.next
			prev.next = None
			ptr = None
	
	#method to delete data at a position in Linked List
	def deleteAt(self,pos,input):
		pass

#Main program			
if __name__ == "__main__":
	LL = LinkedList() #LL object created for LinkedList class
	num = list(map(int, input().split()))
	for it in range(len(num)):
		LL.insertEnd(num[it])
	LL.deleteEnd()
	LL.display()
	#print(LL.__doc__) #to print the docstring
	