#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;             
    int marks;              
    const int maxMarks;      
    static int studentCount; 

public:
   
    Student(int r, int m) : rollNo(r), marks(m), maxMarks(100) {
        studentCount++; 
    }

    Student& setMarks(int m) {
        if (m <= maxMarks) {
            this->marks = m;   
        }
        return *this;          
    }

    void display() const {
        cout << "Roll No: " << rollNo
             << " | Marks: " << marks
             << " / " << maxMarks << endl;
    }

    static void showStudentCount() {
        cout << "Total Students Created: " << studentCount << endl;
    }
};

int Student::studentCount = 0;

int main() {
    Student s1(1, 85);
    Student s2(2, 90);

    cout << "Initial Data:\n";
    s1.display();
    s2.display();

    cout << "\nAfter Chaining:\n";
    s1.setMarks(99);  
    s1.display();

    cout << "\nStatic Member Output:\n";
    Student::showStudentCount();

    return 0;
}
