#OOPR-Assgn-8
#Start writing your code here
class Student:
    def __init__(self):
        self.__student_id=0
        self.__marks=0
        self.__age=0
        self.__course_id=0
        self.__fees=0
    def set_student_id(self, student_id):
        self.__student_id=student_id
    def set_marks(self, marks):
        self.__marks=marks
    def set_age(self, age):
        self.__age=age
    def choose_course(self, course_id):
        if course_id==1001 or course_id==1002:
            if self.__course_id==1001:
                self.__course_id=1001
                self.__fees=25575.0
                return True
            else:
                self.__course_id=1002
                self.__fees=15500.0
                return True
            if self.__marks>85:
                self.__fees=(self.__fees*25)/100
                return True
        else:
            return False
    def get_student_id(self):
        return self.__student_id
    def get_marks(self):
        return self.__marks
    def get_age(self):
        return self.__age
    def validate_marks(self):
        if self.__marks>=0 and self.__marks<=100:
            return True
        else:
            return False
    def validate_age(self):
        if self.__age>20:
            return True
        else:
            return False
    def check_qualification(self):
        if (self.validate_marks()==True and self.validate_age()==True and self.__marks>=65):
            return True
        else:
            return False

s=Student()
s.set_student_id(101)
s.set_marks(69)
s.set_age(21)

# print(s.get_student_id())
# print(s.get_marks())
# print(s.get_age())
# print(s.check_qualification())
print(s.choose_course(1001))