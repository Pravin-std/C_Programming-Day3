#include <stdio.h>
int main()
{
    int type;
    int units;
    scanf("%d",&type);
    scanf("%d",&units);
    int cost;
    int total = 0;
    
    switch(type)
    {
        case 1:
        if(units<=30)
        {
            cost = 5;
            total = cost * units;
        }else if(units>30)
        {
            cost = 8;
            total = units * cost;
        }
        break;

        case 2:
        cost = 10;
        total = cost * units;
        break;
    }
    printf("$%d",total);
    return 0;
}