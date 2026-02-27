#include <iostream>
using namespace std;

// Q1 Multiple Inheritance + Ambiguity + Scope Resolution
class Academic {
protected:
    float marks;

public:
    Academic(float m) : marks(m) {}

    void show() const { 
        cout << "Academic Marks: " << marks << endl;
    }
};

class Sports {
protected:
    float score;

public:
    Sports(float s) : score(s) {}

    void show() const { 
        cout << "Sports Score: " << score << endl;
    }
};

class StudentPerformance : public Academic, public Sports {
private:
    float overall;

public:
    StudentPerformance(float m, float s)
        : Academic(m), Sports(s) {
        overall = (marks + score) / 2.0f;
    }

    void displayReport() const {
        cout << "\n--- Performance Report (Multiple Inheritance) ---\n";

        Academic::show();
        Sports::show();

        cout << "Overall Performance Score: " << overall << endl;
    }
};

int main() {
    StudentPerformance sp(85.5f, 92.0f);
    sp.displayReport();
    return 0;
}

// Q2 Multilevel Inheritance + Constructor Call Chain
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {
        cout << "Person constructor called ✅\n";
    }

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person {
protected:
    int studentID;
    float marks;

public:
    Student(string n, int a, int id, float m)
        : Person(n, a), studentID(id), marks(m) {
        cout << "Student constructor called ✅\n";
    }

    void displayStudent() const {
        displayPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Marks     : " << marks << endl;
    }
};

class Result : public Student {
private:
    float total;
    float percentage;

public:
    Result(string n, int a, int id, float m)
        : Student(n, a, id, m) {
        cout << "Result constructor called ✅\n";
        total = marks;            
        percentage = (marks / 100.0f) * 100.0f;
    }

    void displayResult() const {
        cout << "\n--- Result Report (Multilevel Inheritance) ---\n";
        displayStudent();
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%\n";
    }
};

int main() {
    Result r("Ahmad", 20, 101, 88.5f);
    r.displayResult();
    return 0;
}

// Q3 Diamond Problem + Virtual Inheritance Fix
#include <iostream>
using namespace std;

class PersonA {
public:
    int id;
    PersonA(int i = 0) : id(i) {}

    void displayID() const {
        cout << "PersonA ID: " << id << endl;
    }
};

class StudentA : public PersonA {
public:
    StudentA(int i = 0) : PersonA(i) {}
};

class EmployeeA : public PersonA {
public:
    EmployeeA(int i = 0) : PersonA(i) {}
};

class TeachingAssistantA : public StudentA, public EmployeeA {
public:
    TeachingAssistantA(int sid, int eid) : StudentA(sid), EmployeeA(eid) {}

    void testAmbiguity() {

        cout << "\nDiamond Problem (without virtual inheritance) 😵\n";
        cout << "Student side ID  = " << StudentA::id << endl;
        cout << "Employee side ID = " << EmployeeA::id << endl;

        cout << "Calling display via StudentA: ";
        StudentA::displayID();

        cout << "Calling display via EmployeeA: ";
        EmployeeA::displayID();
    }
};

class PersonB {
public:
    int id;
    PersonB(int i = 0) : id(i) {}

    void displayID() const {
        cout << "PersonB ID: " << id << endl;
    }
};

class StudentB : virtual public PersonB {
public:
    StudentB(int i = 0) : PersonB(i) {}
};

class EmployeeB : virtual public PersonB {
public:
    EmployeeB(int i = 0) : PersonB(i) {}
};

class TeachingAssistantB : public StudentB, public EmployeeB {
public:
    TeachingAssistantB(int i) : PersonB(i), StudentB(i), EmployeeB(i) {}

    void testNoAmbiguity() {
        cout << "\nDiamond Problem Resolved (with virtual inheritance) ✅\n";
        cout << "Accessing id directly: " << id << endl; 
        cout << "Calling displayID directly: ";
        displayID();                                       
    }
};

int main() {
    TeachingAssistantA taA(111, 222);
    taA.testAmbiguity();

    TeachingAssistantB taB(999);
    taB.testNoAmbiguity();

    return 0;
}