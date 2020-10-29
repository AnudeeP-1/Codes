#PF-Assgn-19

def calculate_bill_amount(food_type,quantity_ordered,distance_in_kms):
    bill_amount=0
    if food_type=='N' and distance_in_kms<3:
        bill_amount=quantity_ordered*150+0
        return bill_amount
    elif food_type=='N' and (distance_in_kms>3 and distance_in_kms<6):
        bill_amount=quantity_ordered*150+3
        return bill_amount
    elif food_type=='N' and distance_in_kms>=6:
        bill_amount=quantity_ordered*150+6
        return bill_amount
    elif food_type=='V' and distance_in_kms<3:
        bill_amount=quantity_ordered*120+0
        return bill_amount
    elif food_type=='V' and (distance_in_kms>3 and distance_in_kms<6):
        bill_amount=quantity_ordered*120+3
        return bill_amount
    elif food_type=='V' and distance_in_kms<=6:
        bill_amount=quantity_ordered*120+6
        return bill_amount
    else:
        return -1

#Provide different values for food_type,quantity_ordered,distance_in_kms and test your program
bill_amount=calculate_bill_amount("N",1,7)
print(bill_amount)