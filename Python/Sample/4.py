num = int(input("Enter the number"))
base = int(input("Enter the base(2-9)"))
if (base<2 or base>9):
    quit()
num2 = ''
while num!=0:
    num2 = str(num%base) + num2
print(num2)