# given an integer then count the number of digits
x = int(input("Enter x "))
num = x
if x == 0:
    count_integer = 1
else:
    count_integer = 0
    while x > 0:
        x = x //10
        count_integer += 1

print("the number of digits of",num,"is",count_integer)
