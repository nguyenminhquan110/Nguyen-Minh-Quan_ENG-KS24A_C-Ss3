#include <stdio.h>
int main() {
    int so, nghichDao;
    printf("Nhap vao mot so nguyen co 4 chu so: ");
    scanf("%d", &so);
    if (so >= 1000 && so <= 9999) {
        nghichDao = (so % 10) * 1000 + ((so / 10) % 10) * 100 + ((so / 100) % 10) * 10 + (so / 1000);
        printf("So nghich dao la: %d\n", nghichDao);
    } else {
        printf("Nhap so nguyen co 4 chu so.\n");
    }
    return 0;
}

