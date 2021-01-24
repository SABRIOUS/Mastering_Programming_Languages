def special_multiplication(word):
    """
    takes a string and return
    multipl charachter by postion
    abc : abbccc
    """
    for index,value in enumerate(word):
        i = index + 1
        print(value * i, end = "")

special_multiplication("abcxf")
