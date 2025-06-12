#include<iostream>
using namespace std;
class person{
    public:
    person(){
        cout<<"person constructor created"<<endl;
    }
    string name;
    int Age;
    void display(){
        cout<<"Name of person :"<<name<<endl;
        cout<<"Age of person: "<<Age<<endl;
    }
};
class employee : public person{
public:
    int ID;
    int Salary;
    void show(){
    cout<<"Employee ID:"<<ID<<endl;
    cout<<"employee Salary:"<<Salary<<endl;
    }    
};
int main(){
    employee e1;
    e1.name="Dikshita";
    e1.Age=45;
    e1.ID=132345;
    e1.Salary=23000;
    
    e1.display();
    e1.show();
    return 0;
}
