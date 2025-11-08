#include <iostream>
#include <fstream>   // For file handling
#include <map>
#include <algorithm>

using namespace std;

// Function to export sales report to file
void exportSalesReport(const vector<Sale>& sales) {
    ofstream file("SalesReport.txt"); // Creates or overwrites file
    if (!file) {
        cout << "Error creating SalesReport.txt\n";
        return;
    }

    map<string, int> tally;  
    double totalRevenue = 0;
    int totalItemsSold = 0;

    for (const auto &s : sales) {
        tally[s.item] += s.quantity;
        totalRevenue += s.quantity * s.price;
        totalItemsSold += s.quantity;
    }

    file << "===== Sales Report =====\n";
    for (const auto &p : tally) {
        file << p.first << " sold: " << p.second << " units\n";
    }
    file << "--------------------------\n";
    file << "Total Items Sold: " << totalItemsSold << "\n";
    file << "Total Revenue: $" << totalRevenue << "\n";

    auto mostPopular = max_element(
        tally.begin(), tally.end(),
        [](const pair<string,int> &a, const pair<string,int> &b){
            return a.second < b.second;
        }
    );

    if (mostPopular != tally.end()) {
        file << "Most Popular Item: " << mostPopular->first 
             << " (" << mostPopular->second << " sold)\n";
    }

    file.close();
    cout << "Sales report exported to SalesReport.txt\n";
}

// Function to export customers list
void exportCustomerList(const vector<Customer>& customers) {
    ofstream file("CustomerList.txt");
    if (!file) {
        cout << "Error creating CustomerList.txt\n";
        return;
    }

    file << "===== Customers =====\n";
    for (const auto &c : customers) {
        file << "ID: " << c.id << " | Name: " << c.name << "\n";
    }
    file << "--------------------------\n";
    file << "Total Customers: " << customers.size() << "\n";

    file.close();
    cout << "Customer list exported to CustomerList.txt\n";
}

// Dashboard menu
void adminDashboard(const vector<Sale>& sales, const vector<Customer>& customers) {
    int choice;
    do {
        cout << "\n===== Admin Dashboard =====\n";
        cout << "1. View Sales Report\n";
        cout << "2. View Customers\n";
        cout << "3. Export Sales Report\n";
        cout << "4. Export Customers\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showSalesReport(sales); break;
            case 2: showCustomerList(customers); break;
            case 3: exportSalesReport(sales); break;
            case 4: exportCustomerList(customers); break;
            case 5: cout << "Exiting Dashboard...\n"; break;
            default: cout << "Invalid choice, try again.\n";
        }
    } while (choice != 5);
}

int main() {
    vector<Sale> sales = getSalesData();
    vector<Customer> customers = getCustomerData();

    adminDashboard(sales, customers);
    return 0;
}
