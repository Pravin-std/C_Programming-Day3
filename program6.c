#include <stdio.h>
int main()
{
    int days;
    int choice;
    scanf("%d",&days);
    int fine = 0;
    int total = 0;

    if(days <= 5)
    {
        choice = 1;
    }else if(days <=10)
    {
        choice = 2;
    }else
    {
        choice = 3;
    }
    
    switch(choice)
    {
        case 1:
        fine = 50;
        total = fine * days;
        break;

        case 2:
        fine = 100;
        total = fine * days;
        break;

        case 3:
        fine = 200;
        total = fine * days;
        break;

    }
    printf("$%d",total);
    return 0;
}