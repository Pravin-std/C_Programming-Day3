#include <stdio.h>
int main()
{
    int vechical;
    int hours;
    scanf("%d",&vechical);
    scanf("%d",&hours);
    int perhrs;
    
    

    switch(vechical)
    {
        case 1:
        perhrs = 10;
        int total = hours * perhrs;
        printf("Parking Fee $%d",total);
        break;

        case 2:
        int perhrs2 = 20;
        int total2 = hours * perhrs2;
        printf("Parking Fee $%d",total2);
        break;


    }
}