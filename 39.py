def main():
    lst = list(map(int,input("num sperate by space like 4 9 ...>>> ").split()))
    d_list = {}
    for num in lst:
        if num not in d_list:
            d_list[num] = 1
        else:
            d_list[num] += 1

    max_value = sorted(d_list.values(),reverse=False)[-1]
    result = ""
    for key,value in d_list.items():
        if value == max_value:
            result = "value "+str(key)+" repeated "+str(value)
            return result
if __name__ == "__main__":
    print(main())
