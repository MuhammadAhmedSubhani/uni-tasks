#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

// -------------------- Data Structures --------------------
struct Branch {
    string name;
    double sales;
};

struct Customer {
    string name;
    string joinDate;
};

struct MenuItem {
    string name;
    double price;
};

// -------------------- Global Data --------------------
vector<Branch> branches;
vector<Customer> customers;
vector<MenuItem> menuItems;
bool isLoggedIn = false;

// -------------------- File Functions --------------------
void loadBranches() {
    branches.clear();
    ifstream in("branches.txt");
    if (!in) return;
    Branch b;
    while (getline(in, b.name)) {
        in >> b.sales;
        in.ignore();
        branches.push_back(b);
    }
    in.close();
}

void saveBranches() {
    ofstream out("branches.txt");
    for (auto &b : branches)
        out << b.name << "\n" << b.sales << "\n";
    out.close();
}

void loadCustomers() {
    customers.clear();
    ifstream in("customers.txt");
    if (!in) return;
    Customer c;
    while (getline(in, c.name)) {
        getline(in, c.joinDate);
        customers.push_back(c);
    }
    in.close();
}

void saveCustomers() {
    ofstream out("customers.txt");
    for (auto &c : customers)
        out << c.name << "\n" << c.joinDate << "\n";
    out.close();
}

void loadMenu() {
    menuItems.clear();
    ifstream in("menu.txt");
    if (!in) return;
    MenuItem m;
    while (getline(in, m.name)) {
        in >> m.price;
        in.ignore();
        menuItems.push_back(m);
    }
    in.close();
}

void saveMenu() {
    ofstream out("menu.txt");
    for (auto &m : menuItems)
        out << m.name << "\n" << m.price << "\n";
    out.close();
}

// -------------------- Fake Data --------------------
void addFakeData() {
    if (branches.empty()) {
        branches.push_back({"Valencia Branch", 12000.50});
        branches.push_back({"Dha Branch", 8500.75});
        branches.push_back({"Faisal Town Branch", 10250.00});
        saveBranches();
    }

    if (customers.empty()) {
        customers.push_back({"Ali Khan", "2025-09-20"});
        customers.push_back({"Sara Ahmed", "2025-10-01"});
        customers.push_back({"Bilal Iqbal", "2025-10-10"});
        saveCustomers();
    }

    if (menuItems.empty()) {
        menuItems.push_back({"Biryani", 450});
        menuItems.push_back({"Karahi", 850});
        menuItems.push_back({"Seekh Kabab", 350});
        menuItems.push_back({"Tandoori Roti", 50});
        menuItems.push_back({"Kheer", 150});
        saveMenu();
    }
}

// -------------------- Utility --------------------
void exportBranchReport(const Branch &b) {
    string fileName = b.name + "_sales.csv";
    for (auto &ch : fileName)
        if (ch == ' ') ch = '_';

    ofstream out(fileName);
    if (!out) {
        cout << "Error creating report file.\n";
        return;
    }

    out << "Branch Name,Sales\n";
    out << b.name << "," << b.sales << "\n";
    out.close();
    cout << "Sales report exported to " << fileName << endl;
}

