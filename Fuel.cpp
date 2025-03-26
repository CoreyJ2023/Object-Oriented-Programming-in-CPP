/*
 * Programmer:     Corey Jenkins
 * Date:           March 24, 2024
 * Filename:       Fuel.cpp
 * Purpose:        Creating a program using OoP: Mutators and Accessors with input validation or while loops
 *                  to select what fuel type and then calculate the total with the amount of gallon(s) entered
 *                  with the price.
*/

#include <iostream>
using namespace std;

class Fuel
{
    private:
        string nameOfFuel;
        double priceOfFuel;
    public:
        void setNameOfFuel(string);
        void setPriceOfFuel(double);
        string getNameOfFuel() const;
        double getPriceOfFuel() const;
};

void Fuel::setNameOfFuel(string fuelName)
{
    nameOfFuel = fuelName;
}

void Fuel::setPriceOfFuel(double fuelPrice)
{
    priceOfFuel= fuelPrice;
}

string Fuel::getNameOfFuel() const 
{
    return nameOfFuel;
}

double Fuel::getPriceOfFuel() const
{
    return priceOfFuel;
}

int main()
{
    Fuel myFuel;

    string regular = "Regular";
    string plus = "Plus";
    string supreme = "Supreme";

    double regularPrice = 3.99;
    double plusPrice = 4.99;
    double supremePrice = 5.99;

    int gallons;
    double total;

    int fuelSelect;

    cout << "Select your fuel type: " << endl;
    cout << "1 - Regular" << endl;
    cout << "2 - Plus" << endl; 
    cout << "3 - Supreme" << endl;
    cin >> fuelSelect;
    while(fuelSelect < 1 || fuelSelect > 3)
    {
        cout << "Error! Please select 1, 2 or 3 and select a fuel type: " << endl;
        cout << "1 - Regular" << endl;
        cout << "2 - Plus" << endl; 
        cout << "3 - Supreme" << endl;
        cin >> fuelSelect;
    }

    switch (fuelSelect)
    {
        case 1:
        myFuel.setNameOfFuel(regular);
        myFuel.setPriceOfFuel(regularPrice);

        cout << "You have selected: " << myFuel.getNameOfFuel() << endl;
        cout << "Enter gallons: " << endl;
        cin >> gallons;
        while(gallons <= 0)
        {
            cout << "Error! Please enter a postive number value. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = myFuel.getPriceOfFuel() * gallons;
        cout << "Thank you. Here's your total: " << total << endl;
        break;

        case 2:
        myFuel.setNameOfFuel(plus);
        myFuel.setPriceOfFuel(plusPrice);

        cout << "You have selected: " << myFuel.getNameOfFuel() << endl;
        cout << "Enter gallons: " << endl;
        cin >> gallons;
        while(gallons <= 0)
        {
            cout << "Error! Please enter a postive number value. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = myFuel.getPriceOfFuel() * gallons;
        cout << "Thank you. Here's your total: " << total << endl;
        break;

        case 3:
        myFuel.setNameOfFuel(supreme);
        myFuel.setPriceOfFuel(supremePrice);

        cout << "You have selected: " << myFuel.getNameOfFuel() << endl;
        cout << "Enter gallons: " << endl;
        cin >> gallons;
        while(gallons <= 0)
        {
            cout << "Error! Please enter a postive number value. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = myFuel.getPriceOfFuel() * gallons;
        cout << "Thank you. Here's your total: " << total << endl;
        break;
    }
    // End Module main()
    return 0;
}