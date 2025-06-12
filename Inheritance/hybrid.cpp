#include<iostream>
using namespace std;
class Appliance {
public:
    string brand;
    float power;

    void display() {
        cout << "Brand Name: " << brand << endl;
        cout << "Required Power: " << power << " watts" << endl;
    }
};
class Washing_Machine : virtual public Appliance {
public:
    void print() {
        cout << "Quick wash: 10 min" << endl;
        cout << "Gentle wash: 20 min" << endl;
        cout << "Heavy wash: 30 min" << endl;
    }
};
class Dryer : virtual public Appliance {
public:
    void showDryModes() {
        cout << "Normal dry: 15 min" << endl;
        cout << "Quick dry: 30 min" << endl;
        cout << "High heat dry: 45 min" << endl;
    }
};
class ComboMachine : public Washing_Machine, public Dryer {
public:
    void combo() {
        display();       
        print();           
        showDryModes();     
    }
};
int main() {
    ComboMachine c1;
    c1.brand = "LG";
    c1.power = 1500;
    c1.combo();
    return 0;
}
