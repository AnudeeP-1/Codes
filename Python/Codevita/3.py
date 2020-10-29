def employee(n, list1):
    list2=[]
    for i in range(n-1):
        if (list1[i]<list1[i+1]):
            list2.append(list1[i])
        else:
            list2.append(list2[i-1]+1)
    if list1[-2]>list1[-1]:
        list2.append(list1[-1]-1)
    else:
        list2.append(list2[i-1]+1)
    return(sum(list2))
t=int(input())
list1=[]
list3=[]
while t!=0:
    n=int(input())
    for i in range(n):
        x=(int(input()))
        list1.append(x)
    y=employee(n, list1)
    list3.append(y)
    t=t-1
for i in list3:
    print(i)
# employee(5,[1,2,1,5,2])
# employee(2,[1,2])