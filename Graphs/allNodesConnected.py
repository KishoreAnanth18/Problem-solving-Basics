#Write a program to check if all the nodes in a graph is connected?

num_nodes = 9
edges = [(0,1),(0,3),(1,2),(2,3),(4,5),(4,6),(5,6),(7,8)]
#edges = [(0,1),(0,4),(1,3),(2,3),(1,2),(1,4),(4,3)]

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

	#breadth first search
	def bfs(self,root):
		queue = []
		visited = [False]*len(self.data)
		distance = [0]*len(self.data)
		parent = [None]*len(self.data)
		visited[root] = True
		queue.append(root)
		idx=0
		while idx < len(queue):
			curr = queue[idx]
			idx+=1
			for node in self.data[curr]:
				if visited[node] == False:
					distance[node] = 1+distance[curr]
					parent[node] = curr
					visited[node] = True
					queue.append(node)
		#return "BFS: {}\nDistance: {}\nParent: {}".format(queue, distance,parent)
		return queue

graph = Graph(num_nodes,edges)
#print(graph)
len_queue = len(graph.bfs(7))
print(num_nodes)
print(len_queue)
if(len_queue < num_nodes):
	print("All nodes in the graph are not connected")
else:
	print("All nodes in the graph are connected")
