def between_markers(word: str, fir: str, sec: str) -> str:

    if fir in word and sec in word:
        pos_1 = word.find(fir)
        pos_2 = word.find(sec)
        return word[len(fir)+pos_1:pos_2]

    elif fir in word and sec not in word:
        pos_1 = word.find(fir)
        return word[len(fir)+pos_1:]

    elif fir not in word and sec in word:
        return word[:word.find(sec)]
    elif word.find(fir) > word.find(sec):
        return ""
    else:
        return word

if __name__ == '__main__':
    print('Example:')
    print(between_markers('What is >apple<', '>', '<'))

    # These "asserts" are used for self-checking and not for testing
    assert between_markers('What is >apple<', '>', '<') == "apple", "One sym"
    assert between_markers("<head><title>My new site</title></head>",
                           "<title>", "</title>") == "My new site", "HTML"
    assert between_markers('No[/b] hi', '[b]', '[/b]') == 'No', 'No opened'
    assert between_markers('No [b]hi', '[b]', '[/b]') == 'hi', 'No close'
    assert between_markers('No hi', '[b]', '[/b]') == 'No hi', 'No markers at all'
    assert between_markers('No <hi>', '>', '<') == '', 'Wrong direction'
    print('Wow, you are doing pretty good. Time to check it!')
