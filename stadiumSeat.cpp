/**
 * Programmer:          Corey Jenkins
 * Date:                March 25, 2025
 * Filename:            stadiumSeat.cpp
 */

#include <iostream>
#include <format>
#include <string>
 
using std::cout;
using std::cin;
using std::format;
using std::string;

 class StadiumSeat
 {
    // Private
    string ticketSeat {};
    int price {};
public:
    // Constructor.
    StadiumSeat(string ticketSeat, auto price) : ticketSeat(ticketSeat), price(price) {} 

    // Setter
    void setStadiumClass(string string) {ticketSeat = ticketSeat;}
    void setStadiumPrice(auto price) {price = price;}
    
    // Getters
    string getStadiumClass() const {return ticketSeat;}
    auto getStadiumPrice() const {return price;}

 };

 int main()
 {
    StadiumSeat seat1 {"Class A", 13};
    StadiumSeat seat2 {"Class B", 12};
    StadiumSeat seat3 {"Class C", 9};

    int buyerClassA;
    int buyerClassB;
    int buyerClassC;
    
    cout << format("Input the amount of buyers for Class A seats: ");
    cin >> buyerClassA;
    while(buyerClassA < 0)
    {
        cout << format("An error has occurred.\n");
        cout << format("Input the amount of buyers for Class A seats: ");
        cin >> buyerClassA;
    }

    cout << format("Input the amount of buyers for Class A seats: ");
    cin >> buyerClassB;
    while(buyerClassB < 0)
    {
        cout << format("An error has occurred.\n");
        cout << format("Input the amount of buyers for Class A seats: ");
        cin >> buyerClassB;
    }

    cout << format("Input the amount of buyers for Class A seats: ");
    cin >> buyerClassC;
    while(buyerClassC < 0)
    {
        cout << format("An error has occurred.\n");
        cout << format("Input the amount of buyers for Class A seats: ");
        cin >> buyerClassC;
    }

    int totalPriceA = seat1.getStadiumPrice() * buyerClassA;
    int totalPriceB = seat2.getStadiumPrice() * buyerClassB;
    int totalPriceC = seat3.getStadiumPrice() * buyerClassC;
    int completeTotal = totalPriceA + totalPriceB + totalPriceC;

    cout << format("{} of tickets sold: {}. The total amount is ${}.\n", seat1.getStadiumClass(), buyerClassA, totalPriceA);
    cout << format("{} of tickets sold: {}. The total amount is ${}.\n", seat2.getStadiumClass(), buyerClassB, totalPriceB);
    cout << format("{} of tickets sold: {}. The total amount is ${}.\n", seat3.getStadiumClass(), buyerClassC, totalPriceC);
    cout << format("The total amount of tickets for {}, {}, and {} are: ${}.\n", seat1.getStadiumClass(), seat2.getStadiumClass(), seat3.getStadiumClass(), completeTotal);
    return 0;
 }  