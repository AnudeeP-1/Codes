#PF-Tryout
import calendar
def generate_next_date(day,month,year):
    #Start writing your code here
    if ((month==1) or (month==3) or (month==5) or (month==7) or (month==8) or (month==10) or (month==12)) and (day==31):
        if month!=12:
            next_day=1
            next_month=month+1
            next_year=year
            print(next_day,"-",next_month,"-",next_year)
        if month==12:
            next_day=1
            next_month=1
            next_year=year+1
            print(next_day,"-",next_month,"-",next_year)
    elif ((month==1) or (month==3) or (month==5) or (month==7) or (month==8) or (month==10)) and (day<31):
        next_day=day+1
        next_month=month
        next_year=year
        print(next_day,"-",next_month,"-",next_year)
    elif day>31:
        print("Invalid date")

    else:
        if month==2 and calendar.isleap(year):
            if day>29:
                print("Invalid date")
            if day==28:
                next_day=29
                next_month=2
                next_year=year
                print(next_day,"-",next_month,"-",next_year)
            elif day==29:
                next_day=1
                next_month=3
                next_year=year
                print(next_day,"-",next_month,"-",next_year)
            else:
                if day<29:
                    next_day=day+1
                    next_month=month+1
                    next_year=year
                    print(next_day,"-",next_month,"-",next_year)
        else:
            if day<28:
                next_day=day+1
                next_month=month
                next_year=year
                print(next_day,"-",next_month,"-",next_year)
            else:
                print("Invalid date")
generate_next_date(31,4,2020)
