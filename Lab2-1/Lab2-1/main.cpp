#include <iostream>
#include "rectangleType.h"

int main() {
    // Create two rectangles
    rectangleType rect1(4.0, 5.0);
    rectangleType rect2(2.5, 3.5);

    // Display the initial rectangles
    std::cout << "Rectangle 1: " << rect1 << std::endl;
    std::cout << "Rectangle 2: " << rect2 << std::endl;

    // Test arithmetic operators
    rectangleType rect3 = rect1 + rect2;
    rectangleType rect4 = rect1 - rect2;
    rectangleType rect5 = rect1 * rect2;

    std::cout << "Rectangle 1 + Rectangle 2: " << rect3 << std::endl;
    std::cout << "Rectangle 1 - Rectangle 2: " << rect4 << std::endl;
    std::cout << "Rectangle 1 * Rectangle 2: " << rect5 << std::endl;

    // Test increment and decrement operators
    rect1++;
    rect2--;

    std::cout << "After incrementing Rectangle 1: " << rect1 << std::endl;
    std::cout << "After decrementing Rectangle 2: " << rect2 << std::endl;

    // Test comparison operators
    if (rect1 == rect2) {
        std::cout << "Rectangle 1 is equal to Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is not equal to Rectangle 2" << std::endl;
    }

    if (rect1 != rect2) {
        std::cout << "Rectangle 1 is not equal to Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is equal to Rectangle 2" << std::endl;
    }

    if (rect1 <= rect2) {
        std::cout << "Rectangle 1 is less than or equal to Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is not less than or equal to Rectangle 2" << std::endl;
    }

    if (rect1 < rect2) {
        std::cout << "Rectangle 1 is less than Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is not less than Rectangle 2" << std::endl;
    }

    if (rect1 >= rect2) {
        std::cout << "Rectangle 1 is greater than or equal to Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is not greater than or equal to Rectangle 2" << std::endl;
    }

    if (rect1 > rect2) {
        std::cout << "Rectangle 1 is greater than Rectangle 2" << std::endl;
    }
    else {
        std::cout << "Rectangle 1 is not greater than Rectangle 2" << std::endl;
    }

    return 0;
}
