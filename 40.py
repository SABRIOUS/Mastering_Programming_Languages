def find_smallest(lst,target_type):
    return min([i for i in lst if type(i)==target_type])

if __name__ == '__main__':
    lst = [10,-2.5,20,5,'ahmed',5.2,'mohamed']
    print(find_smallest(lst,type(0)))
    print(find_smallest(lst,type(0.0)))
    print(find_smallest(lst,type(' ')))
