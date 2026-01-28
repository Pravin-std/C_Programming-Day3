#include <stdio.h>
int main()
{
    int access;
    int hrs;
    scanf("%d",&access);
    scanf("%d",&hrs);

    switch(access)
    {
        case 1:
        if(hrs>0)
        {
            printf("Full Access");
        }
        break;

        case 2:
        if(hrs >= 9 && hrs <=18)
        {
            printf("Limited Access");
        }else
        {
            printf("Access Denied");
        }
        break;
    }
    return 0;
}