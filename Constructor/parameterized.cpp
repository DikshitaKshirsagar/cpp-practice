#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    student(string n , int r){
        name=n;
        roll_no=r;
    }
    void display(){
        cout<<"Student name: "<<name<<endl;
        cout<<"roll no: "<<roll_no<<endl;
    }
    
};
int main(){
    student s1("Dikshita", 123);
    s1.display();
    return 0;
}
