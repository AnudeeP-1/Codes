# a = [1,2,3,2]#lists
# a.append(4)
# print(a)
# a.extend([5])
# print(a)
# a.insert(2,-1)
# print(a) #sort,reverse,count,index,remove,a[start:stop:skip]
# a[::2]
# print(a)
# a=[1,2,3,4,5,6,7,8]
# print(a[::2])
# print("Tuple")
# tuple = 4545,'hk','op' # packing and unpacking
# a,b,c = tuple
# print(a)
# print(b)
# print(c)
# #sets
# a=set('abracadabra')#they are not ordered &is intersection | is union ^ is symetric difference ie union -intersection
# print(a)
# a=set('enormayu')
# print(a)
# b=set('student')
# print(b)
# print("a-b",a-b)
# print("b-a",b-a)
# print(a^b)
print("Dictionary")# dictionary 
#notation is {}
tel = {'Anu':546666}
tel['deep']=2152251
print(tel)
print(list(tel.keys()))
print(list(tel.values()))
print(tel['Anu'])
del tel['Anu']
print(tel)
tel['Anu']=12345
print(tel)
print(sorted(tel.keys()))
print('Anu' in tel)
print('Anudeep' in tel) #tel.pop('Anu')

mlist = ['test','rest','best']

for i in mlist[:]:
    if len(mlist) > 2:
        mlist.insert(0,i)
print(mlist)