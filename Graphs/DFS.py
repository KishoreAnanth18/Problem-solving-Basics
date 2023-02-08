#Depth first search - DFS

num_nodes = 5
edges = [(0,1),(0,4),(1,3),(2,3),(1,2),(1,4),(4,3)]

class Graph:
	#default constructor
	def __init__(self,num_nodes,edges):
		#self.num_nodes = num_nodes
		self.data = [[] for _ in range(num_nodes)]
		for n1,n2 in edges:
			self.data[n1].append(n2)
			self.data[n2].append(n1)
	
	#representation of graph data (Adjacency matrix)
	def __repr__(self):
		return "\n".join(["{}: {}".format(node,neighbours) for node,neighbours in enumerate(self.data)])
	
	#string representation
	def __str__(self):
		return self.__repr__()

	def dfs(self,root):
		stack = []
		visited = [False]*len(self.data)
		result = []
		stack.append(root)
		
		while len(stack)>0:
			curr = stack.pop()
			if not visited[curr]:
				visited[curr] = True
				result.append(curr)
				for node in self.data[curr]:
					stack.append(node)
		return "DFS: {}".format(result)

graph = Graph(num_nodes, edges)
print(graph.dfs(3))