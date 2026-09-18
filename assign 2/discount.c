#include <stdio.h>
void main()
{   char choice;
    double price,discount=0,tprice;
    printf("Enter the price: ");
    scanf("%lf",&price);
    printf("Are you a student? (y/n): ");
    scanf(" %c",&choice);
    if(choice=='y')
    {
        if(price>500)
            discount=price*0.20;
        else
            discount=price*0.10;
    }
    else
    {
        if(price>600)
            discount=price*0.15;
        else
            discount=0;
    }
    tprice=price-discount;
    printf("Price=%.2lf\n",price);
    printf("Discount=%.2lf\n",discount);
    printf("Final Price=%.2lf\n",tprice);
}