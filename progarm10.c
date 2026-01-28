#include <stdio.h>
int main()
{
    int hrs;
    int ch;
    scanf("%d",&hrs);
    
    if(hrs <=1)
    {
        ch = 1;
    }else if(hrs <= 4)
    {
        ch = 2;
    }else
    {
        ch = 3;
    }
    switch(ch)
    {
        case 1:
        printf("Short Interruption");
        break;

        case 2:
       printf("Medium Interruption");
        break;

        case 3:
        printf("Long Interruption");
        break;

    }
    return 0;
}