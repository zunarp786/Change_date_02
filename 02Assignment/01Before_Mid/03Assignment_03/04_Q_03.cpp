/*
*4 Create an employee class, /*basing it on Exercise 4 of Chapter 4*\. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.
*/
#include<iostream>
using namespace std;
class employee
{
    int emp_no;      //Save the Employee No.
    float emp_compensation;    //Save the compensation of Employee
    public:
    void input()
    {
        cout<<"Enter the Employee No. ";cin>>emp_no;
        cout<<"Enter the Employee compensation: ";cin>>emp_compensation;
    }
    void display()
    {
        cout<<"Employee No. "<<emp_no<<endl;
        cout<<"Employee compensation: "<<emp_compensation<<endl;
    }
};
int main()
{
    // code by ALI
    employee obj1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter the Data of Employee No. "<<i+1<<endl<<endl;
        obj1[i].input();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"\nThe Data of Employee No. "<<i+1<<endl<<endl;
        obj1[i].display();
    }
    return 0;
}