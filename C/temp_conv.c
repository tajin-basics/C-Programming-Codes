#include <stdio.h>

int main(){

    float c;
    printf("What is the temperature today? (obviously in Celcius silly. Don't you worry! I will convert it to Fahrenheit):\n");
    scanf("%f", &c);

    float f = (9.0/5.0)*c + 32;
    printf("%-25s : %.2f\n", "This is today's temperature in fahrenheit", f);

    return 0;
}