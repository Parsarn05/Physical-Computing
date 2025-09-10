#include <stdio.h>

int main(){
    int age,height,weight;
    int amount = 0;
    int con1 = 0, con2 = 0, con3 = 0, con4 = 0; 
    float age_avg = 0.0,height_avg = 0.0, weight_avg = 0.0;
    for (int i = 1; i <= 50; i++){
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160){
            con1++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)){
            con2++;
        }
        if (age >= 30 && weight >= 40 && weight <= 80 ){
            con3++;
        }
        if (age < 40 && (weight < 85 || height <= 200)){
            con4++;
        }
        amount++;
        age_avg += age;
        height_avg += height;
        weight_avg += weight;
    }
    age_avg /= amount;
    height_avg /= amount;
    weight_avg /= amount;
    
    printf("Age >= 20 and Height >= 160: %d\n", con1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", con2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", con3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", con4);
    printf("Average Age: %d\n", (int) age_avg);
    printf("Average Height: %.2f\n", height_avg);
    printf("Average Weight: %.2f\n", weight_avg);
}