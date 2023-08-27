#include <iostream>
using namespace std;
int main()
{
    float sale,discount;
    cout<<"Enter sale amount: ";
    cin>>sale;
    discount=sale>5000?sale*0.12:sale*0.07;
    cout<<"Final Amount: "<<sale-discount<<endl;
    cout<<"Discount: "<<discount<<endl;
}