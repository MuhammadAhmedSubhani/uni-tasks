// #include <iostream>
// using namespace std;

// class car
// {
//  protected:
//   int engine_model;
//   int wheels;
//   int year;   

//   public:
//     void sound()
//     {
//         cout << "CAR Specifications: " << endl;
//     }
// };

// class lambo : public car
// {
//   public:
    
//     void input()
//     {
//         cout << "Enter engine model: " << endl;
//         cin >> engine_model;
//         cout << "Enter wheels: " << endl;
//         cin >> wheels;
//          cout << "Enter make model: " << endl;
//         cin >> year;
//     }
//     void display()
//     {
//         cout << "Engine model is: " << engine_model << endl;
//         cout << "Wheel are: " << wheels << endl;
//         cout << "Make model: " << year << endl;
//     }
// };

// class buggati : public car
// {
//   public:
//     void input()
//     {
//         cout << "Enter engine model: " << endl;
//         cin >> engine_model;
//         cout << "Enter wheels: " << endl;
//         cin >> wheels;
//          cout << "Enter make model: " << endl;
//         cin >> year;
//     }
//     void display()
//     {
//         cout << "Engine model is: " << engine_model << endl;
//         cout << "Wheel are: " << wheels << endl;
//         cout << "Make model: " << year << endl;
//     }
// };

// class gwm : public car
// {
//   public:
//     void input()
//     {
//         cout << "Enter engine model: " << endl;
//         cin >> engine_model;
//         cout << "Enter wheels: " << endl;
//         cin >> wheels;
//          cout << "Enter make model: " << endl;
//         cin >> year;
//     }
//     void display()
//     {
//         cout << "Engine model is: " << engine_model << endl;
//         cout << "Wheel are: " << wheels << endl;
//         cout << "Make model: " << year << endl;
//     }
// };

// int main()
// {
    
//   int a;
//   car ab;
//   cout <<"Enter a nuber range from 1-3 based on lambo,buggati or gwm:";
//   cin >>a;
//   switch (a) {
//     case 1:
//     ab.sound();
//         lambo l;
//         l.input();
//         l.display();
//         break;  

//     case 2:
//     ab.sound();
//      buggati b;
//      b.input();
//      b.display();
//     break;
   
//       case 3:
//     ab.sound();
//     gwm g;
//      g.input();
//      g.display();
//         break;
//   }
//     return 0;
// }
//==================================================================================
// #include <iostream>
// using namespace std;

// // First base class
// class Printer {
// public:
//     void print() {
//         cout << "Printing document..." << endl;
//     }
// };

// // Second base class
// class Scanner {
// public:
//     void scan() {
//         cout << "Scanning document..." << endl;
//     }
// };

// // Derived class using multiple inheritance
// class AllInOne : public Printer, public Scanner {
// public:
//     void copy() {
//         cout << "Copying document..." << endl;
//     }
// };

// int main() {
//     AllInOne machine;

//     machine.print();   // from Printer
//     machine.scan();    // from Scanner
//     machine.copy();    // its own function

//     return 0;
// }
//==================================================================================
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void identity() {
        cout << "I am a person." << endl;
    }
};

// First derived class
class Student : virtual public Person {
public:
    void study() {
        cout << "Studying..." << endl;
    }
};

// Second derived class
class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teaching..." << endl;
    }
};

// Derived from both Student and Teacher
class TeachingAssistant : public Student, public Teacher {
public:
    void assist() {
        cout << "Assisting in teaching." << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.identity(); // only ONE Person subobject
    ta.study();
    ta.teach();
    ta.assist();

    return 0;
}
