#include <stdio.h>
int main()
{
    int type;
    int litres;
    scanf("%d",&type);
    scanf("%d",&litres);
    int total = 0;
    int perlitre = 0;
    switch(type)
    {
        case 1:
        perlitre = 105;
        total = perlitre * litres;
        break;

        case 2:
        perlitre = 92;
        total = perlitre * litres;
        break;

        case 3:
        perlitre = 85;
        total = perlitre * litres;
        break;
    }
    printf("Fuel Cost $%d",total);
}