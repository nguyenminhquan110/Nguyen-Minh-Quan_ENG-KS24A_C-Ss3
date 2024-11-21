#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Nh?p nhi?t ð? theo ð? Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32; 
    printf("Nhi?t ð? týõng ?ng theo ð? Fahrenheit là: %.2f\n", fahrenheit);

    return 0;
}

