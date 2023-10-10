/*Write one program to perform following operations on strings
a) To find length of a string 
b) To compare two string for equality
c) To Copy one string to other
d) To concatenate two string
e) To find reverse of a String*/

#include <iostream>
#include<cstring>
using namespace std;


    int main()
{
    char str1[100],str2[100],str3[100],;
    cout<<"Enter the string: "<<endl;
    cin>>str1;
    cout<<"Enter the string you want to check for equality: "<<endl;
    cin>>str2;
    cout<<"Enter the string you want to concatenate: "<<endl;
    cin>>str3;
    cout<<"Length of a string:"<<strlen(str1)<<endl;
    int eq=strcmp(str1,str2);
    cout<<"The two strings are"<<eq==0?"Equal":"Not Equal"<<endl;
    strcpy(str2,str1);
    cout<<"Copy of the string: "<<str2<<endl;
    cout<<"Concatenation of the two strings:"<<strcat(str1,str3)<<endl;
    cout<<"Reverse of the String: "<<strrev(str1)<<endl;
    
    
    return 0;
}
    

