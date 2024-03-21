#include<iostream>
using namespace std;

class Date 
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        day=0,month=0,year=0;
    }

    void AcceptDateFromConsole()
    {
        cout<< "Enter day"<<endl;
        cin>>day;
        cout<< "Enter month"<<endl;
        cin>>month;
        cout<< "Enter year"<<endl;
        cin>>year;
    }

    void printDateFromConsole()
    {
         cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    bool isLeapYear()
    {
        if(year%400==0)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
};

int main()
{
    int choice;
    Date d1;


    do
    {
        cout<<endl<<"welcome...."<<endl;
        cout<<"1 for intilization"<<endl;
        cout<<"2 for accept date"<<endl;
        cout<<"3 for print date"<<endl;
        cout<<"4 cheak leap year"<<endl;
        cout<<"0 for exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<endl<<"thank you....!"<<endl;
            break;

            case 1:
            d1.initDate();
            cout<<"data intilized"<<endl;
            break;

            case 2:
            d1.AcceptDateFromConsole();
            break;

            case 3:
            d1.printDateFromConsole();
            break;

            case 4:
            if(d1.isLeapYear())
            {
                cout<<"leap year"<<endl;
            }
            else
            {
                cout<<"not leap year"<<endl;
            }
            break;

            default:
            cout<<"invalid choice....!"<<endl;

        }
        
    } while (choice!=0);
    
}