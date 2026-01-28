#include <stdio.h>
int main()
{
    int mode;
    int type;
    scanf("%d\n",&mode);
    scanf("%c",&type);

    switch(mode)
    {
        case 1:
        if(type=='R')
        {
            printf("$5000");
        }else if(type=='S')
        {
            printf("$3000");
        }
        break;

        case 2:
        if(type=='R')
        {
            printf("$9000");
        }else if(type=='S')
        {
            printf("$7000");
        }
        break;
    }
}