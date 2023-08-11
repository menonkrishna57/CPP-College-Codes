#include <iostream>
using namespace std;
int main()
{
    int d3;
    cout<<"Enter your Vitamin D3 value: ";
    cin>>d3;
    if (d3<20)
    {
        cout<<"Deficiency";
    }
    else if (d3<30)
    {
        cout<<"Insufficiency";
    }
    else if (d3<100)
    {
        cout<<"Sufficiency";
    }
    else
    {
        cout<<"Toxicity";
    }
}