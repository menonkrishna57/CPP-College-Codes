//Write a program to read your details like age, name, gender, city, height etc and display it.
#include <iostream>
using namespace std;
int main()
{
    int age, height;
    string name,gender,city;
    cout << "Enter your name: ";
    cin >> name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender: ";
    cin>>gender;
    cout<<"Enter your city: ";
    cin>>city;
    cout<<"Enter your height: "; 
    cin>>height;
    
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Height: "<<height<<endl;
    return 0;
}