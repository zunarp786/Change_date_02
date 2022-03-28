/*
10. Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that cre-
ates three ships, asks the user to input the position of each, and then displays each ship’s
number and position.
*/
#include<iostream>
using namespace std;
class ship
{
    int degeree;      //Latiturde
    float minutes;
    char direction;
    int l_degeree;      //Longitutde
    float l_minutes;
    char l_direction;
    static int x;
    int serial_no;
    public:
    ship()
    {
        x++;
        serial_no=x;
    }
    void input()
    {
        cout<<"Enter the latitude "<<endl;
        cout<<"Enter Degrees: ";cin>>degeree;
        cout<<"Enter Mintues: ";cin>>minutes;
        cout<<"Enter Direction: ";cin>>direction;
        cout<<"Enter the  longitude"<<endl;

        cout<<"Enter Degrees: ";cin>>l_degeree;
        cout<<"Enter Mintues: ";cin>>l_minutes;
        cout<<"Enter Direction: ";cin>>l_direction;
    }
    void display()
    {
        cout<<"The Position of Ship No. "<<serial_no<<endl;
        cout<<"The latitude "<<endl;
        cout<<endl<<degeree<<'\xF8'<<minutes<<"' "<<direction<<endl;
        cout<<"Enter the  longitude"<<endl;
        cout<<endl<<l_degeree<<'\xF8'<<l_minutes<<"' "<<l_direction<<endl;
    }

};
int ship::x=0;
int main()
{
    // code by ALI
    ship obj1,obj2,obj3;
    cout<<"Enter the Location of The Ship01\n";
    obj1.input();
    cout<<"Enter the Location of The Ship02\n";
    obj2.input();
    cout<<"Enter the Location of The Ship03\n";
    obj3.input();
    cout<<"\n\nThe Location of The Ship01\n";
    obj1.display();
    cout<<"\n\nThe Location of The Ship02\n";
    obj2.display();
    cout<<"\n\nThe Location of The Ship03\n";
    obj3.display();
    return 0;
}