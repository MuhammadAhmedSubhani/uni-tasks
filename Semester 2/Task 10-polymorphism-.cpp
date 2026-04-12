#include <iostream>
#include <cmath>
using namespace std;

class ShapeBase {
public:
    virtual double calculateArea() const = 0;

    void display() const {
        cout << "Area: " << calculateArea() << "\n";
    }

    void display(const string &label) const {
        cout << label << " -> Area: " << calculateArea() << "\n";
    }
};

class CircleShape : public ShapeBase {
private:
    double radiusValue;
public:
    CircleShape(double r = 0.0) : radiusValue(r) {}

    double calculateArea() const override {
       return M_PI * radiusValue * radiusValue;
    }
};

class RectangleShape : public ShapeBase {
private:
    double widthValue;
    double heightValue;
public:
    RectangleShape(double w = 0.0, double h = 0.0)
        : widthValue(w), heightValue(h) {}

    double calculateArea() const override {
        return widthValue * heightValue;
    }
};

int main() {
    ShapeBase *shapePtr = nullptr;

    CircleShape circleObj(5.0);        
    RectangleShape rectangleObj(4.0, 6.0);

    shapePtr = &circleObj;
    cout << "Circle: ";
    shapePtr->display();                      
    shapePtr->display("Circle (labeled)");   

    shapePtr = &rectangleObj;
    cout << "Rectangle: ";
    shapePtr->display();
    shapePtr->display("Rectangle (labeled)");

    return 0;
}