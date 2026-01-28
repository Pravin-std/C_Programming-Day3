#include <stdio.h>
int main()
{
    int loantype;
    int score;
    scanf("%d",&loantype);
    scanf("%d",&score);

    switch(loantype)
    {
        case 1:
        if(score>=700)
        {
            printf("Approved");
        }else if(score > 650 && score < 700)
        {
            printf("Manual Review");
        }
        break;

        case 2:
        if(score >= 700)
        {
            printf("Approved");
        }else if(score < 700)
        {
            printf("Rejected");
        }
        break;
    }
}