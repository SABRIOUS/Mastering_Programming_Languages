# the_pattern_of_two 
def split_pairs(word):
    two = 2
    result = []
    if word == "":
        return []
    else:
        for i in range(0,len(word),2):
            result.append(word[i:two])
            two += 2
        if len(result[-1]) < 2:
            result[-1] += "_"
        return result

if __name__ == '__main__':
    print("Example:")
    print(list(split_pairs('abcd')))

    # These "asserts" are used for self-checking and not for an auto-testing
    assert list(split_pairs('abcd')) == ['ab', 'cd']
    assert list(split_pairs('abc')) == ['ab', 'c_']
    assert list(split_pairs('abcdf')) == ['ab', 'cd', 'f_']
    assert list(split_pairs('a')) == ['a_']
    assert list(split_pairs('')) == []
    print("Coding complete? Click 'Check' to earn cool rewards!")
