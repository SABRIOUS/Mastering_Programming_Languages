n = int(input("Enter a num: "))
m = int(input("Enter a second num: "))
sum = int(input("Enter a third num: "))
count = 0
# for a in range(1,n+1):
#     for b in range(1,m+1):
#         if a + b == sum:
#             count += 1
for i in range(1,n+1):
    # we already know the sum num and i
    # and we need to know j from simple mathematics equations
    # sum = i + j if we make a new for loop
    j = sum -i
    if j >= 1 and j <= m:
        count += 1
print(count)
