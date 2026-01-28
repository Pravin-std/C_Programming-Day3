#include <stdio.h>
int main()
{
    int type;
    scanf("%d",&type);
    int unit;
    scanf("%d",&unit);
    switch(type)
    {
        case 1:
        
        int bill=0;
        if(unit<100)
        {
        bill = unit * 3;
        printf("Bill $%d",bill);
        }else if(unit>100 && unit<200)
        {
            bill = 100 * 3;
            bill = bill + (unit - 100) * 5;
            printf("Bill $%d",bill-80);
        }
        break;

        case 2:
        bill = unit * 7.5;
        printf("Bill $%d",bill);
        break;

        default:
        printf("Invalid");
        break;
    }

}