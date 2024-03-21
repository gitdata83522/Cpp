#include<iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;
    int marks;

    public:
    void initStudent()
    {
        rollno=0,name="",marks=0;
    }

    void acceptStudentFromConsole()
    {
        cout<< "Enter rollno"<<endl;
        cin>>rollno;
        cout<< "Enter name"<<endl;
        cin>>name;
        cout<< "Enter marks"<<endl;
        cin>>marks;
    }

    void printStudentFromConsole()
    {
         cout<<endl<<rollno<<endl<<name<<endl<<marks<<endl;
    }

    
};

int main()
{
    int choice;
    Student s1;


    do
    {
        cout<<endl<<"welcome...."<<endl;
        cout<<"1 for intilization"<<endl;
        cout<<"2 for accept date"<<endl;
        cout<<"3 for print date"<<endl;
        cout<<"0 for exit"<<endl;
        cout<<endl<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<endl<<"thank you....!"<<endl;
            break;

            case 1:
            s1.initStudent();
            cout<<"data intilized"<<endl;
            break;

            case 2:
            s1.acceptStudentFromConsole();
            break;

            case 3:
            s1.printStudentFromConsole();
            break;

            default:
            cout<<"invalid choice....!"<<endl;

        }
        
    } while (choice!=0);
    
}
