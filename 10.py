# sort 3 numbers

a,b,c = map(int,input("Enter 3 number like 0 1 2>>> ").split())

first = ""
second = ""
third = ""

if a <= b and a <= c and b <= c:
    first,second,third =a,b,c
elif a <= b and a <= c and c <= b:
    first,second,third =a,c,b
elif b <= a and b <= c and a <= c:
    first,second,third =b,a,c
elif b <= a and b <= c and c <= a:
    first,second,third =b,c,a
elif c <= a and c <= b and a <= b:
    first,second,third =c,a,b
else:
    first,second,third =c,b,a

print(first,second,third)

#
# if a > b:
#     a,b = b,a
#
# if b > c:
#     b,c = c,b
#     if a > b:
#         a,b = b,a
# print(a,b,c)
   
