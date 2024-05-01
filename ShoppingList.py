#Mikaela-Rose Porter
"""This is a menu-driven program that allows a user to create
a shopping list.

Algorithm:
1.) Create an empty list
2.) Get the user's input(option to add an item, remove an item,
sort, print the list, or quit)
3.) if/else statements for each option
    a) if add item:
        i) check list for item and add item if not already on list
    b) if remove item:
        i) check list for item; if there remove it
        ii) if not there; state that it's not in the list
    c) if sort:
        i) use sort command
    d) if print list:
        i) print the numbered list
    e) else:
        print a message that says there input is invalid
"""

ShoppingList = []

menu = "MENU: \n a - Add an Item \n r - Remove an Item \n s - Sort Shopping List \n p - Print Shopping List \n q - Quit"

while True:
    print(menu)
    choice = input("Please enter your choice: ")
    if choice == "a":
        item = input("Enter the item you want to add: ")
        ShoppingList.append(item)
    elif choice == "r":
        item = input("Enter the item you want to remove: ")
        if item in ShoppingList:
            ShoppingList.remove(item)
        else:
            print("That item isn't in the list.")
    elif choice == "s":
        ShoppingList.sort()
        print("Shopping List sorted: ", ShoppingList)
    elif choice == "p":
        if not shopping_list:
            print("Shopping List is empty.")
        else:
            print("Shopping List:")
            for index, item in enumerate(shopping_list, start=1):
                print(f"{index}. {item}")
    elif choice == "q":
        print("Exiting the program. Goodbye!")
        break
    else:
        print("Invalid option. Please try again.")
        
