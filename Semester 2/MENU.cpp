#include <iostream>
#include <string>
using namespace std;

int main() {
    string action, item;
    int bill = 0;

    // Item flags
    bool burger = false, pizza = false, wrap = false;
    bool coke = false, fanta = false;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "Food:\n  Burger - 500\n  Pizza - 1500\n  Wrap - 800" << endl;
        cout << "Drinks:\n  Coke - 150\n  Fanta - 200" << endl;

        cout << "\nWould you like to 'add' or 'remove' an item? (type 'done' to finish): ";
        cin >> action;

        if (action == "done")
            break;

        cout << "Enter item name: ";
        cin >> item;

        // ADD items
        if (action == "add") {
            if (item == "Burger" || item == "burger") {
                if (!burger) {
                    bill += 500;
                    burger = true;
                    cout << "Burger added." << endl;
                } else {
                    cout << "Burger already added." << endl;
                }
            } else if (item == "Pizza" || item == "pizza") {
                if (!pizza) {
                    bill += 1500;
                    pizza = true;
                    cout << "Pizza added." << endl;
                } else {
                    cout << "Pizza already added." << endl;
                }
            } else if (item == "Wrap" || item == "wrap") {
                if (!wrap) {
                    bill += 800;
                    wrap = true;
                    cout << "Wrap added." << endl;
                } else {
                    cout << "Wrap already added." << endl;
                }
            } else if (item == "Coke" || item == "coke") {
                if (!coke) {
                    bill += 150;
                    coke = true;
                    cout << "Coke added." << endl;
                } else {
                    cout << "Coke already added." << endl;
                }
            } else if (item == "Fanta" || item == "fanta") {
                if (!fanta) {
                    bill += 200;
                    fanta = true;
                    cout << "Fanta added." << endl;
                } else {
                    cout << "Fanta already added." << endl;
                }
            } else {
                cout << "Invalid item!" << endl;
            }
        }

        // REMOVE items
        else if (action == "remove") {
            if (item == "Burger" || item == "burger") {
                if (burger) {
                    bill -= 500;
                    burger = false;
                    cout << "Burger removed." << endl;
                } else {
                    cout << "Burger not in bill." << endl;
                }
            } else if (item == "Pizza" || item == "pizza") {
                if (pizza) {
                    bill -= 1500;
                    pizza = false;
                    cout << "Pizza removed." << endl;
                } else {
                    cout << "Pizza not in bill." << endl;
                }
            } else if (item == "Wrap" || item == "wrap") {
                if (wrap) {
                    bill -= 800;
                    wrap = false;
                    cout << "Wrap removed." << endl;
                } else {
                    cout << "Wrap not in bill." << endl;
                }
            } else if (item == "Coke" || item == "coke") {
                if (coke) {
                    bill -= 150;
                    coke = false;
                    cout << "Coke removed." << endl;
                } else {
                    cout << "Coke not in bill." << endl;
                }
            } else if (item == "Fanta" || item == "fanta") {
                if (fanta) {
                    bill -= 200;
                    fanta = false;
                    cout << "Fanta removed." << endl;
                } else {
                    cout << "Fanta not in bill." << endl;
                }
            } else {
                cout << "Invalid item!" << endl;
            }
        }

        else {
            cout << "Invalid action! Please enter 'add' or 'remove'." << endl;
        }

        cout << "Current bill: " << bill << " PKR\n";

    } while (true);

    cout << "\nFinal bill: " << bill << " PKR" << endl;
    return 0;
}