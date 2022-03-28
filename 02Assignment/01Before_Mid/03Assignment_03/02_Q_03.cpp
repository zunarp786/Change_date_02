/*
 2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit.
*/
#include<iostream>
using namespace std;
class tollBooth
{
    int pay;      //Save the No of Cars Which pay the Tex
    int nopay;    //Save the No of Cars Which don't the Tex
    double amount;  //Save the amount
    public:
    tollBooth()
    {
        pay=0;
        nopay=0;
    }
    void payingCar()
    {
        pay++;
        amount+=0.50;
    }
    void nopayCar()
    {
        nopay++;
    }
    void display()
    {
        cout<<"The Total Cars Which Pay the Tex: "<<pay<<endl;
        cout<<"The Total Tex: "<<amount<<endl;
        cout<<"\nThe Total Cars Which don't Pay the Tex: "<<nopay<<endl;

    }
};
int main()
{
    // code by ALI
    tollBooth test;
    char a;
    do
    {
        cout<<"\t\tNOTE:   Press Y to Enter the Car Which Pay Tex\n\t\t\tPress N to Enter the Car which don't Pay the Tex\n\t\t\tPress Esc to Exit the Program And Dsiplay Output"<<endl;
        cin>>a;
        if(a=='y'||a=='Y')
        {
            test.payingCar();
        }
        else if(a=='n'||a=='N')
        {
            test.nopayCar();
        }
    }
    while(a!=27);
    test.display();

    return 0;
}