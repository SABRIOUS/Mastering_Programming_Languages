n = int(input("Enter a num: "))
for i in range(n):
    if i == 2 or i == 3:
        print(i,end = " ")
    if i > 1 and i % 2 != 0 and i % 3 != 0:
        print(i,end = " ")
