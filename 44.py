def between_markers(word: str, begin: str, end: str) -> str:
    first_idx = 0
    last_idx = 0
    for idx,char in enumerate(word):
        if char == begin:
            first_idx = idx
        if char == end:
            last_idx = idx

    return word[first_idx+1:last_idx]


if __name__ == '__main__':
    print('Example:')
    print(between_markers('What is >apple<', '>', '<'))

    # These "asserts" are used for self-checking and not for testing
    assert between_markers('What is >apple<', '>', '<') == "apple"
    assert between_markers('What is [apple]', '[', ']') == "apple"
    assert between_markers('What is ><', '>', '<') == ""
    assert between_markers('>apple<', '>', '<') == "apple"
    print('Wow, you are doing pretty good. Time to check it!')