// -------------------- Menus --------------------
void manageBranches() {
    int choice;
    do {
        cout << "\n--- Manage Branches ---\n";
        cout << "1. Add Branch\n";
        cout << "2. Remove Branch\n";
        cout << "3. List Branches\n";
        cout << "4. Export Sales Report for a Branch (CSV)\n";
        cout << "5. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Branch b;
            cout << "Enter branch name: ";
            getline(cin, b.name);
            cout << "Enter sales amount: ";
            cin >> b.sales;
            branches.push_back(b);
            saveBranches();
            cout << "Branch added successfully.\n";
        } 
        else if (choice == 2) {
            string name;
            cout << "Enter branch name to remove: ";
            getline(cin, name);
            bool found = false;
            for (size_t i = 0; i < branches.size(); ++i) {
                if (branches[i].name == name) {
                    branches.erase(branches.begin() + i);
                    found = true;
                    break;
                }
            }
            if (found) {
                saveBranches();
                cout << "Branch removed successfully.\n";
            } else cout << "Branch not found.\n";
        } 
        else if (choice == 3) {
            cout << "\nBranches:\n";
            for (auto &b : branches)
                cout << "- " << b.name << " | Sales: $" << b.sales << endl;
        } 
        else if (choice == 4) {
            string name;
            cout << "Enter branch name to export: ";
            getline(cin, name);
            bool found = false;
            for (auto &b : branches) {
                if (b.name == name) {
                    exportBranchReport(b);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Branch not found.\n";
        } 
        else if (choice != 5) {
            cout << "Invalid choice.\n";
        }
    } while (choice != 5);
}

void manageCustomers() {
    int choice;
    do {
        cout << "\n--- Manage Customers ---\n";
        cout << "1. Add Customer\n";
        cout << "2. Remove Customer\n";
        cout << "3. List Customers\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Customer c;
            cout << "Enter customer name: ";
            getline(cin, c.name);
            cout << "Enter join date: ";
            getline(cin, c.joinDate);
            customers.push_back(c);
            saveCustomers();
            cout << "Customer added successfully.\n";
        } 
        else if (choice == 2) {
            string name;
            cout << "Enter customer name to remove: ";
            getline(cin, name);
            bool found = false;
            for (size_t i = 0; i < customers.size(); ++i) {
                if (customers[i].name == name) {
                    customers.erase(customers.begin() + i);
                    found = true;
                    break;
                }
            }
            if (found) {
                saveCustomers();
                cout << "Customer removed successfully.\n";
            } else cout << "Customer not found.\n";
        } 
        else if (choice == 3) {
            cout << "\nCustomers:\n";
            for (auto &c : customers)
                cout << "- " << c.name << " | Joined: " << c.joinDate << endl;
        } 
        else if (choice != 4) {
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

void manageMenu() {
    int choice;
    do {
        cout << "\n--- Manage Menu ---\n";
        cout << "1. Add Dish\n";
        cout << "2. Remove Dish\n";
        cout << "3. List Menu\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            MenuItem m;
            cout << "Enter dish name: ";
            getline(cin, m.name);
            cout << "Enter price: ";
            cin >> m.price;
            menuItems.push_back(m);
            saveMenu();
            cout << "Dish added successfully.\n";
        } 
        else if (choice == 2) {
            string name;
            cout << "Enter dish name to remove: ";
            getline(cin, name);
            bool found = false;
            for (size_t i = 0; i < menuItems.size(); ++i) {
                if (menuItems[i].name == name) {
                    menuItems.erase(menuItems.begin() + i);
                    found = true;
                    break;
                }
            }
            if (found) {
                saveMenu();
                cout << "Dish removed successfully.\n";
            } else cout << "Dish not found.\n";
        } 
        else if (choice == 3) {
            cout << "\nMenu Items:\n";
            for (auto &m : menuItems)
                cout << "- " << m.name << " | $" << m.price << endl;
        } 
        else if (choice != 4) {
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

void salesDashboard() {
    double totalSales = 0;
    for (auto &b : branches) totalSales += b.sales;

    cout << "\n--- Sales Dashboard ---\n";
    cout << "Total Branches: " << branches.size() << endl;
    cout << "Total Customers: " << customers.size() << endl;
    cout << "Total Menu Items: " << menuItems.size() << endl;
    cout << "Total Sales: $" << fixed << setprecision(2) << totalSales << endl;
}

// -------------------- Login System --------------------
bool login() {
    string username, password;
    cout << "\n=== Restaurant Management Login ===\n";
    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);

    if (username == "admin" && password == "1234") {
        cout << "Login successful.\n";
        isLoggedIn = true;
        return true;
    } else {
        cout << "Invalid credentials.\n";
        return false;
    }
}

void logout() {
    isLoggedIn = false;
    cout << "Logged out successfully.\n";
}

// -------------------- Main --------------------
int main() {
    loadBranches();
    loadCustomers();
    loadMenu();
    addFakeData();

    if (!login()) return 0;

    int choice;
    do {
        cout << "\n====== Restaurant Management System ======\n";
        cout << "1. Manage Branches\n";
        cout << "2. Manage Customers\n";
        cout << "3. Manage Menu\n";
        cout << "4. Sales Dashboard\n";
        cout << "5. Logout & Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: manageBranches(); break;
            case 2: manageCustomers(); break;
            case 3: manageMenu(); break;
            case 4: salesDashboard(); break;
            case 5: logout(); break;
            default: cout << "Invalid choice.\n"; break;
        }
    } while (isLoggedIn);

    return 0;
}
