#include<iostream>
using namespace std;
class Teacher{
    public:
    Teacher(){
        cout<<"teacher constructor is called"<<endl;
    }
    
    void display(){
        cout<<"teaching students"<<endl;
        
    }
};
class mentor{
public:
    mentor(){
        cout<<"Mentor constructor called"<<endl;
    }
    void show(){
    cout<<"Guiding student"<<endl;
    
    }    
};
class guide:public Teacher , public mentor{
    public:
    guide(){
        cout<<"Guide constructor called"<<endl;
    }
    void Display(){
        cout<<"teaching students"<<endl;
    }
};
int main(){
    
    guide g1;
    g1.display();
    g1.show();
    g1.Display();
    return 0;
}
