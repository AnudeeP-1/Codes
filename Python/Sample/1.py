from random import randint
x = randint(1,100)
trialNo = 1
guess= -1
print(x)
while x!=guess :
    print("Trial %d: " %trialNo, end='')
    guess = int(input("Enter the number "))
    if x == guess:
        print("Correct number")
        break
    elif guess > x:
        print("Larger")
    else:
        print("Small")
    trialNo = trialNo+1
