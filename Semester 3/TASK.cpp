#include <iostream>
using namespace std;

// Procedure (function)
void processData(string str, char ch, double num1, double num2)
{
    cout << "String: " << str << endl;
    cout << "Character: " << ch << endl;

    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division: Undefined (division by zero)" << endl;
}

int main()
{
    string str;
    char ch;
    double num1, num2;

    // Input
    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    processData(str, ch, num1, num2);

    return 0;
}