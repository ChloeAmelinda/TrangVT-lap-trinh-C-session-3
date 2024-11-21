#include<stdio.h>
int main()
{
	float dodaicanh, chieucao, dientich;
	printf("Moi ban nhap do dai canh tam giac:");
	scanf("%f", &dodaicanh);
	
	printf("Moi ban nhap chieu cao tam giac :");
	scanf("%f", &chieucao);
	 
	dientich =dodaicanh*chieucao/2;
	printf("Dien tich tam giac la : %f",dientich);
	return 0;
}
