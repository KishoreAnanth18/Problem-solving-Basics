str = input()
alpha=0
numeric=0
special=0
for it in range(len(str)):
	if(not(str[it].isalpha()) and not(str[it].isnumeric())):special+=1
print(special)