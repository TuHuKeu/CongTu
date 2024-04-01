#include <stdio.h>
#include <conio.h>
#include <math.h>
bool KT_SoChinhPhuong(int a);
int Dem_SoChinhPhuong(int n);
int main(void){
	int n;
	printf("Nhap n: \n");
	scanf_s("%d", &n);
	Dem_SoChinhPhuong(n);
	_getch();
	return 0;
}
bool KT_SoChinhPhuong(int a)
{
	double n = a;
	int b = sqrt(n);
	if (b * b == a) return true;
	return false;
}
int Dem_SoChinhPhuong(int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KT_SoChinhPhuong(i))
		{
			printf("\n %d la so chinh phuong", i);
			dem++;
		}
	}
	printf("\ntong cong co %d so chinh phuong",dem);
	return dem;
}