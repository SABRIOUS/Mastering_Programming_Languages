how_many = int(input("how many tries you want: "))
for i in range(how_many):
    n = int(input("how many numbers you want: "))
    sum_result = 0

    for i in range(1,n+1):
        x = int(input("Enter a num: "))
        sum_result += x**i

    print("sum is",sum_result)
