#PF-Assgn-35

#Global variable
list_of_marks=(12,18,25,24,2,5,18,20,20,21)

def find_more_than_average():
    average=0
    count=0
    for i in list_of_marks:
        average=average+i
    average=average/10
    for i in list_of_marks:
        if i>average:
            count+=1
    return (count*10)
    #Remove pass and write your logic here

def sort_marks():
    temp=0
    lists=list(list_of_marks)
    for i in range(0,len(list_of_marks)):
        for j in range(i+1,len(list_of_marks)):
            if lists[i]>lists[j]:
                temp=lists[i]
                lists[i]=lists[j]
                lists[j]=temp
    return lists
    #Remove pass and write your logic here

def generate_frequency():
    count=0
    new_list=[]
    for i in range(0,26):
        for j in list_of_marks:
            if i==j:
                count=count+1
        new_list.append(count)
        count=0
    return new_list
    #Remove pass and write your logic here

print(find_more_than_average())
print(generate_frequency())
print(sort_marks())