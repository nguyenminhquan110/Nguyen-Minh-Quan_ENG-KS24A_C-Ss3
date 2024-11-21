#include <stdio.h>
#include <math.h>
int main() {
    float r, chuVi, dienTich;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    chuVi = 2 * M_PI * r;
    dienTich = M_PI * r * r;
    printf("Chu vi hinh tron là: %.2f\n", chuVi);
    printf("Dien tich hinh tron là: %.2f\n", dienTich);
    return 0;
}
