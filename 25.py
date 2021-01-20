# special sum
# read integer t for number of test cases
# 2 test cases 3 num like 5 7 2 result should be (5+7*7+2*2*2)
how_man = int(input("how many cases: "))

while how_man > 0:
    num = int(input("Enter how many num you want: "))
    pow = 1
    sum_pow = 0
    while num > 0:
        x = int(input("Enter num: "))
        sum_pow += x**pow
        pow += 1
        num -= 1
    print("sum is ",sum_pow)
    how_man -= 1
