#include <stdio.h>
int main()
{
    int type;
    int min;
    scanf("%d",&type);
    scanf("%d",&min);
    int cost;
    int total = 0;
    
    switch(type)
    {
        case 1:
        cost = 1;
        total = min * cost;
        break;

        case 2:
        cost = 3;
        total = min * cost;
        break;

        case 3:
        cost = 10;
        total = min * cost;
        break;

    }
    printf("Call Charge $%d",total);
    return 0;
}