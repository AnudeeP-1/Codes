def find_sum(a,b):
    try:
        print(a+c)
    except NameError:
        print("Function name error")
    finally:
        print("Sum finally")
try:
    find_sum(12,13)
except NameError:
    print("Invocation name error")
finally:
    print("Invocation finally")