# max_postions return index for the first and second

lst = [52,48,10,15,3,100,8,50,2,52,102]
max_first,max_second = lst[0],lst[1]

# if max_first < max_second:
#     max_first,max_second = max_second,max_first

for value in lst:
    if value > max_first:
        max_first,max_second = value,max_first
    elif value > max_second:
        max_second = value
print(max_first,max_second)
