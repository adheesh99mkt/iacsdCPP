/*Shape Sorting with Interfaces:
Problem Statement: Implement a shape sorting program.
 Define a base class Shape with properties like area and perimeter. 
 Create derived classes like Circle, Rectangle, and Triangle. 
 Implement an interface Sortable with a method to compare shapes by area. 
Use this interface to sort a list of shapes.*/

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}

    double area() const  {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

bool compareShapesByArea(const Shape* shape1, const Shape* shape2) {
    return shape1->area() < shape2->area();
}

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    Shape* shapes[] = {&circle, &rectangle, &triangle};
    int size = sizeof(shapes) / sizeof(shapes[0]);

   sort(shapes, shapes + size, compareShapesByArea);

    for (int i = 0; i < size; i++) {
        cout << "Shape " << i + 1 << ": Area = " << shapes[i]->area() << ", Perimeter = " << shapes[i]->perimeter() << endl;
    }

    return 0;
}


/*OUTPUT
Shape 1: Area = 6, Perimeter = 12
Shape 2: Area = 24, Perimeter = 20
Shape 3: Area = 78.5397, Perimeter = 31.4159

--------------------------------
Process exited after 0.028 seconds with return value 0
Press any key to continue . . .

*/
