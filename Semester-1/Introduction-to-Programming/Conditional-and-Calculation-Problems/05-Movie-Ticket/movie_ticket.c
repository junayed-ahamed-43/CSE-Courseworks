#include <stdio.h>

int main()
{
    int movie,seat;
    float price, finalPrice;

    printf("Movie:\n1.Regular($8)\n2.3D($12)\n3.IMAX($18)\n");
    printf("Enter Movie Type: ");
    scanf("%d", &movie);
   printf("Seat\n1.Silver(+0)\n2.Gold(+5)\n3.Platinum(+10)\n");
    printf("Enter Seat Type: ");
    scanf("%d", &seat);
   if(movie == 1)
{
    price = 8;
}
else if(movie == 2)
{
    price = 12;
}
else if(movie == 3)
{
    price = 18;
}
else
{
    printf("Invalid Movie");
    return 0;
}

if(seat == 1)
{
    finalPrice = price;
}
else if(seat == 2)
{
    finalPrice = price + 5;
}
else if(seat == 3)
{
    finalPrice = price + 10;
}
else
{
    printf("Invalid Seat");
    return 0;
}
 if (movie == 1)
 {
     printf("\nMovie Type: Regular");
 }
 else if (movie == 2)
 {
     printf("\nMovie Type: 3D");
 }
 else if (movie == 3)
 {
     printf("\nMovie Type: IMAX");
 }
 else {
    printf("Invalid choice");
    return 0;
 }
 if (seat == 1)
 {
     printf("\nSeat Type: Silver");
 }
 else if (seat == 2)
 {
     printf("\nSeat Type: Gold");
 }
 else if (seat == 3)
 {
     printf("\nSeat Type: Platinum");
 }
 else {
    printf("Invalid choice");
    return 0;
 }
printf("\nFinal Ticket Price: $%.2f", finalPrice);
return 0;
}

