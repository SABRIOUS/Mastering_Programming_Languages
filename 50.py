lst = [4, 6, 2, 2, 6, 4, 4, 4]

new_d = {}
# if lst == [] or len(lst) == 1:
#     return lst
for i in lst:
    if i not in new_d:
        new_d[i] = 1
    else:
        new_d[i] += 1
#
final_lst = []
# for idx,value in new_d.items():
#     while value > 0:
#         final_lst.append(idx)
#         value -= 1
# print(sorted(new_d,key=new_d.get))
n = sorted(new_d.items(),key=lambda  x:x[1],reverse=True)
for idx,value in n:
    while value > 0:
        final_lst.append(idx)
        value -= 1
print(final_lst)        
