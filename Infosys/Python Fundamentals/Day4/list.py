#PF-Assgn-32
def max_visited_speciality(patient_medical_speciality_list,medical_speciality):
    # write your logic here
    count=1
    k=''
    new_list=[]
    for i in range(1,len(patient_medical_speciality_list),2):
        for j in range(i+2,len(patient_medical_speciality_list),2):
            if k!=patient_medical_speciality_list[i]:
                if patient_medical_speciality_list[i]==patient_medical_speciality_list[j]:
                    count=count+1
        if k!=patient_medical_speciality_list[i]:
            new_list.append(count)
            new_list.append(patient_medical_speciality_list[i])
            k=patient_medical_speciality_list[i]
            count=1
    for i in range(1,len(new_list),2):
        for j in range(i+2,len(new_list),2):
            if new_list[i-1]>new_list[j-1]:
                 dicti=new_list[i]
            elif new_list[i-1]==new_list[j-1]:
                return ("Same number")
            else:
                dicti=new_list[j]
    for i in medical_speciality.keys():
        if i==dicti:
            return medical_speciality.get(i)

#provide different values in the list and test your program
patient_medical_speciality_list=[301,'E',302, 'O' ,305, 'O' ,401, 'E' ,656, 'O',656, 'E']
medical_speciality={"P":"Pediatrics","O":"Orthopedics","E":"ENT"}
speciality=max_visited_speciality(patient_medical_speciality_list,medical_speciality)
print(speciality)