n = int(input("Entera num "))
x = 0
tracker = 1
even_num = 0
count_even = 0
odd_num = 0
count_odd = 0

while tracker <= n:
    x = int(input("Enter x  number: "))
    if tracker % 2 == 0:
        even_num +=  x
        count_even += 1
    else:
         odd_num += x
         count_odd += 1
    tracker += 1
print("Even_Average",even_num/count_even)
print("Odd Average",odd_num/count_even)
