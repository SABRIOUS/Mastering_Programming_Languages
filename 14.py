# given an integer then count the number of digits
x = int(input("Enter x "))

count_integer = 0

while x > 0:
    x = x //10
    count_integer += 1

print(count_integer)
