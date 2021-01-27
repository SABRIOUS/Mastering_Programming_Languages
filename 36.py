def our_reverse(lst):
    for i in range(len(lst)-1,-1,-1):
        lst.append(lst.pop(i))
    return lst

n = input("Enter numbers like 1 2 3: ").split()
print(our_reverse(n))
