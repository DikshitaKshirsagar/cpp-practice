#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    student(){
         name= "Dikshiata";
         roll_no= 23;
        cout<<"Student name: "<<name<<endl;
        cout<<"roll no: "<<roll_no<<endl;
    }
    
};
int main(){
    student s1;
    return 0;
}
