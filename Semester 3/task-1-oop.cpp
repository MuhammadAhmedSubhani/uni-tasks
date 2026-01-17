#include<iostream>
#include<string>
using namespace std;

struct product {
    int id;
    string name;
    float price;
    int quantity;
    float total_price;

    void input() {
        cout << "Name is: ";
        cin >> name;
        cout << "Price is: ";
        cin >> price;
        cout << "Quantity is: ";
        cin >> quantity;
    }

    void output() {
        cout << "Name: " << name
             << " Price: " << price
             << " Quantity: " << quantity << endl;
    }

    float calculate_total_price() {
        total_price = price * quantity;
        return total_price;
    }
};

int main() {

    cout << "Product Inventory Management\n";
    cout << "----------------------------\n";
    cout << "How many products do you want to enter?: ";
    int n;
    cin >> n;
    product stock[n];

    cout << "Enter product name, price and quantity:\n";
    for (int i = 0; i < n; i++) {
        cout << "Product" << i+1 << ": " << endl;
        stock[i].input();
    }

    cout << "\nProduct details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Product " << i+1 << ":";
        stock[i].output();
    }

    cout << "\nTotal prices of products:\n";
    for (int i = 0; i < n; i++) {
        float total = stock[i].calculate_total_price();
        cout << "Product " << i+1 << " Total Price: " << total << endl;
    }
    return 0;
}