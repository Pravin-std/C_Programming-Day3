#include <stdio.h>
int main()
{
    int amt;
    int speed;
    int ch = 0;
    scanf("%d",&amt);
    scanf("%d",&speed);

    switch(speed)
    {
        case 1:
        ch = 50;
        break;

        case 2:
        if(amt<1000)
        {
            ch = 100;
        }else
        {
            printf("Free");
        }
        break;
    }
    printf("Delivery $%d",ch);
    return 0;
}