#PF-Assgn-28

def find_max(num1, num2):
    max_num=-1
    list=[]
    if(num1<num2):
        for j in range(num1,num2+1):
            i=j
            sum=0
            while(i!=0):
                rem=i%10
                sum=sum+rem
                i=i//10
                
            if(sum%3==0 and len(str(j))==2 and j%5==0):
                list.append(j)
        if(len(list)!=0):
            max_num=max(list)
            return max_num
        else:
            max_num=-1
            return max_num
    else:
        max_num=-1
        return max_num
    # Write your logic here
    return max_num

#Provide different values for num1 and num2 and test your program.
max_num=find_max(2,14)
print(max_num)