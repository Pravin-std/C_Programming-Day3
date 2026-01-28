#include <stdio.h>
int main()
{
    int type;
    int daysLate;
    scanf("%d",&type);
    scanf("%d",&daysLate);
    int fee = 0;

    switch(type)
    {
        case 1:
        fee = 2;
        int total = daysLate * fee;
        printf("Late Fee $%d",total);
        break;

        case 2:
        fee = 5;
        int total2 = daysLate * fee;
        printf("Late Fee $%d",total2);
        break;

    }
    
}