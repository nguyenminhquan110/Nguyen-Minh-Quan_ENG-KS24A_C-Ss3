#include <stdio.h>

struct sinhvien {
    char ten[50];
    int tuoi;
    char email[50];
    char sodienthoai[20];
};

int main() {
    struct sinhvien sv1, sv2, sv3;

    printf("Nhap thong tin sinh vien 1:\n");
    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(sv1.ten, sizeof(sv1.ten), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv1.tuoi);
    getchar();
    printf("Nhap email sinh vien: ");
    fgets(sv1.email, sizeof(sv1.email), stdin);
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv1.sodienthoai, sizeof(sv1.sodienthoai), stdin);
    printf("\nNhap thong tin sinh vien 2:\n");
    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(sv2.ten, sizeof(sv2.ten), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv2.tuoi);
    getchar();
    printf("Nhap email sinh vien: ");
    fgets(sv2.email, sizeof(sv2.email), stdin);
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv2.sodienthoai, sizeof(sv2.sodienthoai), stdin);
    printf("\nNhap thong tin sinh vien 3:\n");
    printf("Nhap ten sinh vien: ");
    getchar();
    fgets(sv3.ten, sizeof(sv3.ten), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv3.tuoi);
    getchar();
    printf("Nhap email sinh vien: ");
    fgets(sv3.email, sizeof(sv3.email), stdin);
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv3.sodienthoai, sizeof(sv3.sodienthoai), stdin);
    printf("\nDanh sach sinh vien:\n");
    printf("-------------------------------------------------------------\n");
    printf("| STT | %-20s | %-5s | %-30s | %-15s |\n", "Ten", "Tuoi", "Email", "So dien thoai");
    printf("-------------------------------------------------------------\n");
    printf("| %-3d | %-20s | %-5d | %-30s | %-15s |\n", 1, sv1.ten, sv1.tuoi, sv1.email, sv1.sodienthoai);
    printf("| %-3d | %-20s | %-5d | %-30s | %-15s |\n", 2, sv2.ten, sv2.tuoi, sv2.email, sv2.sodienthoai);
    printf("| %-3d | %-20s | %-5d | %-30s | %-15s |\n", 3, sv3.ten, sv3.tuoi, sv3.email, sv3.sodienthoai);
    printf("-------------------------------------------------------------\n");

    return 0;
}

