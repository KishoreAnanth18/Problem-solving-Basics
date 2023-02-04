import SLL

LL = SLL.LinkedList() #LL object created for LinkedList class
print("Enter numbers to create a linked list:\n")
num = list(map(int, input().split()))
for it in range(len(num)):
	LL.insertBegin(num[it])
LL.deleteEnd()
LL.display()