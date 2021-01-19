n = int(input("Enter a num: "))
y = n
x = 1

while n > 0:
    print(n*" ",x*"*")
    x += 2
    n -= 1

while x > 0:
    print(n*" ",x*"*")
    x -= 2
    n += 1
