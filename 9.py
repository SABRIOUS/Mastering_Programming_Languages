# arithmatics based of conditions
a,b = map(int,input("enter two number a b: ").split())

if a % 2 != 0 and b % 2 != 0:
    print("a * b =",a*b)
elif a % 2 == 0 and b % 2 == 0 and b != 0:
    print("a / b =",a / b)
elif a % 2 != 0 and b % 2 == 0:
    print("a + b =",a+b)
else:
    print("a-b =",a - b)
