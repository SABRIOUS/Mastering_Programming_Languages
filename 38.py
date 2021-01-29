#is_incresing
lst = [1,2,3,3,3,4]
def is_increasing(lst):
    for second_pos in range(1,len(lst)):
        if lst[second_pos] < lst[second_pos-1]:
            return False
    return True

print(is_increasing(lst))

if __name__ == "__main__":
    n_list = list(map(int,input("Enter list numbers: ").split()))
    status = is_increasing(n_list)
    if status:
        print("YES")
    else:
        print("NO")
