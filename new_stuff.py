

# TYPES
x = 3
y = "string"
z = 3.1

# CASTING
x = str(3)  # '3'
y = int(x)  # 3
z = float(x)  # 3.0

# TYPES
print(type(x))  # string

# quotes
st = 'string'
st2 = "string"

# multiple variables in one go
x, y, z = "orange", "banana", "Cherry"

#output and input
print(x)
print(x + " taster better than " + y)  # so indeed works with strings

# casting is needed for numerical values while printing
x = 3
print(str(x))

# functions


def multiplier(x, y)


return x * y


#global variables
x = 3


def threetimes(y)


return x * y  # uses x = 3 because it is declared above function at same level


# lists
x = ["apple", "banana", "cherry"]
# Lists are absolutely amazing!
for item in x:
    print(item)
    # prints all items of list/array

# length of list
print(len(x))

# lists are data type irrellevant
list1 = ["abc", 34, True, 40, "male"]

# lists are array like reachable
print(list1[0])  # prints first element

# we can even use inverted indexes
print(list1[-1])  # prints latest element

# we can even use a range of indexes
print(list1[2:4])  # from 2 to 5

# adding to end list
list1.append("rice")

# remove from list
list1.pop(1)  # removes second item

# remove from list
list1.remove("rice")

# sort list
list1.sort()

# find inside string
string = "abcdefgh"
d = string.find('d')  # returns -1 if not found

# substring
if d != -1:
    substring = string[d:]  # substring starting from index d
    print(substring)
