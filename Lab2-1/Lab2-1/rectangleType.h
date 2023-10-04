
#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>
using namespace std;


class rectangleType {

    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

protected:
    double length;
    double width;

public:
    double area() const;
    double getLength() const;
    double getWidth() const;
    double perimeter() const;
    void setDimension(double l, double w);

    
    rectangleType operator + (const rectangleType&) const;
    rectangleType operator - (const rectangleType&) const;
    rectangleType operator * (const rectangleType&) const;
    rectangleType operator ++ ();
    rectangleType operator ++ (int);
    rectangleType operator -- ();
    rectangleType operator -- (int);
    bool operator == (const rectangleType&) const;
    bool operator != (const rectangleType&) const;
    bool operator <= (const rectangleType&) const;
    bool operator < (const rectangleType&) const;
    bool operator >= (const rectangleType&) const;
    bool operator > (const rectangleType&) const;

   
    rectangleType();
    rectangleType(double l, double w);

    
    
};

#endif 
