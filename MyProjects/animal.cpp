#include <iostream>
using namespace std;
class Animal {
public:
    string name;
    int age;
    string food;
    Animal(string n, int a, string f) {
        name = n;
        age = a;
        food = f;
    }
    void display() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Food: " << food << endl;
    }
    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};
class Dog : public Animal {
    string sound;

public:
    Dog(string n, int a, string f, string s)
        : Animal(n, a, f) {
        sound = s;
    }
    void bark() {
        display();
        cout << name << " is " << sound << "." << endl;
    }
};
class Cat : public Animal {
    string sound;
public:
    Cat(string n, int a, string f, string s)
        : Animal(n, a, f) {
        sound = s;
    }
    void meow() {
        display();
        cout << name << " is " << sound << "." << endl;
    }
};
class Bird {
protected:
    string name;
    int age;
    string food;
public:
    Bird(string n, int a, string f) {
        name = n;
        age = a;
        food = f;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Food: " << food << endl;
    }
    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};
class Crow : public Bird {
    string sound;
    string flymsg;
public:
    Crow(string n, int a, string f, string s, string fl)
        : Bird(n, a, f) {
        sound = s;
        flymsg = fl;
    }
    void Info() {
        display();
        cout << name << " is " << sound << "." << endl;
        cout << "The crow is " << flymsg << " in the sky." << endl;
    }
};
int main() {
    cout << "Details About Animals:\n";
    cout << "1: Dog"<<endl;
    cout << "2: Cat"<<endl;
    cout << "3: Crow"<<endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    string name, food, sound, flymsg;
    int age;

    switch (choice) {
    case 1: {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter food name: ";
        cin >> food;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sound : ";
        cin >> sound;
        Dog d(name, age, food, sound);
        d.bark();
        d.sleep();
        break;
    }
    case 2: {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter food name: ";
        cin >> food;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sound  ";
        cin >> sound;
        Cat c(name, age, food, sound);
        c.meow();
        c.sleep();
        break;
    }
    case 3: {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter food name: ";
        cin >> food;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter sound : ";
        cin >> sound;
        cout << "Enter flying message : ";
        cin >> flymsg;
        Crow cr(name, age, food, sound, flymsg);
        cr.Info();
        cr.sleep();
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
