#Mikaela-Rose Porter
#Mammal Inheritance in Python

#The Mammal class represents a generic mammal.
class Mammal:
    def __init__(self, species, name):
        self._species = species
        self._name = name
        self.warm_blooded = True
        self.produces_milk = True
        self.live_birth = True

    def show_species(self):
        print(f"I am a {self._species}.")

    def make_sound(self):
        print("Grrrrr!")

    def action(self):
        print("Walk!")

    def show_traits(self):
        print(f"- Warm-blooded: {self.warm_blooded}")
        print(f"- Produces milk: {self.produces_milk}")
        print(f"- Gives live birth: {self.live_birth}")

    def __str__(self):
        return f"{self._name} the {self._species}"


#Subclass 1: Dog
class Dog(Mammal):
    def __init__(self, name):
        super().__init__("Dog", name)
        self.description = "Dogs are loyal companions known for their energy and love for humans."

    def make_sound(self):
        print("Woof! Woof!")

    def action(self):
        print("The dog wags its tail and runs around excitedly.")

    def __str__(self):
        return f"{self._name} is a {self._species}. {self.description}"


#Subclass 1A: Shih Tzu (subspecies of Dog)
class ShihTzu(Dog):
    def __init__(self, name):
        super().__init__(name)
        self._species = "Shih Tzu"
        self.description = "Shih Tzus are small, confident dogs with long, silky hair and royal attitudes."

    def make_sound(self):
        print("Yip! Yip!")

    def action(self):
        print("The Shih Tzu struts proudly, then curls up for a nap.")

    def __str__(self):
        return f"{self._name} is a {self._species}. {self.description}"


#Subclass 2: Cat
class Cat(Mammal):
    def __init__(self, name):
        super().__init__("Cat", name)
        self.description = "Cats are agile, moody, and fiercely independent companions."

    def make_sound(self):
        print("Meow. Meow.")

    def action(self):
        print("The cat knocks something off the table just because it can.")

    def __str__(self):
        return f"{self._name} is a {self._species}. {self.description}"


#Subclass 3: Dolphin
class Dolphin(Mammal):
    def __init__(self, name):
        super().__init__("Dolphin", name)
        self.description = "Dolphins are intelligent, playful marine mammals that love attention."

    def make_sound(self):
        print("Eee-eee-eee!")

    def action(self):
        print("The dolphin leaps gracefully out of the water and splashes back down.")

    def __str__(self):
        return f"{self._name} is a {self._species}. {self.description}"


#Test Program
def main():
    dog = Dog("Rex")
    shih_tzu = ShihTzu("Sasha")
    cat = Cat("Mittens")
    dolphin = Dolphin("Blue")

    animals = [dog, shih_tzu, cat, dolphin]

    for animal in animals:
        print("\n" + str(animal))
        animal.show_species()
        animal.show_traits()
        animal.make_sound()
        animal.action()

if __name__ == "__main__":
    main()
