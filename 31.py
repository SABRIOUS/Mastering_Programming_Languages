# get max of two numbers
def my_max2(a,b):
    if a > b:
        return a
    return b
# get max of three numbers
def my_max3(a,b,c):
    max_num = my_max2(a,b)
    if max_num > c:
        return max_num
    return c

# get max of four numbers
def my_max4(a,b,c,d):
    max_num = my_max3(a,b,c)
    if max_num > d:
        return max_num
    return d

# get max of five numbers
def my_max5(a,b,c,d,e):
    max_num = my_max4(a,b,c,d)
    if max_num > e:
        return max_num
    return e

# get max of six numbers
def my_max6(a,b,c,d,e,f):
    max_num = my_max5(a,b,c,d,e)
    if max_num > f:
        return max_num
    return f


print(my_max6(100,800,10000,2,3,9999))
