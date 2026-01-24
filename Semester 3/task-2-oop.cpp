#include<iostream>
#include<string>
using namespace std;

class student {

    private:

    string name;
    int Roll = 0;
    float   marks[3];
    double total = 0;
    float avg = 0;

    public:

    //default constructor
    student(){
        name = "";
        for(int i=0; i<3; i++){
            marks[i] = 0;
        }
    }

    //constructor
    student(string n, int r, float m[3] ){
        name = n;
        Roll = r;
        for(int i=0; i<3; i++){
            marks[i] = m[i];
            total += marks[i];
        }
    }

    //output
    void output(){
        cout << " Your name is: " << name << endl;
        cout << " Your roll no. is: " << Roll << endl;
        for(int i=0; i<3; i++) {
            cout << "Your Marks in " << i+1 << " subject are:" << endl;
            cout << marks[i] << endl;
        }
        cout << "Your total marks are: " << total << endl;
        avg = total/3;
        cout << "Your average marks are: " << avg << endl;
    }
};

int main(){
    
    string n;
    int r;
    float m[3];
    cout << "Enter your name: ";
    getline(cin,n);
    cout << "Enter your Roll Number : ";
    cin >> r;
    for(int i=0; i<3; i++){
        cout << "Enter your Marks in " << i+1 << " subject: " << endl;
        cin >> m[i];
    }

    student obj(n,r,m);
    obj.output();

}