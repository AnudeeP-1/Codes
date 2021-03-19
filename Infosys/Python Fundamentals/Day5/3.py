#PF-Assgn-36
def create_largest_number(number_list):
    temp=0
    new_list=""
    for i in range(0,len(number_list)):
        for j in range(i+1,len(number_list)):
            if i<j:
                temp=number_list[i]
                number_list[i]=number_list[j]
                number_list[j]=temp
    for i in number_list:
        new_list=new_list+str(i)
    return new_list
                
                
    #remove pass and write your logic here

number_list=[23,45,67]
largest_number=create_largest_number(number_list)
print(largest_number)