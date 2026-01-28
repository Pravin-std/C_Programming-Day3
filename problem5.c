#include <stdio.h>
#include <string.h>

int main() {
    int pt;
    char pm[10];
    int cost = 0, cashback = 0;

    scanf("%d", &pt);
    printf("Upi/Card/Wallet\n");
    scanf("%s", pm);
    //printf("%s",pm);

    switch(pt)
    {
        case 1:
        switch(pm[0])
        {
        case 'u':
        case 'c':
        cashback = 20;
        cost = 199 - cashback;
        break;

        case 'w':
        cost = 199;
        }
        break;

        

        case 2:
        switch(pm[0])
        {
        case 'u':
        case 'c':
        cashback = 20;
        cost = 399 - cashback;
        break;
        
        case 'w':
        cost = 399;
        }
        break;

    }
    printf("Pay $%d",cost);
    



    return 0;
}
