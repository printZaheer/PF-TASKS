#include <stdio.h>

int main()
{
    int pedestrian = 0;
    int seat = 0;
    int Revenue = 0;
    int ticket_price = 60;

    while (seat < 15)
    {
        pedestrian++;

        if (pedestrian % 4 == 0)
        {
            seat++;
            Revenue += ticket_price;

            printf("Passenger booked seat #%d, Total Revenue: %d\n", seat, Revenue );
        }
    }
         printf("\nBus is full. Booking closed!\n");
        printf("Total Revenue Collected: %d\n", Revenue);
    
    return 0;
}