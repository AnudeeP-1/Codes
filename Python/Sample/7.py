from random import randint
N=20
array = []
for a in range(N):
    array.append(int(randint(100,1000)))
array.sort()
print(array, end=" ")
    