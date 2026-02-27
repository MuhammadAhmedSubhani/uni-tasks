#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent() const {
        cout << "\n--- Student Details ---" << endl;

        displayPerson();

        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s; 

    s.inputStudent();
    s.displayStudent();

    return 0;
}