#DFS - Depth first search binary tree traversal
'''
	preOrder, inOrder, postOrder traversal using recursion
'''
class Node:
	def __init__(self,input):
		self.data = input
		self.left = None
		self.right = None
	
class BST:
	def __init__(self):
		self.root = None	
 	
	def preOrder(self,root):
		if(root == None) : return
		print(root.data,end = " ")
		self.preOrder(root.left)
		self.preOrder(root.right)
		
	def inOrder(self,root):
		if root == None : return
		self.inOrder(root.left)
		print(root.data,end = " ")
		self.inOrder(root.right)
	
	def postOrder(self,root):
		if(root == None) : return
		self.postOrder(root.left)
		self.postOrder(root.right)
		print(root.data,end = " ")
		
if __name__=="__main__":
	root = Node(10)
	root.left = Node(20)
	root.right = Node(30)
	root.left.left = Node(40)
	root.left.right = Node(50)
	root.right.left = Node(60)
	root.right.right = Node(70)
	BST = BST()
	print("Preorder traversal of BST: ")
	BST.preOrder(root)
	print()
	print("Inorder traversal of BST: ")
	BST.inOrder(root)
	print()
	print("Postorder traversal of BST: ")
	BST.postOrder(root)
	print()
	
	