#include <iostream>
using namespace std;

struct Car
{
    string carModel;
    int carYear;
};

void changeNameCar(Car &c)
{
    cout << "************Change the Name of the Car********** " << endl;
    string name;
    cout << "Enter the name of the car ";
    cin >> name;
    c.carModel = name;
}

void changeYearCar(Car &c)
{
    cout << "*********Change the Year of the car*********** " << endl;
    int year;
    cout << "Enter the year of the car ";
    cin >> year;
    c.carYear = year;
}

// Avoid unnecessary copying so pass by refrence 
void carDetails(const Car &c)
{
    cout << "===============CAR DETAILS================" << endl;
    cout << "Name of the Car: " << c.carModel << endl;
    cout << "year of the car: " << c.carYear << endl;
}

int main()
{
    Car myCar = {"Toyota", 1973};
    carDetails(myCar);

    cout << "Do you want to change the Details of the Car " << endl;
    cout << "1. YES" << endl;
    cout << "2. NO" << endl;

    int num;
    cin >> num;
    if (num == 1)
    {
        changeNameCar(myCar);
        changeYearCar(myCar);
        // Finally show the change the output of the details
        carDetails(myCar);
    }
    else
    {
        cout << "===========THANK YOU==========" << endl;
        return 0;
    }
}