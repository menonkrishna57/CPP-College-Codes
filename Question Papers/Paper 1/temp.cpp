#include <iostream>
#include<cstring>
using namespace std;

int main(){
char s[10],cpy[10];
cin>>s;
int a=0;
for (int i=0;s[i];i++)
{
 s[i];   
    a++;
}
for (int i=a;i>=0;i--)
{
    cpy[a-i]=s[i];
}
cout<<cpy;

}