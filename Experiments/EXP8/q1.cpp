#include <iostream>
using namespace std;
struct student
{
     int roll_no;
     string name;
     string address;
     string branch;
     float percentage;
};

 

int main(){
     student s;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Roll Number: ";
    cin>>s.roll_no;
    cout<<"Enter Address: ";
    cin>>s.address;
    cout<<"Enter Branch: ";
    cin>>s.branch;
    cout<<"Enter Percentage: ";
    cin>>s.percentage;

 

    cout<<"Roll No: "<<s.roll_no<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Address: "<<s.address<<endl;
    cout<<"Branch: "<<s.branch<<endl;
    cout<<"Percentage: "<<s.percentage<<endl;
}