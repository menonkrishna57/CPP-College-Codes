#include <iostream>
using namespace std;

int main()
{
    int c=0;
    for (int i=12 ;i<=20;i++)
    {

        for(int v=2;v<i;v++){
            if(i%v==0)
            {
             c++;}

        }
        if (c==0)
        {
            cout<<i<<endl;
        }
    }
}
//not working
