/*Write one program to perform following operations on strings
a) To find length of a string 
b) To compare two string for equality
c) To Copy one string to other
d) To concatenate two string
e) To find reverse of a String*/

#include <iostream>
#include<cstring>
using namespace std;

string inputer()//To input the string
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    return str;
}

    int main()
{
    int choice;
    char str1[100],str2[100];
    cout<<"Enter the choice: "<<endl;
    cout<<"1. To find length of a string "<<endl;
    cout<<"2. To compare two string for equality "<<endl;
    cout<<"3. To Copy one string to other "<<endl;
    cout<<"4. To concatenate two string "<<endl;
    cout<<"5. To find reverse of a String "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        strcpy(str1, inputer().c_str());
        cout<<"The length of the string is: "<<length(str1)<<endl;
        break;
        case 2:
        str1=inputer();
        str2=inputer();
        if(compare(str1,str2))
        cout<<"The strings are equal"<<endl;
        else
        cout<<"The strings are not equal"<<endl;
        break;
        case 3:
        str1=inputer();
        str2=copy(str1);
        cout<<"The copied string is: "<<str2<<endl;
        break;
        case 4:
        str1=inputer();
        str2=inputer();
        cout<<"The concatenated string is: "<<concat(str1,str2)<<endl;
        break;
        case 5:
        str1=inputer();
        cout<<"The reversed string is: "<<reverse(str1)<<endl;
        break;
        default:
        cout<<"Wrong choice"<<endl;
    }
    return 0;
}
    

