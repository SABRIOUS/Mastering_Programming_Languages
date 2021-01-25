# return True if the number is prime
def is_prime(num):
    if num == 1:
        return False
    elif num == 2:
        return True
    else:
        for i in range(2,num):
            if num % i == 0:
                return False
    return True

# print(is_prime(31))

# return n-th prim number

def nth_prime(n):
    if n == 1:
        return 2
    position_value = 1
    num = 3
    while position_value <= n:
        if is_prime(num):
            position_value += 1
            if position_value == n:
                return num
        num += 1

for i in range(1,10):
    print(i,nth_prime(i))
