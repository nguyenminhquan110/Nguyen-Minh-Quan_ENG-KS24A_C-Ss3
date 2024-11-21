#include <stdio.h>
int main() {
	float toan, van, anh;
	printf ("Nhap diem toan: ");
	scanf("%f", &toan);
	printf ("Nhap diem van: ");
	scanf("%f", &van);
	printf ("Nhap diem anh: ");
	scanf("%f", &anh);
	float tongdiem= toan + van + anh;
	float diemtrungbinh = tongdiem/3;
	printf (" tong diem: %.2f/n", tongdiem);
	printf ("diem trung binh: %.2f/n", diemtrungbinh);
	return 0; 
	 
} 
