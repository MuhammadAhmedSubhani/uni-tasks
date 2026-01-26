#include <iostream>
#include<string>
using namespace std;

//Classes and Objects (the foundation)
class car {
    public:
        string name;
        int plate;
        int engine;
};
int main() {
    car car;
    cout << "Enter car's name: " << endl;
    cin >> car.name;
    cout << "Enter car's plate: " << endl;
    cin >> car.plate;
    cout << "Enter car's engine: " << endl;
    cin >> car.engine;
    cout << car.name << endl << car.plate << endl << car.engine;
}