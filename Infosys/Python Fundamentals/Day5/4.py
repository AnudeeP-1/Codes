#PF-Assgn-37

#Global variables
child_id=(11, 12, 13, 14, 15)
chocolates_received=[22, 33, 44, 55, 66]

def calculate_total_chocolates():
    total_chocolates = sum(chocolates_received)
    return total_chocolates
    #Remove pass and write your logic here to find and return the total number of chocolates

def reward_child(child_id_rewarded,extra_chocolates):
    if (child_id_rewarded in child_id)==False:
        print("Child id is invalid")
    elif extra_chocolates<1:
            print("Extra chocolates is less than 1")
    else:
        if (child_id_rewarded in child_id)==True:
            index1=child_id.index(child_id_rewarded)
            chocolates_received[index1]=(chocolates_received[index1]+extra_chocolates)
        print(chocolates_received)
print(calculate_total_chocolates())
reward_child(20,5)

#Test your code by passing different values for child_id_rewarded,extra_chocolates
