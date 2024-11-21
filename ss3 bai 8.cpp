#include<stdio.h>
int main()
{
	int so, daonguoc,a,b,c,d;
	printf("Moi ban nhap so bat ki:");
	
	scanf("%d", &so);
	a= so/100;
	b=(so/10)%10;
	c= so%10;
	daonguoc= c*100+b*10+a;
	printf("Dao nguoc la: %d", daonguoc);
	
	return 0;
}
