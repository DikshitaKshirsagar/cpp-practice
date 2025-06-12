#include<iostream>
using namespace std;
class vehicle {
    string Name;
    int number;
    int Entry_time;
    int Exit_time;
public:
    vehicle(string N, int n, int E_t, int e_t) {
        Name = N;
        number = n;
        Entry_time = E_t;
        Exit_time = e_t;
    }
    void Display() {
        cout << "Enter Owner name: " << Name << endl;
        cout << "Enter Vehicle Number: " << number << endl;
        cout << "Enter Entry time of vehicle: " << Entry_time << endl;
        cout << "Enter Exit time of vehicle: " << Exit_time << endl;
    }
};
class twowheeler : public vehicle {
    string Type;
    string brand;

public:
    twowheeler(string N, int n, int E_t, int e_t, string T, string b)
        : vehicle(N, n, E_t, e_t) {
        Type = T;
        brand = b;
    }
    void print() {
        Display();  // Call base class function
        cout << "Enter type of vehicle (Geared/Gearless): " << Type << endl;
        cout << "Vehicle Brand: " << brand << endl;
    }
};
class fourwheeler : public vehicle {
    string Fuel;
    string seat;
    string cartype;
public:
    fourwheeler(string N, int n, int E_t, int e_t, string F, string s, string c)
        : vehicle(N, n, E_t, e_t) {
        Fuel = F;
        seat = s;
        cartype = c;
    }
    void DisplayDetails() {
        Display();  // Call base class function
        cout << "Fuel type (Petrol/Diesel): " << Fuel << endl;
        cout << "Enter number of seats: " << seat << endl;
        cout << "Enter car type: " << cartype << endl;
    }
};
int main() {
    cout << "Parking" << endl;
    cout << "1: Park Two-wheeler" << endl;
    cout << "2: Park Four-wheeler" << endl;
    cout << "3: Exit" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        string name, type, brand;
        int number, entry, exit;
        cout << "Enter owner name: ";
        cin >> name;
        cout << "Enter vehicle number: ";
        cin >> number;
        cout << "Enter entry time: ";
        cin >> entry;
        cout << "Enter exit time: ";
        cin >> exit;
        cout << "Enter type (Geared/Gearless): ";
        cin >> type;
        cout << "Enter brand: ";
        cin >> brand;
        twowheeler t(name, number, entry, exit, type, brand);
        t.print();
    }
    else if (choice == 2) {
        string name, fuel, seat, cartype;
        int number, entry, exit;
        cout << "Enter owner name: ";
        cin >> name;
        cout << "Enter vehicle number: ";
        cin >> number;
        cout << "Enter entry time: ";
        cin >> entry;
        cout << "Enter exit time: ";
        cin >> exit;
        cout << "Enter fuel type: ";
        cin >> fuel;
        cout << "Enter number of seats: ";
        cin >> seat;
        cout << "Enter car type: ";
        cin >> cartype;
        fourwheeler f(name, number, entry, exit, fuel, seat, cartype);
        f.DisplayDetails();
    }
    else if (choice == 3) {
        cout << "Thank you for using the parking system!" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
