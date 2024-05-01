#Mikaela-Rose Porter
"""a program that creates a dictionary containing the names of the Galilean
moons of Jupiter as keys and their mean radiuses (in kilometers) as values. 
Algorithm:
1.) Create the three dictionaries
2.) Display the names of the moons and ask the user to pick one
3.) Print the name of the moon, it's radius, surface gravity, and orbital period.
"""
menu = """
        1. Io
        2. Europa
        3. Ganymede
        4. Callisto
        5. Quit"""

#create dictionaries for radius, surface gravity, and orbital period
MoonsRad = {"Io": 1821.6, "Europa": 1560.8, "Ganymede": 2634.1, "Callisto": 2410.3}
MoonsSG = {"Io": 1.796, "Europa": 1.314, "Ganymede": 1.428, "Callisto": 1.235}
MoonsOP = {"Io": 1.769, "Europa": 3.551, "Ganymede": 7.154, "Callisto": 16.689}

print(menu)
#Initializing the choice as a blank string
choice = ""

#loop to give the user an option of which moon's information they would like to see.
while choice != 5:
    choice = int(input("Select the number of the moon you would like: "))
    if choice == 1:
        print("Io has a radius of ", MoonsRad["Io"], ", surface gravity", MoonsSG["Io"], ",and orbital period", MoonsOP["Io"])
    elif choice == 2:
        print("Europa has a radius of ", MoonsRad["Europa"], ", surface gravity", MoonsSG["Europa"], ",and orbital period", MoonsOP["Europa"])
    elif choice == 3:
        print("Ganymede has a radius of ", MoonsRad["Ganymede"], ", surface gravity", MoonsSG["Ganymede"], ",and orbital period", MoonsOP["Ganymede"])
    elif choice == 4:
        print("Callisto has a radius of ", MoonsRad["Callisto"], ", surface gravity", MoonsSG["Callisto"], ",and orbital period", MoonsOP["Callisto"])
    elif choice == 5:
        #stoping the code because 5 was entered
        print("Thanks for using this program")
        break
    else:
        print("Invalid entry")
    print()
    print(menu)
