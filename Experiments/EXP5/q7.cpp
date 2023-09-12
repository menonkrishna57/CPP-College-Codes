#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    bool check;
    cout<<"Enter N1:";
    cin>>n1;
    cout<<"Enter N2:";
    cin>>n2;
    if (n1>=n2)
    {
        cout<<"N1 should be less than N2"<<endl;
        return 0;
    }
    else
    {
        for(int i=n1+1;i<n2;i++)
        {
            check=true;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    check=false;
                    break;
                }
                
            }
            if(check)
                {
                    cout<<"Prime Number: "<<i<<endl;
                }
        }
    }
}