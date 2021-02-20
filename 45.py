# In a given text you need to sum the numbers.
# Only separated numbers should be counted.
# If a number is part of a word it shouldn't be counted.
# The text consists from numbers, spaces and english letters
lst = 'my numbers is 2'
s = 0
for i in lst.split():
    try:
        s += int(i)
    except ValueError:
        continue
# print(s)

q = sum([int(i) for i in lst.split() if i.isdigit()])
print(q)
