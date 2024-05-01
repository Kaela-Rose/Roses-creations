#Mikaela-Rose Porter
"""
Write a menu driven program that contains a dictionary of pickled vegetables
There should be vegetables (at least 6) and prices. Menu options: display
the list, add a veggie, or change a veggie price
Algorithm:

1.) Create an empty dictionary
2.) Set up the menu in a loop that goes untill the user decides to quit
    Options:
        a) display veggies and prices
        b) add a veggie and price
        c) change a price
        d) delete a veggie and price
        e) quit the program
3.) implement the choices in a a if/elif/else statement
4.) print a farewell message
"""

Veggies = {"broccoli":1.99, "carrots":2.99, "onion":0.79, "green peppers":1.50,
           "potatoes": 2.75, "mushrooms": 2.49}

Menu = """Menu options:
        1.) Display veggies and their prices
        2.) Add a veggie and it's price
        3.) Change a price
        4.) Delete a veggie and price
        5.)Quit the program"""
    
for item in Veggies:
    print(item, "$", Veggies[item])
    
choice = 0
while choice != 5:
    print()
    print(Menu)
    choice = int(input("Enter your choice: "))
    if choice == 1:
        for item in Veggies:
            print(item, "$", Veggies[item])
    elif choice == 2:
        item = input("Enter a new veggie: ")
        price = float(input("Enter a price for that veggie: "))
        Veggies[item] = price
    elif choice == 3:
        item = input("Which veggie price do you want to change? ")
        if item in Veggies:
            price = float(input("Enter new price for that veggie: "))
            Veggies[item] = price
        else:
            print("Veggie not found.")
    elif choice == 4:
        item = input("Which veggie do you want to remove? ")
        if item in Veggies:
            del Veggies[item]
            print(item, "removed successfully.")
        else:
            print("Veggie not found.")
    elif choice == 5:
        print("Thank you for using our program")
    else:
        print("Invalid option, try again.")
        



