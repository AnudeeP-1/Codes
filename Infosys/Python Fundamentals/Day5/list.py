#PF-Assgn-34
def find_pairs_of_numbers(num_list,n):
    count=0
    for i in range(0,len(num_list)):
        for j in range(i+1,len(num_list)):
            if i+j==6:
                count +=1
    return count
    #Remove pass and write your logic here

num_list=[1, 2, 7, 4, 5, 6, 0, 3]
n= 6
print(find_pairs_of_numbers(num_list,n))