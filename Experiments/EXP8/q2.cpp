#include <iostream>
using namespace std;
struct cricket
{
     string name;
     string country;
     int no_matches;
     float batting_avg;
};

 

int main()
{
     cricket c[10];
    for(int i=0;i<10;i++)//Takes Input of 10 players
    {
        cout<<"Enter Player Name: ";
        cin>>c[i].name;
        cout<<"Enter Player Country: ";
        cin>>c[i].country;
        cout<<"Enter number of matches played: ";
        cin>>c[i].no_matches;
        cout<<"Enter batting average of player: ";
        cin>>c[i].batting_avg;

    }
    for(int i=0;i<10;i++)//Players who have Batting Average above 50
    {
        if(c[i].batting_avg>50)
            {
            cout<<"Enter Player Name: "<<c[i].name<<endl;
            cout<<"Enter Player Country: "<<c[i].country<<endl;
            cout<<"Enter number of matches played: "<<c[i].no_matches<<endl;
            cout<<"Enter batting average of player: "<<c[i].batting_avg<<endl;
        }
    }

 

}