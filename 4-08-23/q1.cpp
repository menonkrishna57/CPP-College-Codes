#include <iostream>
using namespace std;
int main()
{
    char name[100],city[100],gen;
    int age;
    float height;
    cout<<"Enter name: ";
    cin.getline(name,100);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Gender(M/F): ";
    cin>>gen;
    cout<<"Enter City: ";
    cin.getline(city,100);
    cout<<"Enter Height: ";
    cin>>height;
    return 0;
}