#Graph class as an adjacency list

num_nodes = 5 # Nodes = [0,1,2,3,4]
edges = [(0,1),(0,4),(1,2),(1,3),(1,4),(2,3),(3,4)]


class Graph:
	def __init__(self,num_nodes,edges):
		#self.num_nodes = num_nodes
		self.data = [[] for _ in range(num_nodes)]
		for n1,n2 in edges:
			self.data[n1].append(n2)
			self.data[n2].append(n1)

	def __repr__(self):
		return "\n".join(["{} {}".format(node,neighbours) for node,neighbours in enumerate(self.data)])
	
	def __str__(self):
		return self.__repr__()
	
	def addEdge(self,data,n1,n2):
		data[n1].append(n2)
		data[n2].append(n1)
	
	def removeEdge(self,data,n1,n2):
		data[n1].remove(n2)
		data[n2].remove(n1)
		
graph1 = Graph(num_nodes,edges)
graph1.addEdge(graph1.data,0,2)
graph1.removeEdge(graph1.data,3,2)
print(graph1)
