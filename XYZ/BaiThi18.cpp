#include<stdio.h>
#define maxn 10000
struct toado
{
	int x;
	int y;
};
void nhaptd(toado p[], int&n);
void caua(toado p[], int n);
int main ()
{
	toado p[maxn];
	int n;
	nhaptd(p,n);
	caua(p,n);
}
void nhaptd(toado p[], int&n)
{
	printf("Nhap vao so n: ");scanf("%d",&n);
	for (int i=0; i<n; i++)
		scanf("%d%d", &p[i].x, &p[i].y);
}
void caua(toado p[], int n)
{
	int d1=0, d2=0, d3=0, d4=0, d5=0;
	for (int i=0; i<n; i++)
	{
		if (p[i].x>0 && p[i].y>0)
			d1++;
		if (p[i].x<0 && p[i].y>0)
			d2++;
		if (p[i].x<0 && p[i].y<0)
			d3++;
		if (p[i].x>0 && p[i].y<0)
			d4++;
		if (p[i].x==0 || p[i].y==0)
			d5++;
	}
	printf("\nSo diem thuoc phan tu thu I: %d", d1);
	printf("\nSo diem thuoc phan tu thu II: %d", d2);
	printf("\nSo diem thuoc phan tu thu III: %d", d3);
	printf("\nSo diem thuoc phan tu thu IV: %d", d4);
	printf("\nSo diem nam tren truc toa do: %d", d5);
}