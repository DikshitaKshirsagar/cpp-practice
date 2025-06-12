#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    Student(string n, int r) {
        name = n;
        roll_no = r;
    }
    Student(const Student &obj) {
        name = obj.name;
        roll_no = obj.roll_no;
        cout << "Copy constructor called!" << endl;
    }
    void display() {
        cout << "Name: " << name << ", Roll No: " << roll_no << endl;
    }
};
int main() {
    Student s1("Dikshita", 23);
    s1.display();
    Student s2 = s1;  
    s2.display();
    return 0;
}
