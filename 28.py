n,a,b = map(int,input("Enter 3 number with space like m a b: ").split())
count = 0
# for i in range(n+1):
#     if i <= 10 and i in range(a,b+1):
#         count += i
#     if i > 10:
#         first = i // 10
#         second = i % 10
#         sum_ = first + second
#         if sum_ in range(a,b+1):
#             count += i
total = 0
for i in range(1,n+1):
    temp = i
    sum_ = 0
    while temp > 0:
        sum_ += temp % 10
        temp //= 10
    if sum_ in range(a,b+1):
        total += i
print(total)
