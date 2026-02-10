#include <iostream>
using namespace std;

int myLen(const char* s) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void myCopy(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

class StudentRecordShallow {
private:
    int id;
    char* name;

public:
    StudentRecordShallow(int i, const char* n) {
        id = i;
        int L = myLen(n);
        name = new char[L + 1];
        myCopy(name, n);
    }

    StudentRecordShallow(const StudentRecordShallow& other) {
        id = other.id;
        name = other.name;   
    }

    void changeFirstLetter(char c) {
        name[0] = c;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << endl;
    }

    ~StudentRecordShallow() {
        delete[] name;  
    }
};

class StudentRecordDeep {
private:
    int id;
    char* name;

public:
    StudentRecordDeep(int i, const char* n) {
        id = i;
        int L = myLen(n);
        name = new char[L + 1];
        myCopy(name, n);
    }

    StudentRecordDeep(const StudentRecordDeep& other) {
        id = other.id;
        int L = myLen(other.name);
        name = new char[L + 1];  
        myCopy(name, other.name);
    }

    void changeFirstLetter(char c) {
        name[0] = c;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << endl;
    }

    ~StudentRecordDeep() {
        delete[] name;   
    }
};

int main() {

    cout << "===== SHALLOW COPY DEMONSTRATION =====\n";
    StudentRecordShallow s1(1, "Ali");
    StudentRecordShallow s2 = s1;   

    s2.changeFirstLetter('U');

    s1.display();
    s2.display();

    cout << "\n===== DEEP COPY DEMONSTRATION =====\n";
    StudentRecordDeep d1(2, "Ahmed");
    StudentRecordDeep d2 = d1;      

    d2.changeFirstLetter('Z');

    d1.display();
    d2.display();

    return 0;
}
