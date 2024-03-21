#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date * ptr )
{
    ptr->day = 0,ptr->month = 0,ptr->year = 0;  
}

void acceptDateFromConsole(struct Date *ptr)
{
    printf("Enter day ");
    scanf("%d",&ptr->day);
    printf("Enter date ");
    scanf("%d",&ptr->month);
    printf("Enter year ");
    scanf("%d",&ptr->year);

}

void printDateonConsole(struct Date * ptr)
{
    printf("%d/%d/%d\n",ptr->day,ptr->month,ptr->year);
}


int main()
{
    int choice;
    struct Date date;
    
    do 
    {
        printf("\nwelcome...\n");
        printf("1 for initilize data \n");
        printf("2 for acccept date \n");
        printf("3 for dispaly date \n");
        printf("0 for Exit \n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

         switch(choice)
    {
            case 0:
            printf("Thank you....!\n");
            break;
            case 1:
            initDate(&date);
            printf("date intilized");
            break;
            case 2:
            acceptDateFromConsole(&date);
            break;
            case 3:          
            printDateonConsole(&date);            
            break;
            default:
            printf("Invalid key....!\nPlz enter between 0 to 3\n");
            break;
     }

    } while(choice!=0);
}
