#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined" << endl;
    }
};

class Circle : public Shape {
public:
    float r;

    Circle(float radius) {
        r = radius;
    }

    void calculateArea() {
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    float l, w;

    Rectangle(float length, float width) {
        l = length;
        w = width;
    }

    void calculateArea() {
        cout << "Rectangle Area = " << l * w << endl;
    }
};

class Demo {
public:
    void display() {
        cout << "Hello" << endl;
    }

    void display(int x) {
        cout << "Number: " << x << endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->calculateArea();

    s = &r;
    s->calculateArea();

    Demo d;
    d.display();
    d.display(10);

    return 0;
}