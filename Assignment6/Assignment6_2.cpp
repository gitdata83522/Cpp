#include<iostream>
using namespace std;

class Product
{
    int id;
    string title;
    double price;

public:

        virtual void accept()       //PARTIAL IMPLEMENTATION inside base class
        {
        // partial complete function
        //todo to accept id,title,price;
            cout<<"enter id"<<endl;
             cin>>id;

            cout<<"enter title"<<endl;
            cin>>title;

            cout<<"enter price"<<endl;
             cin>>price;
        }

        virtual void display()
        {
        // partial complete function
        //todo to accept id,title,price;
          cout<<"id : "<<id<<" title : "<<title<<"  price : "<<price<<endl;
        }
        double getPrice()
        {
            return price;
        }
        void setPrice(double price)
        {
            this->price=price;
        }

};

class Book : public Product
{
    string author;

public:

        void accept()
        {
        //complete function by accepting author;
        //also reuse the function of Product(Base) class accept
        //give discount of 10% on price and update the price.use mutators and inspector for price

             double p;

            cout<<"enter author"<<endl;
            cin>>author;

            //cin>>id;   //cannot access private data members of base class inside derived class hence, call function of base class which initializes private data members of base class 

            Product::accept();
           
            p=getPrice();
            p=(p-0.1*p);
            setPrice(p);
        }
        void display()
        {


            cout<<"author : "<<author<<endl;
            Product::display();
          // cout<<id;
        //complete function by displaying author;
        //also reuse the function of Product(Base) class display
        }
};



class Tape : public Product
{
    string artist;

public:

        void accept()
        {
        //complete function by accepting artist
        //also reuse the function of Product(Base) class accept
        //give discount of 5% on price and update the price.use mutators and inspector for price


             double p;

            cout<<"enter artist"<<endl;
            cin>>artist;

            Product::accept();
           
            p=getPrice();
            p=(p-0.05*p);
            setPrice(p);
        }
         void display()
        {
        //complete function by displaying artist;
        //also reuse the function of Product(Base) class display
        //todo to display artist;

           cout<<"artist : "<<artist<<endl;
            Product::display();
        }
};
int main()
{
Product *arr[3];
int choice;
int index=0;
do
{  
    cout<<endl;
    cout<<endl;
    cout<<"0 . EXIT  1.TO BUY BOOK  2.TO BUY TAPE   3. TO CALCULATE TOTAL   4.TO SEE ALL LIST DETAILS"<<endl;
    cout<<"enter choice : ";
    cin>>choice;

            switch(choice)
            {
            case 0:
                cout<<"thank for using"<<endl;
                break;

            case 1:
                if(index<3)
                {
                  arr[index]=new Book();        //upcasting
                  arr[index]->accept();         //as accept is declared as virtual in base class product these call will call the accept of derived class bookk as object is of book type
                  index++;
                }
                else
                {
                    cout<<"list is full"<<endl;
                }
                break;


            case 2:
                 if(index<3)
                {
                  arr[index]=new Tape();
                  arr[index]->accept();  ////as accept is declared as virtual in base class product these call will call the accept of derived class "Tape" as object is of "Tape" type
                  index++;
                }
                else
                {
                    cout<<"list is full"<<endl;
                }
                break;


            case 3:
                { 
                    double total=0;
                   for (int i = 0; i < index; i++)
                   {
                    total=total+arr[i]->getPrice();
                   }

                   cout<<"total is : "<<total;
                   

                }
                break;

            case 4:
                for(int i=0;i<index;i++)
                {
                    arr[i]->display();
                    cout<<endl;
                    cout<<endl;
                }
               break;


            default:
    
                  cout<<"enter right choice"<<endl;
    
              break;

            }
} while (choice!=0);

for (int i = 0; i < index; i++)
{
    delete arr[i];
    arr[i]=NULL;
}




/
// to calculate bill use for loop and call the getPrice to make total of all products
    return 0;
}
