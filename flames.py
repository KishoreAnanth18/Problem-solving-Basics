#FLAMES

'''
I/P: 
  AJAY
  PRIYA
O/P:
  Friends
Explaination:
  Flames - Friends, Lover, affectionate, Marraige, Enemy, Sibling : eliminate the common characters in both the name 
  and from the remaining count calculate the FLAMES. 
'''
name1 = list(input()) 
name2 = list(input()) 
len_1 = len(name1) 
len_2 = len(name2) 
min_count = min(len_1,len_2) 
count = 0
for i in range(min_count):
    if(name1[i] in name2):
        count+=1;
        name2.remove(name1[i])
com_count = len_1 + len_2 - 2*count
flames = ['F','L','A','M','E','S']
temp = com_count
it = 0
while(len(flames)!=1):
    it-=1;
    while(temp):
        it=(it+1)%len(flames)
        temp-=1
    flames.remove(flames[it])
    temp = com_count 
if(flames[0] == 'F'):print("Friends")
elif(flames[0] == 'L'):print("Lover")
elif(flames[0] == 'A'):print("Affectionate")
elif(flames[0] == 'M'):print("Marraige")
elif(flames[0] == 'E'):print("Enemy")
elif(flames[0] == 'S'):print("Sibling")
