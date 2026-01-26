#include <iostream>
#include<string>
using namespace std;

//Classes and Objects (the foundation)
class car {
    private:
        string name;
        int plate;
        int engine;
    public:
        car (string nam1, int plate1, int engine1){
            name = nam1;
            plate = plate1;
            engine = engine1;
            cout << name << endl << plate << endl << engine;
        }

        // void input(){
        //     cout << "Enter car name:";
        //     cin >> name;
        //     cout << "Enter car plate";
        //     cin >> plate;
        //     cout << "Enter car's engine model:" << endl;
        //     cin >> engine;
        // }
    
};
int main() {
    car civic("civic", 1534, 67);
    
}