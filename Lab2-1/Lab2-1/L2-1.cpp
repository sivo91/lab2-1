


//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : Rectangle Overloading, L2-1.ccp                   * 
//*                                                                     * 
//* Written by      : Peter Sivak                                       * 
//*                                                                     * 
//* Purpose         : Use Overloading to compare 2 rectanglesTypes      * 
//*                                                                     * 
//*                                                                     * 
//* Inputs          : User enters 2 numbers for first and second rects. * 
//*                                                                     * 
//* Outputs         : Comparing 2 rectangleTypes with overloading       * 
//*                                                                     * 
//* Calls           : No internal or external calls, other than system  * 
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                       User lunch program and got prompts to insert  *
//*                       2 numbers for first and second rectangle.     *
//*                                                                     *
//*                   STOP                                              * 
//*                       Program compare 2 rectangles and show results * 
//*                                                                     * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//*    10/2/22      psivak 000.000.000 Initial release of program       * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 





#include <iostream>
#include "rectangleType.h"

using namespace std;



double rectangleType::area() const {
    return length * width;
}

double rectangleType::getLength() const {
    return length;
}

double rectangleType::getWidth() const {
    return width;
}

double rectangleType::perimeter() const {
    return 2 * (length + width);
}

void rectangleType::setDimension(double l, double w) {
    if (l > 0 && w > 0) {
        length = l;
        width = w;
    }
    else {
        cout << "Invalid dimensions. Length and width must be positive." << endl;
    }
}

rectangleType rectangleType::operator + (const rectangleType& other) const {
    return rectangleType(length + other.length, width + other.width);
}


rectangleType rectangleType::operator - (const rectangleType& other) const {
    double newLength = length - other.length;
    double newWidth = width - other.width;

    if (newLength > 0 && newWidth > 0) {
        return rectangleType(newLength, newWidth);
    }
    else {
        cout << "Subtraction resulted in non-positive dimensions." << endl;
        return rectangleType();
    }
}

rectangleType rectangleType::operator * (const rectangleType& other) const {
    return rectangleType(length * other.length, width * other.width);
}

// pre increment non member func
rectangleType rectangleType::operator ++ () {
    ++length;
    ++width;
    return *this;
}

// post increment with int 945 page
rectangleType rectangleType::operator ++ (int) {
    rectangleType temp(*this);
    ++length;
    ++width;
    return temp;
}

rectangleType rectangleType::operator -- () {
    if (length > 1 && width > 1) {
        --length;
        --width;
    }
    else {
        cout << "Decrement resulted in non-positive dimensions." << endl;
    }
    return *this;
}

rectangleType rectangleType::operator -- (int) {
    rectangleType temp(*this);
    if (length > 1 && width > 1) {
        --length;
        --width;
    }
    else {
        cout << "Decrement resulted in non-positive dimensions." << endl;
    }
    return temp;
}

bool rectangleType::operator == (const rectangleType& other) const {
    return (length * width) == (other.length * other.width);
}

bool rectangleType::operator != (const rectangleType& other) const {
    return (length * width) != (other.length * other.width);
}

bool rectangleType::operator <= (const rectangleType& other) const {
    return (length * width) <= (other.length * other.width);
}

bool rectangleType::operator < (const rectangleType& other) const {
    return (length * width) < (other.length * other.width);
}

bool rectangleType::operator >= (const rectangleType& other) const {
    return (length * width) >= (other.length * other.width);
}

bool rectangleType::operator > (const rectangleType& other) const {
    return (length * width) > (other.length * other.width);
}


rectangleType::rectangleType() : length(0.0), width(0.0) {
    cout << "Peter Sivak, rectangleType.h " << endl;
}


rectangleType::rectangleType(double l, double w) {
    if (l > 0 && w > 0) {
        length = l;
        width = w;
    }
    else {
        cout << "Invalid dimensions. Length and width must be positive." << endl;
        length = 0;
        width = 0;
    }
}

// cout << friend func
ostream& operator<<(ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << " Width: " << rect.width;
    return os;
}

// cin >> friend func
istream& operator>>(istream& is, rectangleType& rect) {
    double l, w;
    is >> l >> w;
    rect.setDimension(l, w);
    return is;
}




int main() {

    double l1, w1, l2, w2;

    rectangleType rect1;
    rectangleType rect2;


    cout << "Enter dimension for 1st rectangle:";
    cin >> rect1;
    cout << "Enter dimension for 2nd rectangle:";
    cin >> rect2;


    // display the initial rectangles
    cout << "Rectangle 1: " << rect1 << endl;
    cout << "Rectangle 2: " << rect2 << endl;

    // test arithmetic operators
    rectangleType rect3 = rect1 + rect2;
    rectangleType rect4 = rect1 - rect2;
    rectangleType rect5 = rect1 * rect2;

    cout << "Rectangle 1 + Rectangle 2: " << rect3 << endl;
    cout << "Rectangle 1 - Rectangle 2: " << rect4 << endl;
    cout << "Rectangle 1 * Rectangle 2: " << rect5 << endl;

    // test increment and decrement operators
    rect1++;
    rect2--;

    cout << "After incrementing Rectangle 1: " << rect1 << endl;
    cout << "After decrementing Rectangle 2: " << rect2 << endl;

    // test comparison operators
    if (rect1 == rect2) {
        cout << "Rectangle 1 is equal to Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is not equal to Rectangle 2" << endl;
    }

    if (rect1 != rect2) {
        cout << "Rectangle 1 is not equal to Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is equal to Rectangle 2" << endl;
    }

    if (rect1 <= rect2) {
        cout << "Rectangle 1 is less than or equal to Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is not less than or equal to Rectangle 2" << endl;
    }

    if (rect1 < rect2) {
        cout << "Rectangle 1 is less than Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is not less than Rectangle 2" << endl;
    }

    if (rect1 >= rect2) {
        cout << "Rectangle 1 is greater than or equal to Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is not greater than or equal to Rectangle 2" << endl;
    }

    if (rect1 > rect2) {
        cout << "Rectangle 1 is greater than Rectangle 2" << endl;
    }
    else {
        cout << "Rectangle 1 is not greater than Rectangle 2" << endl;
    }

    return 0;
}
