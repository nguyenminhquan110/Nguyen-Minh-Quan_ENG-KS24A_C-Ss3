#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Nh?p nhi?t �? theo �? Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32; 
    printf("Nhi?t �? t��ng ?ng theo �? Fahrenheit l�: %.2f\n", fahrenheit);

    return 0;
}

