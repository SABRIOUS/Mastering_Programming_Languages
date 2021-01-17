# intervals x fall in s1 and e1 and so on
how_many = 0
x,s1,e1,s2,e2,s3,e3=map(int,input("Enter x then s1,e1... e3 >>> ").split())

if s1 <= x < e1:
    how_many += 1
if s2 <= x < e2:
    how_many += 1
if s3 <= x < e3:
    how_many += 1

if how_many == 0:
    print("doesnt exist")
else:
    print(how_many)
