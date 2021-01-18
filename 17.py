while True:
    print("Menu:")
    print("Enter 1 to sum numbers from 1 to N")
    print("Enter 2 to evaluate simple 2 numbers expression (e.g). 2 + 3")
    print("Enter 3 to end the program")
    print()
    choice = int(input("Enter choice from 1 to 3: "))
    if choice == 1:
        n = int(input("Enter a number: "))
        sum_n = 0
        while n >= 1:
            sum_n += n
            n -= 1
        print("Sum from 1 to",n,sum_n)
        print("-"*50,"\n")
    elif choice == 2:
        expression = input("Enter a sample expression: ")
        y = input("The Value of expression is: ")
        print("-"*50,"\n")
    elif choice > 3:
        print("Invaild Number... Try Again")
        print(" ")
    elif choice == 3:
        break
        print("-"*50,"\n")
