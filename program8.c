#include <stdio.h>
int main()
{
    int mark;
    int per;
    scanf("%d",&mark);
    scanf("%d",&per);
    if(per<75)
    {
        printf("fail");
    }else
    {
        if(mark>=75)
        {
            printf("Distinction");
        }else if(mark > 50 && mark < 74)
        {
            printf("Pass");
        }else
        {
            printf("Fail");
        }
    }
    return 0;
}