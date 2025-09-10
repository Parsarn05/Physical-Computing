#include <stdio.h>

int main()
{
    float price, discount, amount;
    scanf("%f %f %f", &price, &discount, &amount);
    int buy = (amount)/3;
    buy += amount - (buy*3);
    float pricebuy2get1 = buy*2*price;
    float pricediscountpercent = (amount*price) - ((price * amount)*(discount/100));
    if (pricebuy2get1 < pricediscountpercent)
    {
        printf("Buy 2 Get 1\n%.2f", pricebuy2get1);
    }
    else{
        printf("Discount %d%%\n%.2f",(int)discount, pricediscountpercent);
    }
    return 0;
}