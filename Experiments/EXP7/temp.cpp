#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,mycounter=0,num1,num2,sum=0,copy_init,mydigit,counter_init,myinit;
    cin>>num1>>num2;
    cout<<"the armstrong numbers are ";
    for (i=num1+1;i<num2;i++)
    {
        sum=0;mycounter=0;
        myinit=i;copy_init=i;counter_init=i;
        while (counter_init!=0)
        {
            mycounter++;
            counter_init=counter_init/10;
            
        }
        do
        {
            mydigit=copy_init%10;
            sum+=pow(mydigit,mycounter);
            copy_init=copy_init/10;
            
        }while (copy_init!=0);

        if (sum==myinit){
            cout<<sum;
        }
}
    return 0;
}