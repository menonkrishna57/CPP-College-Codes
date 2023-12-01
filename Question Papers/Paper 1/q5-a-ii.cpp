#include <iostream>
using namespace std;
int main()
{
    class PageDetails{
        public:
        string page_size;
        float page_width;
        float page_height;
    };
    PageDetails a;
    a.page_size="A3";
    a.page_width=297;
    a.page_height=420;

    cout<<a.page_size<<endl;
    cout<<a.page_width<<endl;
    cout<<a.page_height<<endl;
}