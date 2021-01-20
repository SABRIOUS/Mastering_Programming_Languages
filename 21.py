
n = int(input("Enter how many Try: "))
while n > 0:
    x = int(input("how many number you want to get: "))
    min_num = 20
    while x > 0:
        y= int(input("Enter a num: "))
        if y < min_num:
            min_num = y
        x -= 1
    print("the min is",min_num)
    n -= 1
