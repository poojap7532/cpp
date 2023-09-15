//1. WAP to perform some basic mathematical operations
//using Abstract class such like:
//- area of circle
//- area of triangle
//- area of rectangle
//- use one single pure virtual function named
//calculate() to perform all above operations
#include<iostream>
using namespace std;



class Shape {
public:
    // Pure virtual function to calculate area
    virtual void calculate() = 0;
};

// Circle class derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the calculate() function for Circle
    void calculate() {
        double area = 3.14159 * radius * radius;
        cout << "Area of the circle: " <<area<<endl;
    }
};

// Triangle class derived from Shape
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Implementation of the calculate() function for Triangle
    void calculate() {
        double area = 0.5 * base * height;
        cout << "Area of the triangle: " <<area<<endl;
    }
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the calculate() function for Rectangle
    void calculate() {
        double area = length * width;
        cout << "Area of the rectangle: " <<area<<endl;
    }
};

int main() {
    // Create objects of different shapes
    Circle circle(5);
    Triangle triangle(4, 6);
    Rectangle rectangle(3, 7);

    // Calculate and display the areas
    circle.calculate();
    triangle.calculate();
    rectangle.calculate();

    return 0;
}


