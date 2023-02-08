class Node:
	def __init__(self,input):
		self.data = input
		self.left = None
		self.right = None 
	
class BinarySearchTree:
	def __init__(self):
		root = None
	
	def inOrder(self,root):
		stack=[]
		curr = root
		while(1):
			if(curr!=None):
				stack.append(curr)
				curr = curr.left
			if(curr==None and len(stack)!=0):
				curr = stack.pop()
				print(curr.data,end = " ")
				curr = curr.right
			if(curr==None and len(stack)==0):
				return
		
bst = BinarySearchTree()
root = Node(10)
root.left = Node(20)
root.right = Node(30)
root.left.left = Node(40)
root.left.right = Node(50)
root.right.left = Node(60)
root.right.right = Node(70)

bst.inOrder(root)
print()