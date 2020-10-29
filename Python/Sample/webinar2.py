num = 10
for num in range(1, num + 1):
   if num > 1:
       for i in range(2, num):
           if (num % i) == 0:
               break
       else:
           print(num)



# def multi(value):
#     for i in range(1,11):
#         res = value * i
#         print(res, end=" ")

# multi(value)