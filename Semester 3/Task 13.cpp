#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Member function to overload +
    Number operator+(const Number& obj) {
        cout << "Adding " << value << " + " << obj.value << endl;
        return Number(value + obj.value);
    }

    // Overload == operator
    bool operator==(const Number& obj) {
        return (value == obj.value);
    }

    // Display function
    void display() const {
        cout << value << endl;
    }
};
int main() {
    Number n1(10), n2(20), n3(30);

    cout << "Evaluating n1 + n2 + n3:\n";

    Number result = n1 + n2 + n3;

    cout << "Final Result: ";
    result.display();

    // Comparison
    Number n4(60);

    if (result == n4) {
        cout << "Result is equal to 60" << endl;
    } else {
        cout << "Result is NOT equal to 60" << endl;
    }

    return 0;
}