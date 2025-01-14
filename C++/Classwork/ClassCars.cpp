//Mikaela-Rose Porter
#include <iostream>
#include <string>
using namespace std;

//first define the class
class Car
{
    private:
        int yearModel; //the car's year model
        string make;
        int speed; //how fast is the car going
    public:
        Car(int y, string m)
        {
            yearModel = y;
            make = m; speed = 0;
        }
        //accessors or getters for each variable/attribute
        int getYearModel()
        {return yearModel;}

        string getMake()
        {return make;}

        int getSpeed()
        {return speed;}

        //accelerate function
        void accelerate()
        { speed += 5;}

        //brake function
        void brake()
        {speed -= 5;}
};

int main()
{
    int count;
    //first create a car
    Car toyota(2023, "Toyota");
    //display the current speed
    cout << "Current speed: " << toyota.getSpeed() << endl;
    
    for(count = 0; count < 13; count++)
    {
        toyota.accelerate();
        cout << "Current speed: " << toyota.getSpeed() << endl;
    }
    for(count = 0; count < 13; count++)
    {
        toyota.brake();
        cout << "Current speed: " << toyota.getSpeed() << endl;
    }

    return 0;
}