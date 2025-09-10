#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celsius);

int main() {
    double num;
    char unit;
    scanf("%lf", &num);
    scanf(" %c", &unit);
    unit = tolower(unit);

    if (unit == 'c'){
        double f = celsiusToFahrenheit(num);
        printFarenheit(f);
    }
    else{
        double c = fahrenheitToCelsius(num);
        printCelcius(c);
    }
}

double celsiusToFahrenheit(double celsius) {
    return 32 + celsius * 1.8;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

void printFarenheit(double fahrenheit) {
    printf("%.2f f", fahrenheit);
}

void printCelcius(double celsius) {
    printf("%.2f c", celsius);
}