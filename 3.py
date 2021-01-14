# last 3 digit sum
num  = int(input("Enter a number: "))

first = num % 10
se = num // 10
second = se % 10
th = se//10
third = th % 10
print(first+second+third)
