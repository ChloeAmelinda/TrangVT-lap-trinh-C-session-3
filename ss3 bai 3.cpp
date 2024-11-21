#include<stdio.h>
int main()
{
	float r;
	printf("Moi ban nhap vao do dai ban kinh:");
	scanf("%f", &r);
	
	// tinh chu vi hinh tron
	float chuvi = 2 * 3.14 * r;
	printf("Chu vi hinh tron la : %.2f\n",chuvi);
	
	// tinh dien tich hinh tron
	float dientich = 2 * 3.14 * r * r;
	printf("Dien tich hinh tron la : %.2f\n",dientich);
	
}
