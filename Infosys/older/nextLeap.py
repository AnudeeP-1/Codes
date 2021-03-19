#PF-Assgn-22
import calendar
def find_leap_years(given_year):
    list_of_leap_years=[]
    count=0
    while(count<15):
        given_year+=1
        if calendar.isleap(given_year)==True:
            list_of_leap_years.append(given_year)
            count+=1

    # Write your logic here

    return list_of_leap_years

list_of_leap_years=find_leap_years(2001)
print(list_of_leap_years)