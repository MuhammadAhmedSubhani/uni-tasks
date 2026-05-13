#include <iostream>
using namespace std;

class Base {
public:
    int x;

    Base() {
        x = 10;
    }

    void display(int value) {
        cout << "Base display(int) called" << endl;
        cout << "Base x = " << x << endl;
        cout << "Value = " << value << endl;
    }
};

class Derived : public Base {
public:
    int x; 

    Derived() {
        x = 100;
    }

    void display(double value) {
        cout << "Derived display(double) called" << endl;
        cout << "Derived x = " << x << endl;
        cout << "Value = " << value << endl;
    }

    void showValues() {
        cout << "Derived class x = " << x << endl;

        cout << "Base class x = " << Base::x << endl;
    }
};

class DerivedUsing : public Base {
public:
    using Base::display;  

    int x;

    DerivedUsing() {
        x = 200;
    }

    void display(double value) {
        cout << "DerivedUsing display(double) called" << endl;
        cout << "DerivedUsing x = " << x << endl;
        cout << "Value = " << value << endl;
    }
};

int main() {
    cout << "===== Data Member Domination =====" << endl;

    Derived d;

    d.showValues();

    cout << endl;

    cout << "===== Function Name Hiding =====" << endl;

    d.display(12.5);  

    cout << endl;

    d.display(10);   
    cout << endl;

    cout << "Calling Base display(int) explicitly:" << endl;
    d.Base::display(10);

    cout << endl;

    cout << "===== Using Keyword Example =====" << endl;

    DerivedUsing du;

    du.display(15);    
    cout << endl;

    du.display(25.5);   

    return 0;
}