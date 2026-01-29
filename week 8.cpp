#include <iostream>
using namespace std;

class Square {
protected:
    double side;

public:
    // Constructor
    Square(double s) {
        side = s;
        cout << "Square constructor called" << endl;
    }

    // Get perimeter
    double getPeri() {
        return 4 * side;
    }

    // Get area
    double getArea() {
        return side * side;
    }

    // Destructor
    ~Square() {
        cout << "Square destructor called" << endl;
    }
};

class Cube : public Square {
public:
    // Constructor
    Cube(double s) : Square(s) {
        cout << "Cube constructor called" << endl;
    }

    // Get surface area of cube
    double getArea() {
        return 6 * side * side;
    }

    // Get volume of cube
    double getVolume() {
        return side * side * side;
    }

    // Destructor
    ~Cube() {
        cout << "Cube destructor called" << endl;
    }
};

int main() {
    Square sq(4);
    cout << "Square Perimeter: " << sq.getPeri() << endl;
    cout << "Square Area: " << sq.getArea() << endl;

    cout << endl;

    Cube cb(4);
    cout << "Cube Surface Area: " << cb.getArea() << endl;
    cout << "Cube Volume: " << cb.getVolume() << endl;

    return 0;
}