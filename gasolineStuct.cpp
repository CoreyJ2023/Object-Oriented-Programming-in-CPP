/*
 *  Programmer:         Corey Jenkins
 *  Date:           November 11, 2024
 *  Filename:       gasolineStruct.cpp
 *  Purpose:        Creating a fueling program using structs and input validation to select
 *                  fuel grade and with an input validation 
*/

#include <iostream>
using namespace std;

struct MyGasSelection
{
    double regular;
    double plus;
    double supreme;
};

int main()
{
    struct MyGasSelection MyGas;
    MyGas.regular = 3.99;
    MyGas.plus = 4.99;
    MyGas.supreme = 5.99;

    double gallonsRegular, gallonsPlus, gallonsSupreme;
    float totalRegular, totalPlus, totalSupreme;

    int gasSelect;
    cout << "Select fuel grade: " << endl;
    cout << "1 - Regular" << endl;
    cout << "2 - Plus" << endl;
    cout << "3 - Supreme" << endl;
    cin >> gasSelect;

    while(gasSelect < 1 || gasSelect > 3)
    {
        cout << "Error! Please select from 1 to 3!" << endl;
        cout << "Select fuel grade: " << endl;
        cout << "1 - Regular" << endl;
        cout << "2 - Plus" << endl;
        cout << "3 - Supreme" << endl;
        cin >> gasSelect;
    }

    switch (gasSelect)
    {
        case 01:
            cout << "You've selected Regular." << endl;
            cout << "Enter the amount of gallons" << endl;
            cin >> gallonsRegular;

            while(gallonsRegular < 0)
            {
                cout << "An error has occurred." << endl;
                cout << "Please select a non-negative number." << endl;
                cout << "Enter the amount of gallons: " << endl;
                cin >> gallonsRegular;
            }

            totalRegular = gallonsRegular * MyGas.regular;
            cout << "Thank you for fueling up: " << totalRegular << endl;
            break;

        case 02:
            cout << "You've selected Plus." << endl;
            cout << "Enter the amount of gallons" << endl;
            cin >> gallonsPlus;

            while(gallonsRegular < 0)
            {
                cout << "An error has occurred." << endl;
                cout << "Please select a non-negative number." << endl;
                cout << "Enter the amount of gallons: " << endl;
                cin >> gallonsPlus;
            }

            totalPlus = gallonsPlus * MyGas.plus;
            cout << "Thank you for fueling up: " << totalPlus << endl;
            break;

        case 03:
            cout << "You've selected Supreme." << endl;
            cout << "Enter the amount of gallons" << endl;
            cin >> gallonsSupreme;

            while(gallonsSupreme < 0)
            {
                cout << "An error has occurred." << endl;
                cout << "Please select a non-negative number." << endl;
                cout << "Enter the amount of gallons: " << endl;
                cin >> gallonsSupreme;
            }

            totalSupreme = gallonsSupreme * MyGas.supreme;
            cout << "Thank you for fueling up: " << totalSupreme << endl; 
            break;
    }

    return 0;
}