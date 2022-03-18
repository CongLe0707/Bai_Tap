#include<stdio.h>
#include<math.h>
#define maxn 100
struct PHANSO
{
	int TS;
	int MS;
};
void NhapPS(PHANSO &x)
{
	printf("Nhap Tu so: "); scanf("%d", &x.TS);
	do{
		printf("Nhap Mau so: "); 
		scanf("%d", &x.MS);
		if(x.MS==0)
			printf("Nhap sai, yeu cau nhap lai mau so: ");
	}while(x.MS==0);
}
void XuatPS(PHANSO x)
{
	printf("Phan so da nhap: %d/%d ", x.TS, x.MS);
}
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void rutgon(PHANSO &x)
{
	int c=UCLN(x.TS,x.MS);
	x.TS=x.TS/c;
	x.MS=x.MS/c;
	printf("%d/%d", x.TS, x.MS);
}
void TongPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS*x2.MS + x1.MS*x2.TS;
	Mau = x1.MS*x2.MS;
	printf("%d/%d",Tu, Mau);
}
float HieuPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS*x2.MS - x1.MS*x2.TS;
	Mau = x1.MS*x2.MS;
	return (float)Tu/Mau;
}
int main() 
{ 
	PHANSO ps1, ps2;
	printf("Nhap phan so: \n");
	NhapPS(ps1);
	NhapPS(ps2);
	printf("\nPhan so 1 la: "); XuatPS(ps1);
	printf("\nPhan so 1 toi gian la: "); rutgon(ps1);
	printf("\nPhan so 2 la: "); XuatPS(ps2);
	printf("\nPhan so 2 toi gian la: "); rutgon(ps2);
	printf("\nTong 2 phan so la: "); TongPS(ps1, ps2);
	if (HieuPS(ps1,ps2)>0)
		printf("\nPhan so 1 lon hon phan so 2: ");
	else
		printf("\nPhan so 2 lon hon phan so 1: ");
}