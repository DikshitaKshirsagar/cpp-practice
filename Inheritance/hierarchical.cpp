#include<iostream>
using namespace std;
class Appliance {
public:
    string brand;
    float power;
    void display() {
        cout << "Brand Name: " << brand << endl;
        cout << "Required Power: " << power << "watts" << endl;
    }
};
class Washing_Machine : public Appliance {
public:
    void print() {
        cout << "Quick wash: 10 min" << endl;
        cout << "Gentle wash: 20 min" << endl;
        cout << "Heavy wash: 30 min" << endl;
    }
};
class Dryer : public Appliance {
public:
    void showDryModes() {
        cout << "Normal dry: 15 min" << endl;
        cout << "Quick dry: 30 min" << endl;
        cout << "High heat dry: 45 min" << endl;
    }
};
int main() {
    Washing_Machine wm;
    wm.brand = "Samsung";
    wm.power = 1200;
    wm.display();
    wm.print();
    Dryer d;
    d.brand = "LG";
    d.power = 1500;
    d.display();
    d.showDryModes();
   return 0;
}
