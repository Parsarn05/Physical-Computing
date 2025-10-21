#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Weather {
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
}Weather;

void playing_decision(Weather* weather) {
    if  (strcmp(weather->outlook, "overcast") == 0){
        printf("yes\n");
        return;
    }
    else if (strcmp(weather->outlook, "rain") == 0 && weather->wind == 'F'){
        printf("yes\n");
        return;
    }
    else if (strcmp(weather->outlook, "sunny") == 0 && weather->humidity <= 77.5){
        printf("yes\n");
        return;
    }
    else {
        printf("no\n");
        return;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Weather weather[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %c", weather[i].outlook, &weather[i].temperature, &weather[i].humidity, &weather[i].wind);
    }
    for (int i = 0; i<n; i++) {
        playing_decision(&weather[i]);
    }
}
