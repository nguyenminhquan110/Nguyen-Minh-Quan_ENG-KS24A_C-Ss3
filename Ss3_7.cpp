#include <stdio.h>
int main() {
    int so, tong, chuSo1, chuSo2, chuSo3, chuSo4;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &so);
    if (so < 1000 || so > 9999) {
        printf("Vui long nhap mot so nguyen co 4 chu so.\n");
        return 1;
    }
    chuSo1 = so / 1000;            
    chuSo2 = (so / 100) % 10;      
    chuSo3 = (so / 10) % 10;
    chuSo4 = so % 10;       
    tong = chuSo1 + chuSo2 + chuSo3 + chuSo4;
    printf("Tong cac chu so trong %d la: %d\n", so, tong);
    return 0;
}

