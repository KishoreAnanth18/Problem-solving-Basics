#Insertion sort in python

arr = [5,4,10,1,6,2]
for i in range(1,len(arr)):
    temp = arr[i]
    it = i-1
    index = i
    while(it>=0):
        if(temp < arr[it]) : index = it
        it-=1
    arr.insert(index,arr.pop(i))
print(arr)