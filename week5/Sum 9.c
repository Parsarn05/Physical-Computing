#include <stdio.h>

int main(){
    int sum = 0;
    int input;
    while (input != -9){
        scanf("%d", &input);
        if (input != -9){
            sum += input;
        }
    }
    printf("%d",sum);
    return 0;
}