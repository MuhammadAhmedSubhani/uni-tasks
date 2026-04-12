#include <iostream>
using namespace std;

class Display {
public:
    void show(int value) {
        cout << "Int value: " << value << endl;
    }

    void show(double value) {
        cout << "Double value: " << value << endl;
    }

    virtual void info() {
        cout << "Inside base Display" << endl;
    }
};

class ProDisplay : public Display {
public:
    void info() override {
        cout << "Inside derived ProDisplay" << endl;
    }
};

int main() {
    ProDisplay dp;
    Display* basePtr = &dp;

    basePtr->info();      // runtime polymorphism
    dp.show(25);          // overloaded function (int)
    dp.show(9.75);        // overloaded function (double)

    return 0;
}