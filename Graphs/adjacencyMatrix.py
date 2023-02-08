#adjacencyMatrix
num_nodes = 5 # Nodes = [0,1,2,3,4]
edges = [(0,1),(0,4),(1,2),(1,3),(1,4),(2,3),(3,4)]

class Graph:
	def __init__(self,num_nodes,edges):
		self.data = [[0 for _ in range(num_nodes)] for _ in range(num_nodes)]
		for n1,n2 in edges:
			self.data[n1][n2] = 1
			self.data[n2][n1] = 1
		
graph1 = Graph(num_nodes,edges)
for row,col in enumerate(graph1.data):
	print(row,col)