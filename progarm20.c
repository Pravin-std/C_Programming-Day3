#include <stdio.h>
int main()
{
    int year;
    int choice;
    scanf("%d",&year);

    if(year <= 1)
    {
        choice = 1;
    }else if(year <=2)
    {
        choice = 2;
    }else
    {
        choice = 3;
    }
    
    switch(choice)
    {
        case 1:
       printf("Under Warranty");
        break;

        case 2:
        printf("Limited warranty");
        break;

        case 3:
        printf("Out of Warranty");
        break;

    }
    return 0;
}