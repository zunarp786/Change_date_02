/*
6. Extend the employee class of Exercise 4 to include a date class (see Exercise 5) and an
etype enum (see Exercise 6 in Chapter 4). An object of the date class should be used to
hold the date of first employment; that is, the date when the employee was hired. The
etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
These two items will be private member data in the employee definition, just like the
employee number and salary. You’ll need to extend the getemploy() and putemploy()
functions to obtain this new information from the user and display it. These functions will
probably need switch statements to handle the etype variable. Write a main() program that
allows the user to enter data for three employee variables and then displays this data
*/
#include<iostream>
using namespace std;
class date
{
    int month;
    int day;
    int year;
    public:
    void getdate()
    {
        cout<<"Enter Month: ";cin>>month;
        cout<<"Enter Day: ";cin>>day;
        cout<<"Enter Year: ";cin>>year;
    }
    void showdate()
    {
        cout<<"DATE:\t"<<month<<"/"<<day<<"/"<<year;
    }
};
class employee
{
    int emp_no;                 //Save the Employee No.
    float emp_compensation;    //Save the compensation of Employee
    char e_type;
    date e_date;
    public:
    void getemploy()
    {
        cout<<"Enter the Employee No. ";cin>>emp_no;
        cout<<"Enter the Employee compensation: ";cin>>emp_compensation;
        cout<<"Enter employee type (first letter only)\nlaborer, secretary, manager,\accountant, executive, researcher): ";
        cin>>e_type;
        cout<<"Enter the Hired Date\n";
        e_date.getdate();
    }
    void putemploy()
    {
        switch (e_type)
        {
        case 'l':
        case 'L':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Laborer: "<<endl;
            e_date.showdate();
            break;
        case 's':
        case 'S':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Secretar: "<<endl;
            e_date.showdate();
            break;
        case 'm':
        case 'M':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Manager: "<<endl;
            e_date.showdate();
            break;
        case 'a':
        case 'A':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Accountant: "<<endl;
            e_date.showdate();
            break;
        case 'e':
        case 'E':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Executive: "<<endl;
            e_date.showdate();
            break;
        case 'r':
        case 'R':
            cout<<"Employ Number: "<<emp_no<<endl;
            cout<<"Employ Compensation: "<<emp_compensation<<endl;
            cout<<"Employ Type is Researcher: "<<endl;
            e_date.showdate();
            break;
        
        default:
            break;
        }
        e_date.showdate();
    }
};
int main()
{
    // code by ALI
    employee obj1,obj2,obj3;
    cout<<"Enter the Data of Employ 01\n";
    obj1.getemploy();
    cout<<"Enter the Data of Employ 02\n";
    obj2.getemploy();
    cout<<"Enter the Data of Employ 03\n";
    obj3.getemploy();
    cout<<"The Data of Employ 01\n";
    obj1.putemploy();
    cout<<"The Data of Employ 01\n";
    obj2.putemploy();
    cout<<"The Data of Employ 01\n";
    obj3.putemploy();
    return 0;
}