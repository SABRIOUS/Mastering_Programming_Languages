# return number that divided by 8 and 4 or 3
n = int(input("Enter a number that divided by or 4 or 3>>> : "))
x = 0
while n > x:
    if x % 8 == 0 or (x % 4 == 0 and x % 3 == 0):
        print(x,end= " ")
    x += 1
