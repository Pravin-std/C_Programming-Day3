#include <stdio.h>
int main()
{
    int vechicalType;
    int trip;
    scanf("%d",&vechicalType);
    scanf("%d",&trip);

    switch(vechicalType)
    {
        case 1:
        if(trip==1)
        {
            printf("$100");
        }else if(trip>1)
        {
            printf("$800");
        }
        break;

        case 2:
        int eachtrip = 240;
        int res = trip * eachtrip;
        printf("$%d",res);
        break;
    }

}