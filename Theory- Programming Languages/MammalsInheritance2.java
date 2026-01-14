//Mikaela-Rose Porter
//Create a class structure with the superclass being Mammal and it has three subclasses.

// Mikaela-Rose Porter
// Mammal Inheritance Program

class Mammal {
    private String name;
    private int age;
    private String species;

    //Constructor
    public Mammal(String species, String name, int age) {
        this.species = species;
        this.name = name;
        this.age = age;
    }

    //Getters and Setters
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }

    public String getSpecies() { return species; }
    public void setSpecies(String species) { this.species = species; }

    // toString method
    public String toString() {
        return name + " is a " + age + "-year-old " + species + ".";
    }
}


// Subclass 1: Elephant
class Elephant extends Mammal {
    private String action;
    private String sound;
    private String favoriteFood;

    public Elephant(String name, int age) {
        super("Elephant", name, age);
        this.action = "trumpets loudly and sprays water with its trunk";
        this.sound = "Pawoooo!";
        this.favoriteFood = "fresh leaves and fruit";
    }

    //Getters and Setters
    public String getAction() { return action; }
    public void setAction(String action) { this.action = action; }

    public String getSound() { return sound; }
    public void setSound(String sound) { this.sound = sound; }

    public String getFavoriteFood() { return favoriteFood; }
    public void setFavoriteFood(String favoriteFood) { this.favoriteFood = favoriteFood; }

    // toString
    public String toString() {
        return getName() + " the " + getSpecies() + " " + action + 
               ", makes a sound like '" + sound + "', and loves eating " + favoriteFood + ".";
    }
}


//Subclass 2: Monkey
class Monkey extends Mammal {
    private String action;
    private String sound;
    private String favoriteFood;

    public Monkey(String name, int age) {
        super("Monkey", name, age);
        this.action = "swings through trees and plays with other monkeys";
        this.sound = "Ooh ooh! Ah ah!";
        this.favoriteFood = "bananas and mangoes";
    }

    //Getters and Setters
    public String getAction() { return action; }
    public void setAction(String action) { this.action = action; }

    public String getSound() { return sound; }
    public void setSound(String sound) { this.sound = sound; }

    public String getFavoriteFood() { return favoriteFood; }
    public void setFavoriteFood(String favoriteFood) { this.favoriteFood = favoriteFood; }

    //toString
    public String toString() {
        return getName() + " the " + getSpecies() + " " + action + 
               ", says '" + sound + "', and prefers " + favoriteFood + ".";
    }
}


//Subclass 3: Bat
class Bat extends Mammal {
    private String action;
    private String sound;
    private String favoriteFood;

    public Bat(String name, int age) {
        super("Bat", name, age);
        this.action = "flies silently through the night using echolocation";
        this.sound = "Screech!";
        this.favoriteFood = "insects and fruit";
    }

    //Getters and Setters
    public String getAction() { return action; }
    public void setAction(String action) { this.action = action; }

    public String getSound() { return sound; }
    public void setSound(String sound) { this.sound = sound; }

    public String getFavoriteFood() { return favoriteFood; }
    public void setFavoriteFood(String favoriteFood) { this.favoriteFood = favoriteFood; }

    //toString
    public String toString() {
        return getName() + " the " + getSpecies() + " " + action + 
               ", makes a sound like '" + sound + "', and eats mostly " + favoriteFood + ".";
    }
}


//Test Program
public class MammalTest {
    public static void main(String[] args) {
        Elephant elephant = new Elephant("Nala", 12);
        Monkey monkey = new Monkey("Milo", 5);
        Bat bat = new Bat("Luna", 3);

        System.out.println(elephant);
        System.out.println(monkey);
        System.out.println(bat);
    }
}
