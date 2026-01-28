#include <stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);

    int res = mark/10;
    
    switch(res)
    {
        case 9:
        case 10:
        printf("Grade A");
        break;

        case 8:
        case 7:
        if(mark>=75 && mark <=89)
        {
        printf("Grade B");
        }
        break;

        case 6:
        if(mark >=60 && mark<=74)
        {
        printf("Grade C");
        }
        break;

        case 5:
        if(mark>=50 && mark<=59)
        {
        printf("Grade D");
        }
        break;

        case 4:
        if(mark>=40 && mark<=49)
        {
        printf("Grade E");
        }
        break;

        case 3:
        if(mark >=35 && mark<=39)
        {
            printf("Supplementary");
        }
        break;

        case 2:
        if(mark<35)
        {
            printf("Fail");
        }
        break;
    }
}