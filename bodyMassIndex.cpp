/**
 * Programmer:      Corey Jenkins
 * Date:            March 25, 2025
 * Filename:        bodyMassIndex.cpp
 */

 #include <iostream>
 #include <string>
 #include <format>
 #include <cmath>

 using std::cout;
 using std::format;
 using std::cin;

 class BodyMassIndex
 {
    // Private
    int formula {};
public:
    // Constructor
    BodyMassIndex(int formula) : formula(formula) {}

    // Setter
   void setBodyMassFormula(int formula) {formula = formula;}

   // Getter
   double getBodyMassFormula() const {return formula;}
};

int main()
{
    BodyMassIndex weightFormula {703};
    int weight;
    int height;

    cout << format("Enter your weight in pounds: ");
    cin >> weight;

    cout << format("Enter your height in feet: ");
    cin >> height;

    while(weight < 1 || height < 1)
    {
        cout << format("An error has occurred. Please enter a number greater than 0.\n");

        cout << format("Enter your weight in pounds: ");
        cin >> weight;

        cout << format("Enter your height in feet: ");
        cin >> height;
    }

    int inches;
    inches = height * 12; // To convert to inches
    auto inchesConversion {pow(inches, 2.0)};
    auto bmi {weightFormula.getBodyMassFormula() * (weight / (inchesConversion))};
    float bmiRounding = round(bmi * 100) / 100;
    cout << format("The BMI is: {}.\n", bmiRounding);

    return 0;
}