n,a,b = map(int,input("Enter 3 number with space like m a b: ").split())
count = 0
for i in range(n+1):
    if i <= 10 and i in range(a,b+1):
        count += i
    if i > 10:
        first = i // 10
        second = i % 10
        sum_ = first + second
        if sum_ in range(a,b+1):
            count += i

print(count)
