/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
using namespace std;
class box
{
   private:
        int length;
        int width;
        int height;
    
   public:
        box()
        {
            this->length=1;
            this->height=1;
            this->width=1;                

        }
        box(int length,int width,int height)
        {
            this->length=length;
            this->height=width;
            this->width=height;

        }
        box(int value)
        {
            this->length=value;
            this->height=value;
            this->width=value;
        }
        int volume()
        {

          return length*width*height;

        }
        ~box()
        {
           cout<<endl;
           cout<<"destructor called"<<endl;

        }


};
int main()
{
    int choice;
    do
    {
        cout<<"0 : exit  1 : volume with default values  2 : volume with same value  3: volume with user defined values"<<endl;
        cout<<"enter choice : ";
        cin>>choice;

    // HERE WE ARE CREATING DIFFEREN OBJECTS FOR DIFFERENT OUTPUTS INSIDE SWITCH CASE -->  THUS, USE "{ }" IN  SWITCH CASE  FOR EVERY OBJECT CREATION 
    //--> TO RELESE/DESTROY THE OBJECT WHEN " } "REACHED
    //OBJECT SCOPE IS BLOCK SCOPE, WHEN EXECUTION OF BLOCK IS OVER , THEN OBJECT GOES OUT OF SCOPE 
    //WHEN WE CREATE NEW OBJECT INSIDE SWITCH CASE THEN, IT WON'T GIVE ERROR AS PREVIOUS OBJECT GOES OUT OF SCOPE


        switch (choice)
        {

        case 0:
            cout<<"thanks for using"<<endl;
            break;

        case 1:
            cout<<"result of volume of box with default values :";
            {
               box b;

               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here--> thus we can create NEW object 
            break;

        case 2:
            
            cout<<"volume with same value of length,width and height : "<<endl;
           
            {
               int l;
               cout<<"enter the same value for all length,width and height"<<endl;
               cin>>l;

               box b(l);
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here--> thus we can create NEW  object
            break;

        case 3:
         
           
            {
              int l,w,h;
              cout<<"enter value for length,width and height : "<<endl;
              cin>>l>>w>>h;

               box b(l,w,h);
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here--> thus we can create  NEW object
            break;


        
        default:
            cout<<"enter a valid choice"<<endl;
            break;
        }

    } while (choice!=0);
    

    return 0;
}