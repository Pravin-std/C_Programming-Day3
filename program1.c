#include <stdio.h>
int main()
{
    int seattype;
    int showtime;
    scanf("%d",&seattype);
    scanf("%d",&showtime);
    int ticketPrice = 0;
    switch(seattype)
    {
        case 1:
        if(showtime >= 18)
        {
            ticketPrice = 150 + 50;
        }else
        {
            ticketPrice = 150;
        }
        break;

        case 2:
         if(showtime >= 18)
        {
            ticketPrice = 250 + 50;
        }else
        {
            ticketPrice = 250;
        }
        break;
    }
    printf("Ticket Price $%d",ticketPrice);
}