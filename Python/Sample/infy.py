#PF-Assgn-16
def make_amount(rupees_to_make,no_of_five,no_of_one):
    five_needed=0
    one_needed=0
    five_needed=rupees_to_make//5
    if five_needed>no_of_five:
        flag=1
    else:
        flag=0
    one_needed=rupees_to_make%5
    if one_needed>no_of_one:
        flag=1
    else:
        flag=0
        # TODO: write code...

    #Start writing your code here
    #Populate the variables: five_needed and one_needed


    # Use the below given print statements to display the output
    # Also, do not modify them for verification to work

    
    if flag==1:
        print(-1)
    else:
        print("No. of Five needed :", five_needed)
        print("No. of One needed  :", one_needed)


#Provide different values for rupees_to_make,no_of_five,no_of_one and test your program
make_amount(11,2,11)