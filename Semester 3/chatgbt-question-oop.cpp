#include<iostream>
#include<string>
using namespace std;

//============================================================================================
// Student record class
// Create a Student class with attributes like name, rollNo, marks, and methods like printDetails(), calculateGrade(). 
// Make a main program that creates multiple students and prints their info.
class Students {
    public:
    string name;
    int rollNo;
    float marks;

    void printDetails() {
        cout << "Name is: " << name << endl;
        cout << "Roll No. is: " <<  rollNo << endl;
        cout << "Marks are: " <<  marks << endl;
        cout << "Grade is: " << calculategrade() << endl ;
        cout << "--------------------------" << endl;
    } 

    void inputDetails() {
    cin.ignore(); 
    cout << "Enter Name: " << endl;
    getline(cin, name); 
    cout << "Enter Roll No.: " << endl;
    cin >> rollNo;
    cout << "Enter marks: "<< endl;
    cin >> marks; 
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
    // input
    for (int i = 0; i < n; i++)
    {
        data[i].inputDetails();
        cout << endl;
        data[i].printDetails();
    }
}
//============================================================================================

// Bank account
// Class BankAccount with accountNumber, ownerName, balance and methods deposit(), withdraw(), 
// checkBalance(). Add simple validation so balance cannot go negative.
class BankAccount {
    int accountNumber;
    string ownerName;
    float balance;
    public:

    // Constructor
    BankAccount(int account, string name, float startupbalance)
    {
        accountNumber = account;
        ownerName = name;
        if (startupbalance >= 0)
        {
            balance = startupbalance;

        }  
        else
        {
            balance = 0;
            cout << "Balance cannot be set to negative. Set to 0" << endl;
        }
    } 
    
    // Deposit method
    void deposit(double amount) {
        
    }
    
};