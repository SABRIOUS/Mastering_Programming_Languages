n = int(input("Enter a num: "))

while n > 0:
    choice = ""
    x = input("Enter a string: ")
    y = input("Enter a nother: ")
    if len(x) == 2 and ("no" or "nO" or "NO" or "No" in x):
        choice = x
    if len(y) == 2 and ("no" or "nO" or "NO" or "No" in x):
        choice = y
        print("Match: "+choice)
    n -= 1
