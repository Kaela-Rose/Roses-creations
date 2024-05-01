#Mikaela-Rose Porter
"""Algorithm:

No algorithm necessary"""

#Create an empty list
myList = []

#Add elements to the list using append method
myList.append(16)
myList.append(23.3)
myList.append("hello world")
myList.append(False)


#Display the list
print(myList)

#Add 14, 176, 44.1, and "spelman" using concatenation
myList += [14, 176, 44.1, "spelman"]

#Display the list
print(myList)

#Add elements to the list using append method; "ATL", 176
myList.append("ATL")
myList.append(176)

#Display the list
print(myList)

#Insert "morehouse" into position 4
myList.insert(4, "morehouse")

#Display the list
print(myList)

#Insert "morehouse" into position 4
myList.insert(0, 99)

#Display the list
print(myList)
print()

#Find the index of 44.1
print(myList.index(44.1))


#Count the occurrence of 176 in the list. 
print(myList.count(176))

#Remove the first occurrence of 176 from the list.
myList.remove(176)

print(myList)
