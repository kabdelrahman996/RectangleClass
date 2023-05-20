#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    int l, w;

    Rectangle r;

    do {
        cout << "Enter the value (in the range 0:25) of length and width: ";
        cin >> l >> w;
        if (l > 25 || l < 0 || w > 25 || w < 0) {
            cout << "Invalid value. Please enter values between 0 and 25." << endl;
        }
    } while (l > 25 || l < 0 || w > 25 || w < 0);

    r.set_length(l);
    r.set_width(w);

    cout << "You entered the length " << r.get_length() << " and the width " << r.get_width() << endl;
    cout << "The area of the rectangle is: " << r.get_area() << endl;
    cout << "The perimeter of the rectangle is: " << r.get_perimeter() << endl;

    return 0;
}