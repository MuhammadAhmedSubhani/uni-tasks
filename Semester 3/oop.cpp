#include<iostream>
#include<string>
using namespace std;
// Student record class
// Create a Student class with attributes like name, rollNo, marks, and methods like printDetails(), calculateGrade(). 
// Make a main program that creates multiple students and prints their info.
class Students {
    public:
    string name;
    int rollNo;
    float marks;

    void printDetails() {
        cout << "Name is: " << name << "Roll No. is: " <<  rollNO << "Marks are: " <<  marks << "Grade is: " << calculategrade() ;
        cout << "--------------------------" << endl;
    } 

    void inputDetails() {
        cout << "Enter Name: ";
        cin >>> name;
        cout << "Enter Roll No.: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >>  marks; 
        cout << "Enter grade: ";
        cin >> calculategrade() ;
        cout << "--------------------------" << endl;
    } 

    char calculategrade() {
         if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else return 'F';
    
    }
};

int main() {
    int n;
    cout << "Enter number of students you want to enter: ";
    cin >> n;
    Students data[n];

}