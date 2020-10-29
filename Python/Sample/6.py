x = abs(int(input("Enter the integer \n")))
sum = 0
mul = 1
while x!=0:
    digit = (x%10)
    sum = (sum + digit)
    mul = (mul * digit)
    x=x//10
print("Sum = ",sum,"\nMul = ",mul)