#OOPR-Assgn-7
#Start writing your code here
class Instructor:
    def __init__(self):
        self.instructor_name="Anudeep"
        self.technology_skill=["JAVA", "PYTHON"]
        self.experience=4
        self.avg_feedback=4.4
    def check_eligibility(self):
        if self.experience>3 and self.avg_feedback>=4.5:
            return True
        elif self.experience <=3 and self.avg_feedback>=4:
            return True
        else:
            return False
    def allocate_course(self, technology):
        if self.check_eligibility():
            if technology in self.technology_skill:
                return True
            else:
                return False
        return False
    def set_instructor_name(self, name):
        self.instructor_name=name
    def set_technology_skill(self, skill):
        self.technology_skill=skill
    def set_experience(self, experience):
        self.experience=experience
    def set_avg_feedback(self, avg_feedback):
        self.avg_feedback=avg_feedback
                
i1=Instructor()
i1.set_instructor_name("Anudeep")
i1.set_technology_skill(["JAVA","PYTHON"])
i1.set_experience(4)
i1.set_avg_feedback(4.1)
print(i1.allocate_course("COBOL"))
            
    # allocate_course(technology): Return true if the course which requires the given technology can be allocated to the instructor. Else, return false
        
    