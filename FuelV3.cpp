/*
 *  Programmer:     Corey Jenkins
 *  Date:           March 25, 2024
 *  Filename:       FuelV3.doc
 *  Purpose:        Using structs and while loops to create a program that calculates how it cost to fuel
 *                   up a vehicle by fuel grade and gallon(s) entered.
*/

#include <iostream>
using namespace std;

struct FuelV3
{
    string regular = "Regular";
    string plus = "Plus";
    string supreme = "Supreme";

    double regularPrice = 3.99;
    double plusPrice = 4.99;
    double supremePrice = 5.99;
};

int main()
{
    FuelV3 myFuel;

    double total;
    int gallons;
    int fuelSelect;

    cout << "Enter your fuel grade: " << endl;
    cout << "1 - Regular" << endl;
    cout << "2 - Plus" << endl;
    cout << "3 - Supreme" << endl;
    cin >> fuelSelect;
    while(fuelSelect < 1 || fuelSelect > 3)
    {
        cout << "Error! Please enter 1, 2, or 3, to select your fuel grade: " << endl;
        cout << "1 - Regular" << endl;
        cout << "2 - Plus" << endl;
        cout << "3 - Supreme" << endl;
        cin >> fuelSelect;
    }

    switch (fuelSelect)
    {
        case 1:
        cout << "You have selected: " << myFuel.regular << endl;
        cout << "Enter gallon(s)" << endl;
        cin >> gallons;
        while(gallons <=0)
        {
            cout << "Error! Please enter a positive value and try again. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = gallons * myFuel.regularPrice;
        cout << "Here's the total amount: " << total;
        break;

        case 2:
        cout << "You have selected: " << myFuel.plus << endl;
        cout << "Enter gallon(s)" << endl;
        cin >> gallons;
        while(gallons <=0)
        {
            cout << "Error! Please enter a positive value and try again. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = gallons * myFuel.plusPrice;
        cout << "Here's the total amount: " << total;
        break;

        case 3:
        cout << "You have selected: " << myFuel.supreme << endl;
        cout << "Enter gallon(s)" << endl;
        cin >> gallons;
        while(gallons <=0)
        {
            cout << "Error! Please enter a positive value and try again. Please enter gallons: " << endl;
            cin >> gallons;
        }

        total = gallons * myFuel.supremePrice;
        cout << "Here's the total amount: " << total;
        break;
    }
    // End Module main
    return 0;
}