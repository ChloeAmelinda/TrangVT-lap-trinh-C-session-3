#include<stdio.h>
int main()
{
	float diemtoan, diemanh, diemvan, tongdiem, diemtb;
	printf("Moi ban nhap vao diem toan:");
	scanf("%f", &diemtoan);
	
	printf("Moi ban nhap vao diem anh:");
	scanf("%f", &diemanh);
	
	printf("Moi ban nhap vao diem van:");
	scanf("%f", &diemvan);
	
	// tong diem
	tongdiem = diemtoan+diemanh+diemvan;
	printf("Tong diem la: %f\n", tongdiem);
	
	// diem trung binh
	diemtb = tongdiem / 3;
	printf("Diem trung binh la : %f\n", diemtb);
	
	return 0;
}
