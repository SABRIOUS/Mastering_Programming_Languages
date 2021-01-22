n = int(input("Enter a num: "))
m = int(input("Enter a second num: "))
sum = int(input("Enter a third num: "))
count = 0
for a in range(1,n+1):
    for b in range(1,m+1):
        if a + b == sum:
            count += 1
print(count)            
