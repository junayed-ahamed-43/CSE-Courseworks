#include <stdio.h>

int main()
{
    int destination;
    float cost, weight;

    printf("Destination\n1.Local\n2.National\n3.International\n");
    printf("Enter Destination: ");
    scanf("%d", &destination);

    printf("Enter Package Weight: ");
    scanf("%f", &weight);
    if(destination == 1)
    {
 if (weight<=2) {
        cost = 5;
 }
 else if (weight<=5){
    cost = 8;
 }
 else {
    cost = 12;
 }
 }
    else if(destination == 2)
    {
if (weight<=2) {
        cost = 10;
 }
 else if (weight<=5){
    cost = 15;
 }
 else {
    cost = 25;
 }      }
    else if(destination == 3)
    {
if (weight<=2) {
        cost = 25;
 }
 else if (weight<=5){
    cost = 40;
 }
 else {
    cost = 60;
 }
 }

    else
    {
        printf("Invalid choice");
        return 0;
    }


    if(destination == 1)
{
    printf("Destination: Local");
}
else if(destination == 2)
{
    printf("Destination: National");
}
else if(destination == 3)
{
    printf("Destination: International");
}


    printf("\nWeight: %.2f kg", weight);
    printf("\nShipping Cost: %.2f", cost);


    return 0;
}
