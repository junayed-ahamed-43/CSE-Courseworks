#include <stdio.h>

int main()
{
    int item, quantity;
    float price,subtotal,discount,finalBill;

    printf("Menu: \n1. Burger-$8\n2. Pizza-$12\n3. Pasta-$10\n4. Sandwich-$6\n");
    printf("Enter item: ");
    scanf("%d", &item);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if(item == 1)
    {
      price = 8;
      }
     else if(item == 2)
    {
     price = 12;
    }
    else if(item == 3)
    {
      price = 10;
    }
    else if(item == 4)
    {
    price = 6;
    }
else {
            printf("Invalid choice");
            return 0;
}

 subtotal = price*quantity;

    if(subtotal > 100)
{
 discount = (subtotal*20)/100;
}
else if(subtotal > 50)
{
    discount = (subtotal*10)/100;
}
else
{
    discount = 0;
}

  finalBill=subtotal-discount;


    if(item == 1)
    {
        printf("\nItem Name: Burger");
    }
    else if(item == 2)
    {
        printf("\nItem Name: Pizza");
    }
    else if(item == 3)
    {
        printf("\nItem Name: Pasta");
    }
        else if(item == 4)
    {
        printf("\nItem Name: Sandwich");
    }
    printf("\nQuantity: %d", quantity);
    printf("\nSubtotal: %.2f", subtotal);
    printf("\nDiscount: %.2f", discount);
    printf("\nFinal Amount: %.2f", finalBill);



    return 0;
}
