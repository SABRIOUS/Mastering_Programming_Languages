# is_even in 3 different ways
num  = int(input("Enter a number: "))
# by %2 operator
is_even1 = (num % 2) == 0
print("is_even1",is_even1)
# is is_even using / 2
is_even2  = (num / 2 ) - int(num/2) == 0
print("is_even2",is_even2)
# is is_even using /%0
is_even3 = num % 10 == 2 or num % 10 == 8 or num % 10 == 0 or num % 10 == 6
print("is_even3",is_even3)
print(is_even1,is_even2,is_even3)
