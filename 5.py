# print 100 if the number is even
# print 7 if the number is odd

num = int(input("Please Enter a num: "))
is_even = num % 2 == 0
is_odd = num % 2 != 0

print((is_even and 100) or (is_odd and 7))
