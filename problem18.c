#include <stdio.h>
int main()
{
    int attempt;
    int mark;
    scanf("%d",&attempt);
    scanf("%d",&mark);

    switch(attempt)
    {
        case 1:
        if(mark>=80)
        {
            printf("Excellent");
        }
        break;

        case 2:
        if(mark>=60)
        {
            printf("Good");
        }
        break;

        case 3:
        if(mark>=40)
        {
            printf("Needs Improvement");
        }
        break;
        
        
    }
}