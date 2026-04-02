#include <iostream>
using namespace std;

class Printer {
public:
    void print(int x) {
        cout << "Integer: " << x << endl;
    }

    void print(double y) {
        cout << "Double: " << y << endl;
    }

    virtual void show() {
        cout << "This is Base Printer" << endl;
    }
};

class AdvancedPrinter : public Printer {
public:
    void show() {
        cout << "This is Advanced Printer" << endl;
    }
};

int main() {
    AdvancedPrinter obj;
    Printer* ptr = &obj;

    ptr->show();

    obj.print(10);
    obj.print(5.5);

    return 0;
}
