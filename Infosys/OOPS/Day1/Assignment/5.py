class Vehicle:
    def __init__(self):
        self.__vehicle_cost=0
        self.__vehicle_type=0
        self.__vehicle_id=0
        self.__premium_amount=0
    def premium_amount(self):
        if self.__vehicle_type=="Two Wheeler":
            self.__premium_amount=(self.__vehicle_cost*2)/100
        elif self.__vehicle_type=="Four Wheeler":
            self.__premium_amount=(self.__vehicle_cost*6)/100
        else:
            print("Vehicle type is invalid")
    def set_vehicle_cost(self,cost):
        self.__vehicle_cost=cost
    def set_vehicle_id(self, id):
        self.__vehicle_id=id
    def set_vehicle_type(self,type):
        self.__vehicle_type=type
    def set_amount(self):
        self.__premium_amount=self.__vehicle_cost
    def get_vehicle_cost(self):
        return self.__vehicle_cost
    def get_vehicle_id(self):
        return self.__vehicle_id
    def get_vehicle_type(self):
        return self.__vehicle_type
    def get_premium_amount(self):
        return self.__premium_amount
    
v=Vehicle()
v.set_vehicle_cost(10000)
v.set_vehicle_id(101)
v.set_vehicle_type("Two Wheeler")
v.premium_amount()
print(v.get_vehicle_cost())
print(v.get_vehicle_id())
print(v.get_vehicle_type())
print(v.get_premium_amount())