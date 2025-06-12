#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Person Name: "<<name<<endl;
        cout<<"person's Age"<<age<<endl;
        
    }
};
class student: public person{
public:
    string school_name;
    int roll_no;
    void show(){
    cout<<"School name: "<<school_name<<endl;
    cout<<"Roll no :"<<roll_no<<endl;
    }    
};
class college_student:public student {
    public:
    string college_name;
    string course;
    
    void Display(){
        cout<<"College_name"<<college_name<<endl;
        cout<<"course name:"<<course<<endl;
    }
};
int main(){
    
    college_student g1;
    g1.name="Dikshita";
    g1.age=41;
    g1.roll_no=32;
    g1.school_name="SSPM";
    g1.college_name="SRCOE";
    g1.course= "CS";
    g1.display();
    g1.show();
    g1.Display();
    return 0;
}
