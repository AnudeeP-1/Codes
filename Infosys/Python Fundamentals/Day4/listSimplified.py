#PF-Assgn-32
def max_visited_speciality(patient_medical_speciality_list,medical_speciality):
    # write your logic here
    cP,cO,cE=0,0,0
    for i in patient_medical_speciality_list:
        if 'P'==i:
            cP+=1
        elif 'E'==i:
            cE+=1
        elif 'O'==i:
            cO+=1
       
            
    if cP>cO and cP>cE:
        return medical_speciality['P']
    elif(cO>cE):
        return medical_speciality['O']
    else:
        return medical_speciality['E']

#provide different values in the list and test your program
patient_medical_speciality_list=[301,'P',302, 'P' ,305, 'P' ,401, 'E' ,656, 'E']
medical_speciality={"P":"Pediatrics","O":"Orthopedics","E":"ENT"}
speciality=max_visited_speciality(patient_medical_speciality_list,medical_speciality)
print(speciality)