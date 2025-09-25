/**
 * Programmer:      Corey Jenkins
 * Date:            September 11, 2025 (Updated September 19, 2025)
 * Filename:        AreaRectangleClass.cpp
 */

#include <iostream>
#include <format>
#include <string>

using namespace std;

class AreaRectangleClass
{
    // Private
   int lengthRectangle {};
   int widthRectangle {};

public:
    // Constructor. Private to public - left to right.
    AreaRectangleClass(int recLen, int recWid): lengthRectangle(recLen), widthRectangle(recWid) {}

    // Setters. Public to private - left to right.
    void setRectangleLength(int recLen) {recLen = lengthRectangle;}
    void setRectangleWidth(int recWid1) {recWid1 = widthRectangle;}

    // Getters
    int getRectangleLength() const {return lengthRectangle;}
    int getRectangleWidth() const {return widthRectangle;}
};

int main()
{

    int length1, width1;
    int length2, width2;
   
    cout << format("Get the length of rectangle 1: ");
    cin >> length1;

    while(length1 <=0)
    {
        cout << ("You've either entered a negative number or zero.\n") << endl;
        cout << ("Please enter a positive number.\n") << endl;
        cout << ("Get the length of rectangle 1: ") << endl;
        cin >> length1;
    }

    cout << format("Get the width of rectangle 1: ");
    cin >> width1; 
    
    while(width1 <=0)
    {
        cout << ("You've either entered a negative number or zero.\n") << endl;
        cout << ("Please enter a positive number.\n") << endl;
        cout << ("Get the width of rectangle 1: ") << endl;
        cin >> width1;
    }

    cout << format("Get the length of rectangle 2: ");
    cin >> length2;

     while(length2 <=0)
    {
        cout << ("You've either entered a negative number or zero.\n") << endl;
        cout << ("Please enter a positive number.\n") << endl;
        cout << ("Get the length of rectangle 2: ") << endl;
        cin >> length2;
    }

    cout << format("Get the width of rectangle 2: ");
    cin >> width2;

     while(width2 <=0)
    {
        cout << ("You've either entered a negative number or zero.\n") << endl;
        cout << ("Please enter a positive number.\n") << endl;
        cout << ("Get the width of rectangle 2: ") << endl;
        cin >> width2;
    }

    while(length1 == width1)
    {
        cout << format("This is an area of a square as both length and width are equal.\n");
        cout << format("We're looking for the area of a rectangle. Please enter two different numbers:\n ");
            
        cout << format("Get the length of rectangle 1: ");
        cin >> length1;

        cout << format("Get the width of rectangle 1: ");
        cin >> width1;
    }

    while(length2 == width2)
    {
        cout << format("This is an area of a square as both length and width are equal.\n");
        cout << format("We're looking for the area of a rectangle. Please enter two different numbers:\n ");
            
        cout << format("Get the length of rectangle 2: ");
        cin >> length2;

        cout << format("Get the width of rectangle 2: ");
        cin >> width2;
    }  

    AreaRectangleClass myShape1 {length1, width1};
    AreaRectangleClass myShape2 {length2, width2};

    myShape1.setRectangleLength(length1);
    myShape1.setRectangleWidth(width1);

    myShape2.setRectangleLength(length2);
    myShape2.setRectangleWidth(width2);

    int areaRectangle1 = myShape1.getRectangleLength() * myShape1.getRectangleWidth();
    int areaRectangle2 = myShape2.getRectangleLength() * myShape2.getRectangleWidth();

    cout << format("The length and width of the first rectangle are: {} and {}\n", myShape1.getRectangleLength(), myShape1.getRectangleWidth());
    cout << format("The length and width of the second rectangle are: {} and {}\n", myShape2.getRectangleLength(), myShape2.getRectangleWidth());

    cout << format("The area of the first rectangle is: {}\n", areaRectangle1);
    cout << format("The area of the second rectangle is: {}\n", areaRectangle2);

    return 0;
}

