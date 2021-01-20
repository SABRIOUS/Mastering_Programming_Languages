x = input("Enter a num: ")
tracker = len(x) - 1
revers = ""

while tracker >= 0:
    revers = revers + x[tracker]
    tracker -= 1

print("Reverse Number is",revers,"...Reverse * 3=",int(revers) *3)
