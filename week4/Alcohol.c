#include <stdio.h>

int main()
{
    char gender, card;
    int amount, hours;
    float weight, quantity, alcohol;
    scanf(" %c", &gender);
    scanf(" %f", &weight);
    scanf(" %c", &card);
    scanf(" %f", &quantity);
    scanf(" %f", &alcohol);
    scanf(" %d", &amount);
    scanf(" %d", &hours);
    float drink_alcohol = ((alcohol * quantity) / 100.0) * amount;
    float rate = gender == 'M' ? 0.68 : 0.55;
    float bac = ((drink_alcohol / (weight * rate * 10)) * 1000.0) - (15 * hours);
    if (card == 'Y' && bac < 50.0) {
        printf("Safe\n");
    }
    else{
        printf("Not Safe\n");
    }
    return 0;
}