/*
1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)
*/

#include<iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date(){};
        Date(int day, int month, int year)//parameterized constructor
        {
        this->day = day;
        this->month = month;
        this->year = year;
        };

        void acceptDate()
        {
            cout<<"enter date as DD/MM/YYYY :"<<endl;
            cin>>day>>month>>year;
        }

        void displayDate()
        {
            cout<<"Date:"<<day<<"/"<<month<<"/"<<year<<endl;
        }
};

class Person
{
    private:
        string name;
        string address;
        Date DOB;

    public:

    Person(){}
    Person(string name, string address, Date DOB) : DOB(DOB)
    {
        this ->name = name;
        this ->address = address;
    }
    
    void acceptData()
    {
        cout<<"Enter name and address:"<<endl;
        cin>>name>>address;
        cout<<"Birthdate";
        DOB.acceptDate();
    }

    void displayData()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"DOB:";
        DOB.displayDate();
    }
};

class Employee : public Person
{
    private:
        int id;
        double salary;
        string dept;
        Date doj;

    public:

       void acceptData()
       {
            
                cout<<":Enter joining date:";
                doj.acceptDate();

                Person::acceptData();
                cout<<"Enter id,dept,salary:"<<endl;
                cin>>id>>dept>>salary;

        }

        void displayData()
        {
                doj.displayDate();
                Person::displayData();
                cout<<"Employee id:"<<id<<endl<<"department:"<<dept<<endl<<"salary:"<<salary<<endl;
        }
};
int main()
{
        //Person P;
        //P.acceptData();
        //P.displayData();

        //Employee E;
        //E.acceptData();
        //E.displayData();

        Person *ptr = new Employee();
        ptr->acceptData();
        ptr->displayData();
        delete ptr;
        ptr = NULL;





    return 0;
}
