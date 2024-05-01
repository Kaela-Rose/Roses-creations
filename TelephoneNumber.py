#Mikaela-Rose Porter
"""Write a program that asks the user to enter a 10-character
telephone number in the format XXX-XXX-XXXX. The application should
display the telephone number with any alphabetic characters that
appeared in the original translated to their numeric equivalent.
Algorithm:
1.) Get the number from the user which may contain letters, digits, and -
    create an empty spring to store the result - newNum

2.) Using a for loop
    a) As ve process the characters make them upper case
    b) Use a complicated if/elf/elif
    if letter is in "ABC":
        newNum, append (*2')
    elif in DEF, append 3
    elif in GHI, append 4
    elif in JKL, append 5
    elif in MNO, append 6
    elif in PQRS, append 7
    elif in TUV, append 8
    elif in WXYZ, append 9
    else append the character (for digits and -)

"""
# Prompt the user to enter a phone number
phoneNum = input("Enter a phone number: ")
newNum = ""

for char in phoneNum:
    let = char.upper()
    if let in "ABC":
        newNum.append("2")
    elif let in "DEF":
        newNum.append("3")
    elif let in "GHI":
        newNum.append("4")
    elif let in "JKL":
        newNum.append("5")
    
    elif let in "MNO":
        newNum.append("6")
    elif let in "PQRS":
        newNum.append("7")
    elif let in "TUV":
        newNum.append("8")
    elif let in "WXYZ":
        newNumm.append("9")
    else:
        newNum = newNum + char

print("The old number was ", phoneNum, ". The new number is ", newNum)








