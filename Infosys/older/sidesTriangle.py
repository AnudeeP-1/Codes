#PF-Assgn-24
def form_triangle(num1,num2,num3):
    #Do not change the messages provided below
    success="Triangle can be formed"
    failure="Triangle can't be formed"

    #Write your logic here
    if num1>=num2+num3 or num2>=num1+num3 or num3>=num1+num2:
        print (failure)
    else:
        print (success)
        # TODO: write code...

    #Use the following messages to return the result wherever necessary

#Provide different values for the variables, num1, num2, num3 and test your program
num1=1
num2=2
num3=3
form_triangle(num1, num2, num3)