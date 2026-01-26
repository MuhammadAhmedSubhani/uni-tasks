#include <iostream>
using namespace std;


class Student {
private:
    string name;
    int rollNo;
    float marks1;
    float marks2;
    float marks3;

   public: 
    Student() {
        name = "Umaid";
        rollNo = 40;
        marks1 = 85;
        marks2 = 90;
        marks3 = 99;
    }

    
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

   
    float totalMarks() {
        return marks1 + marks2 + marks3;
    }

   
    float averageMarks() {
        return totalMarks() / 3;
    }

    
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << totalMarks() << endl;
        cout << "Average Marks: " << averageMarks() << endl;
    }
};

int main() {
    Student obj;

   
    obj.inputDetails();

    
    obj.displayDetails();

    return 0;
}