#PF-Assgn-38

def check_double(number):
    str1=""
    number=str(number)
    double=int(int(number)*2)
    double=str(double)
    if(len(str(number))==len(str(double))):
        for i in number:
            for j in double:
                if i not in str1:
                    if i==j:
                        str1=str1+i
        if (str1==number):
            return True
        else:
            return False
    else:
        return False
    #Remove pass and write your logic here

#Provide different values for number and test your program
print(check_double(245))