list=[]
num=int(input("enter the number: "))
for i in range(0,num):
    list.append(int(input()))
print(list)
sum=0
for i in list:
    sum=sum+i
print(sum)
