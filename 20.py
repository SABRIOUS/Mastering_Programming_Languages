# return multible of 3 but nit multible 4

x = int(input("Enter a number: "))
trakcer=1
y = 1
while x >= trakcer:
    if y % 3 == 0 and y % 4 != 0:
        print(y)
        trakcer += 1
    y += 1
