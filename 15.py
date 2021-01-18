# given a starting x and an ending number y
# print all number beween x and y
x,y = map(int,input("Enter x y integer: ").split())

while x <= y:
    print(x)
    x += 1
