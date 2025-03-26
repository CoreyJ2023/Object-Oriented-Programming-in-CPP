/*
 *  Programmer:     Corey Jenkins
 *  Date:           March 24, 2024
 *  Filename:       fuelV2.cpp
 *  Purpose:        Using a combination of a switch and while loops for input validation to select
 *                  which type of fuel and how many gallons. It will then calculate the price by the amount.
 *                  of gallons inputted.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string regular = "Regular";
    string plus = "Plus";
    string supreme = "Supreme";

    float regularPrice = 3.99;
    float plusPrice = 4.99;
    float supremePrice = 5.99;

    int gallons;
    float total;

    int fuelSelect;
    cout << "Select fuel: " << endl;
    cout << "1 - Regular" << endl;
    cout << "2 - Plus" << endl; 
    cout << "3 - Supreme" << endl;
    cin >> fuelSelect;

    while (fuelSelect > 3 || fuelSelect <= 0)
    {
        cout << "Error! Please select a fuel grade from below. These are your options:" <<endl;
        cout << "1 - Regular" << endl;
        cout << "2 - Plus" << endl;
        cout << "3 - Supreme" << endl;
        cin >> fuelSelect;
    }

    switch (fuelSelect)
    {
        case 1:
        
            cout << "You have selected: " << regular << endl;
            cout << "Please enter the amount of gallons: " << endl;
            cin >> gallons;
            while(gallons <= 0)
            {
                cout << "Error! Please enter a postive number. Please enter the amount of gallons again:" << endl;
                cin >> gallons;
            }

            total = gallons * regularPrice;
            cout << "Thank you. Here's your reciept: " << total << endl;
            break;

        case 2:

            cout << "You have selected: " << plus << endl;
            cout << "Please enter the ammount of gallons:" << endl;
            cin >> gallons;
            while (gallons <= 0)
            {
                cout << "Error! Please enter a postive number. Please enter the amount of gallons again:" << endl;
                cin >> gallons;
            }

            total = gallons * plusPrice;
            cout << "Thank you. Here is your receipt: " <<  total << "." << endl;
            break;

        case 3:
            cout << "You have selected: " << supreme << endl;
            cout << "Please enter the amount of gallons: " << endl;
            cin >> gallons;
            while (gallons <=0)
            {
                cout << "Error! Please enter a postive number. Please enter the amount of gallons again: " << endl;
                cin >> gallons;
            }

            total = gallons * supremePrice;
            cout << "Thank you. Here is your receipt: " << total << endl;
    }
    // End Module Main
    return 0; 
}