#Mikaela-Rose Porter
"""a program to manage a phonebook dictionary of 10 friends/relatives
"""

menu = """Menu:
          1. See a list of people the dictionary
          2. Print the entire dictionary (people and phone numbers)
          3. Look up the value by giving the name
          4. Add a person to the dictionary
          5. Check to see if a person is in the dictionary 
          6. Remove a person from the dictionary
          Enter -1 to quit."""

friendsFam = {"Mommy":"312-289-8658", "Mia":"313-949-1280‬", "Miah":"803-876-4682‬", "Nia":"917-434-2245‬","Lauryn":"‭202-281-5599‬",
"Aunty Chikyla":"404-793-9016‬", "Aunty Amber": "‭248-595-6884‬", "Brian":"662-996-6247‬", "Xaren": "770-557-7250‬", "Kiki":"770-597-3168‬"}

choice = ""

while choice != -1:
    print()
    print("*******************")

    print(menu)
    print()
    choice = int(input("What would you like to do: "))
    if choice == 1:
        for key in friendsFam:
            print(key)
    elif choice == 2:
        for key in friendsFam:
            print(key, friendsFam[key])
    elif choice == 3:
        person = input ("Whose number do you want? ")
        if person in friendsFam:
            print(friendsFam[person])
        else:
            print("They aren't in the book sorry, try again")
    elif choice == 4:
        person = input("Enter the person you want to add: ")
        phone = input("Give their phone number: ")
        if person in friendsFam:
            print("They are already there")
        else:
            friendsFam[person] = phone
    elif choice == 5:
        person = input ("Who do you want to check?")
        if person in friendsFam:
            print("They are in the dictionary ")
        else:
            print("Sorry not found")
    elif choice == 6:
        person = input("Who are we throwing out? ")
        del friendsFam[person]
    else:
        print("Invalid entry, try again.")
        
print("Thank you for using our software.")





