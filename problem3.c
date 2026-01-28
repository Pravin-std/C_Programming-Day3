#include <stdio.h>
int main()
{
    int type;
    scanf("%d",&type);
    int balance;
    scanf("%d",&balance);
    int withdraw;
    scanf("%d",&withdraw);

    switch(type)
    {
        case 1:
        if(balance > withdraw)
        {
            printf("Transaction Successful");
        }else
        {
            printf("Insufficient Balance");
        }
        break;

        case 2:
        if(withdraw > 7000)
        {
            printf("Limit Exceed");
        }else
        {
            printf("Transaction Successful");
        }
        break;
    }
}