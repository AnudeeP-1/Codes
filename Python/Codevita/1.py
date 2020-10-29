def employee(t,n,[1,2,1,5,2]):
    list2=[]
    for i in range(n-1):
        if list1[i]<list1[i+1]:
            list2.append(list1[i])
        else:
            list2.append(list1[i-1]+1)
        if list1[-1]<list1[-2]:
            list2.append((list2[-1]-1))
        else:
            list2.append(list2[-1]+1)
    print(sum(list2)-1)
t=int(input())
while(t!=0):
    n=int(input())
    list1=[]
    for i in range(5):
        x=int(input())
        list1.append(x)
    employee(t,n,list1)
    t=t-1