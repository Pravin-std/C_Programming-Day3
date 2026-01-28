#include <stdio.h>
int main()
{
    int flightclass;
    int weight;
    scanf("%d",&flightclass);
    scanf("%d",&weight);
    int perkg = 300;
    int total = 0;

    switch(flightclass)
    {
        case 1:
        total = weight * perkg;
        printf("Extra Baggage Charge $%d",total);
        break;

        case 2:
        if(weight < 4)
        {
            printf("Free");
        }else if(weight >= 4)
        {
            total = (weight - 3) * 300;
            printf("Extra Baggage Charge $%d",total);
        }
        break;

    }
}