#PF-Assgn-33

def find_common_characters(msg1,msg2):
    common_characters=""
    for i in msg1:
        for j in msg2:
            if i==" " or j==" ":
                continue
            elif i==j:
                common_characters=common_characters+i
    common=""
    prev=""
    for i in common_characters:
        if i not in prev:
            common=common+i
            prev=prev+i
    return common
        #Remove pass and write your logic here

#Provide different values for msg1,msg2 and test your program
msg1="moto"
msg2="moto"
common_characters=find_common_characters(msg1,msg2)
print(common_characters)