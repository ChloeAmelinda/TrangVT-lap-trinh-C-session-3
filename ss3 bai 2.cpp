#include<stdio.h>
int main()
{
	float nhietdoC, nhietdoF;
	printf("Moi ban nhap vao nhiet do celsius:");
	scanf("%f", &nhietdoC);
    nhietdoF = nhietdoC*1.8+32;
	printf("Nhiet do Fahrenreit la: %.2f", nhietdoF);
	return 0;
 } 
