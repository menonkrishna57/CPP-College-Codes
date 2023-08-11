#include <iostream>
using namespace std;
int main()
{
    char name[100];
    int age;
    cout<<"Enter name of the person: ";
    cin.getline(name,100);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    return 0;
}