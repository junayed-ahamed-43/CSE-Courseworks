#include <stdio.h>

int main()
{
    int type, usage;
    float bill = 0;

    printf("Menu\n1.Residential\n2.Commercial\n3.Industrial\n");
    printf("Enter customer type: ");
    scanf("%d", &type);

    printf("Enter units consumed: ");
    scanf("%d", &usage);
    
    int extra;
    
    if(type == 1)
    {
        if (usage > 300) {
            extra = usage - 300;
            bill = (extra * 10) + (200 * 7) + (100 * 5);
        }
        else if (usage > 100) {
            extra = usage - 100;
            bill = (extra * 7) + (100 * 5);
        }
        else {
            bill = usage * 5;
        }
    }
    else if(type == 2)
    {
        if (usage > 300) {
            extra = usage - 300;
            bill = (extra * 12) + (200 * 10) + (100 * 8);
        }
        else if (usage > 100) {
            extra = usage - 100;
            bill = (extra * 10) + (100 * 8);
        }
        else {
            bill = usage * 8;
        }
    }
    else if(type == 3)
    {
        if (usage > 300) {
            extra = usage - 300;
            bill = (extra * 15) + (200 * 12) + (100 * 10);
        }
        else if (usage > 100) {
            extra = usage - 100;
            bill = (extra * 12) + (100 * 10);
        }
        else {
            bill = usage * 10;
        }
    }
    else
    {
        printf("Invalid choice");
    }

    if(type == 1)
    {
        printf("Customer Type: Residential");
    }
    else if(type == 2)
    {
        printf("Customer Type: Commercial");
    }
    else if(type == 3)
    {
        printf("Customer Type: Industrial");
    }

    printf("\nUnits: %d", usage);
    printf("\nBill: %.2f", bill);

    return 0;
}