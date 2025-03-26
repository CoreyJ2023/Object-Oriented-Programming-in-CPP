/**
 * Programmer:      Corey Jenkins
 * Date:            March 25, 2025
 * Filename:        bugCollector.cpp 
 */

#include <iostream> 
#include <format>
#include <cmath>

using std::cout;
using std::cin;
using std::format;

class KiloMeterConverter
{
    // Private
    double kilometerFormula {};
public:
    // Constructor
    KiloMeterConverter(double kilometerFormula) : kilometerFormula(kilometerFormula) {}

    // Setter
    void setKiloMeterConverter(double kilometerFormula) {kilometerFormula = kilometerFormula;}
    
    // Getter
    double getKiloMeterConverter() const {return kilometerFormula;}

};

int main()
{
    KiloMeterConverter converter {0.6214};

    int kilometers;
    cout << format("Enter the amount of kilometers: ");
    cin >> kilometers;

    while(kilometers < 0)
    {  
        cout << format("An error has occurred. Enter a positive number.\n");
        cout << format("Enter the amount of kilometers: ");
    }

    auto miles = converter.getKiloMeterConverter() * kilometers;
    auto roundingMiles = round(miles * 100) / 100;
    cout << format("The amount in miles: {}.\n", roundingMiles);
}