#PF-Exer-22

def generate_ticket(airline,source,destination,no_of_passengers):
    tickets=[]
    for ticket_number in range(101,101+no_of_passengers):
        tickets.append ('%s:%s:%s:%d'%(airline,source,destination,ticket_number))
        if no_of_passengers > 5:
            print(tickets[-5:])  
        else:  
            print(tickets)
        #Write your logic here

    #Use the below return statement wherever applicable

#Provide different values for airline,source,destination,no_of_passengers and test your program
print(generate_ticket("AI","Bangalore","London",7))