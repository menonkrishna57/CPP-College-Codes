#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100],str1[100];
    char str2[]="SUS";
    cout<<"Enter a string: ";
    cin.getline(str,100);
    cout<<"The reversed string is: "<<strrev(str)<<endl;
    cout<<"Upper case: "<<strupr(str)<<endl;
    cout<<"Lower case: "<<strlwr(str)<<endl;
    cout<<"Length: "<<strlen(str)<<endl;
    cout<<"Copied string: "<<strcpy(str1,str)<<endl;
    cout<<"Concatenated string: "<<strcat(str,str1)<<endl;
    cout<<"Compared string: "<<strcmp(str,str1)<<endl;
    cout<<"First occurence of a character: "<<strchr(str,'a')<<endl;
    cout<<"Last occurence of a character: "<<strrchr(str,'a')<<endl;
    cout<<"First occurence of a substring: "<<strstr(str,"is")<<endl;
    cout<<"Last occurence of a substring: "<<strstr(str,"is")<<endl;
    return 0;
}