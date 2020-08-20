#include<iostream>
#include<string>
using namespace std;
class Travel
{
    int flight;
    string dest;
    float dist, fuel;
    void calFuel()
    {
        if(dist <= 1000)
        {
            fuel = 500;
        }
        else if(dist >= 1000 && dist <=2000)
        {
            fuel = 1100;
        }
        else if(dist >= 2000)
        {
            fuel = 2200;
        }
    }
    public:
    void feedInfo()
    {
        cout<<"Enter flight number: ";
        cin>>flight;
        fflush(stdin);
        cout<<"Enter destination: ";
        getline(cin, dest);
        cout<<"Enter the distance: ";
        cin>>dist;
        calFuel();
    }
    void showInfo()
    {
        cout<<"Flight no.: "<<flight<<endl;
        cout<<"Destination: "<<dest<<endl;
        cout<<"Distance: "<<dist<<endl;
        cout<<"Fuel: "<<fuel<<endl;
    }
};
int main()
{
    Travel t;
    t.feedInfo();
    t.showInfo();
    return 0;
}