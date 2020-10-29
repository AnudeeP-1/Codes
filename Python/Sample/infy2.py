#PF-Tryout

def convert_currency(amount_needed_inr,current_currency_name):
    current_currency_amount=0
    #write your logic here
    if current_currency_name=='Euro':
        current_currency_amount=(amount_needed_inr*1)/0.01417
        return current_currency_amount
    elif current_currency_name=='British Pound':
        current_currency_amount=(amount_needed_inr*1)/0.0100
        return current_currency_amount
    elif current_currency_name=='Australian Dollar':
        current_currency_amount=(amount_needed_inr*1)/0.02140
        return current_currency_amount
    elif current_currency_name=='Canadian Dollar':
        current_currency_amount=(amount_needed_inr*1)/0.02027
        return current_currency_amount
    
    else:
        return -1


#Provide different values for amount_needed_inr,current_currency_name and test your program
currency_needed=convert_currency(2000,"British Pound")
if(currency_needed!= -1):
    print(currency_needed )
else:
    print("Invalid currency name")