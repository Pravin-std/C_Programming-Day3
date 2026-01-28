#include <stdio.h>
int main()
{
    int roomtype;
    char ch;
    int amt = 0;
    scanf("%d\n",&roomtype);
    scanf("%c",&ch);
    switch(roomtype)
    {
        case 1:
        if(ch=='A')
        {
            amt = 2500;
        }else if(ch=='B')
        {
            amt = 2000;
        }
        break;

        case 2:
        if(ch=='C')
        {
            amt = 4000;
        }else if(ch=='D')
        {
            amt = 3000;
        }
        break;

        default:
        printf("Invalid");
        break;


    }
    printf("%d",amt);

    return 0;
}