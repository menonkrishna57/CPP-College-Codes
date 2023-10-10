#include<iostream>
using namespace std;
struct pc
{
    string cpu_type;
    float size;
};
int main()
{
    pc c[50];
    for(int i=0;i<50;i++)
    {
        cout<<"CPU Type: ";
        cin>>c[i].cpu_type;
        cout<<"Size in GB: ";
        cin>>c[i].size;
    }
    for(int i=0;i<50;i++)
    {
        if(c[i].size>8.0)
        {
            cout<<"CPU Type: "<< c[i].cpu_type<<endl;
            cout<<"Size in GB: "<<c[i].size<<endl<<endl;
        }
    }
}