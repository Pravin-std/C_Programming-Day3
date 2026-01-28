#include <stdio.h>
int main()
{
    int accounttype;
    int year;
    int interest = 0;
    scanf("%d",&accounttype);
    scanf("%d",&year);

    switch(accounttype)
    {
        case 1:
        interest = 4;
        break;

        case 2:
        if(year <= 3)
        {
            interest = 5;
        }else
        {
            interest = 7;
        }
        break;
    }
    printf("Interest %d per",interest);
    return 0;
}