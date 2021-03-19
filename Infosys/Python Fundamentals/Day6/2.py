#PF-Assgn-41
def find_ten_substring(num_str):
    result_list=[]
    sum=0
    for i in range(0,3):
        for j in range(i,3):
            sum=(int(num_str[i])+int(num_str[j]))
            if (sum==10):
                result_list.append(num_str[i]+num_str[j])
    return result_list

num_str="282"
print("The number is:",num_str)
result_list=find_ten_substring(num_str)
print(result_list)