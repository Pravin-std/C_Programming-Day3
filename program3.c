#include <stdio.h>
int main()
{
    int type;
    int billamt;
    scanf("%d",&type);
    scanf("%d",&billamt);
    int dis,total = 0;
    
    switch(type)
    {
        case 1:
        dis = (billamt * 5) / 100;
        total = billamt - dis;
        printf("$%d",total);
        break;
        
        case 2:
        dis = (billamt * 15) / 100;
        total = billamt - dis;
        printf("$%d",total);
        break;
    }
    return 0;
}