#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

// CPU class
class CPU {
private:
    string brand;
    double speed; // in GHz

public:
    CPU() {
        brand = "";
        speed = 0.0;
    }

    CPU(string b, double s) {
        brand = b;
        speed = s;
    }

    void setBrand(string b) {
        brand = b;
    }

    void setSpeed(double s) {
        speed = s;
    }

    string getBrand() const {
        return brand;
    }

    double getSpeed() const {
        return speed;
    }

    void displayCPU() const {
        cout << "CPU Brand: " << brand << endl;
        cout << "CPU Speed: " << speed << " GHz" << endl;
    }
};

// RAM class
class RAM {
private:
    int size; // in GB
    string type;

public:
    RAM() {
        size = 0;
        type = "";
    }

    RAM(int s, string t) {
        size = s;
        type = t;
    }

    void setSize(int s) {
        size = s;
    }

    void setType(string t) {
        type = t;
    }

    int getSize() const {
        return size;
    }

    string getType() const {
        return type;
    }

    void displayRAM() const {
        cout << "RAM Size: " << size << " GB" << endl;
        cout << "RAM Type: " << type << endl;
    }
};

// Computer class
class Computer {
private:
    CPU cpu;
    RAM ram;

public:
    Computer() {}

    Computer(CPU c, RAM r) : cpu(c), ram(r) {}

    void setCPU(CPU c) {
        cpu = c;
    }

    void setRAM(RAM r) {
        ram = r;
    }

    CPU getCPU() const {
        return cpu;
    }

    RAM getRAM() const {
        return ram;
    }

    void displayComputer() const {
        cout << "--- Computer Details ---" << endl;
        cpu.displayCPU();
        ram.displayRAM();
    }
};

// Derived class Employee
class Employee : public Person {
private:
    int employeeID;
    double salary;
    Computer computer;   // Has-a relationship

public:
    Employee() {
        employeeID = 0;
        salary = 0.0;
    }

    Employee(string n, int a, int id, double s, Computer c)
        : Person(n, a) {
        employeeID = id;
        salary = s;
        computer = c;
    }

    void setEmployeeID(int id) {
        employeeID = id;
    }

    void setSalary(double s) {
        salary = s;
    }

    void setComputer(Computer c) {
        computer = c;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }

    Computer getComputer() const {
        return computer;
    }

    void displayEmployee() const {
        cout << "===== Employee Details =====" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
        computer.displayComputer();
    }
};

// Main function
int main() {
    CPU cpu1("Intel Core i7", 3.6);
    RAM ram1(16, "DDR4");
    Computer comp1(cpu1, ram1);

    Employee emp1("Ahmad", 25, 101, 55000, comp1);

    emp1.displayEmployee();

    return 0;
}