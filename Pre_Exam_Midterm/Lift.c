#include <stdio.h>

int main() {
    int n,child = 0;
    double support, sum_weight = 0.0;
    scanf("%d %lf", &n, &support);
    for (int i = 0; i < n; i++) {
        double weight;
        int age;
        scanf("%d %lf", &age, &weight);
        if (age < 12){
            child++;
        }
        else {
            child += n+1;
        }
        sum_weight += weight;
    }
    if ((child > n && sum_weight <= support) || n == 0) {
        printf("Safe");
    }
    else {
        printf("Not Safe");
    }
}