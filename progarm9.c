#include <stdio.h>
int main()
{
    int type;
    int distance;
    scanf("%d",&type);
    scanf("%d",&distance);
    int fare = 0;
    int kmcost;
    
    switch(type)
    {
        case 1:
        kmcost = 10;
        printf("$%d",kmcost * distance);
        break;

        case 2:
        kmcost = 15;
        printf("$%d",kmcost * distance);
        break;

        case 3:
        kmcost = 20;
        printf("$%d",kmcost * distance);
        break;

    }
    return 0;
}