#include <stdio.h>
#include <math.h>
#define MAXN 100000
void kt(int a[], int i)
{
	for (int j=0; j<i; j++)
	while (a[j]==a[i])
	{
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void nhap(int a[], int &n)
{
	printf("nhap n: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
		kt(a,i);
	}
}
void xuat(int a[], int n)
{
	printf("xuat mang: \n");
	for (int i=0; i<n; i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int cp(int n)
{
	int x=sqrt(n);
	if (x*x==n)
	return 1;
	return 0;
}
void caccp(int a[], int n)
{
	printf("\ncac so chinh phuong co vi tri le:\n");
	for (int i=1;i<n; i+=2)
	{
		if (cp(a[i]))
			printf("%d\t",a[i]);
	}
	printf("\n");
}
int max(int a[], int n)
{
	int m=a[0]; 
	for (int i=1;i<n; i++)
		if (m<a[i])
			m=a[i];
	return m;
}
void vitri(int a[], int n)
{
	printf("\ncac vi tri cua gia tri lon nhat:\n");
	for (int i=0; i<n; i++)
		if (max(a,n)==a[i])
			printf("%d\t",i);
	printf("\n");
}
int gtchan(int a[], int n)
{
	int t=0;
	for (int i=0; i<n; i++)
		if(i%2==0)
			t=t+a[i];
	return t;
}
void hoanvi(int &a, int &b)
{
	int tg=a;
	a=b;
	b=tg;
}
void sx(int a[], int n)
{
	for (int i=0; i<n-1; i++)
	for (int j=i; j<n; j++)
	if (a[i]>a[j])
		hoanvi(a[i],a[j]);
	xuat(a,n);
}
void menu()
{
	printf("0.Dung chuong trinh\n");
	printf("1.Nhap mang gom n phan tu\n");
	printf("2.Xuat mang\n");
	printf("3.Phan tu có so chinh phuong co vi tri le\n");
	printf("4.Nhung vi tri phan tu co gia tri lon nhat\n");
	printf("5.Tong cac phan tu co vi tri chan\n");
	printf("6.Sap xep tang dan\n");
}
int main()
{
	int a[MAXN],n,chon;
	do
	{	
		menu();
		printf("chon menu: ");
		scanf("%d",&chon);
		switch (chon)
		{
			case 1: 
				nhap(a,n);
				break;
			case 2:
				xuat(a,n);
				break;
			case 3:
				caccp(a,n);
				break;
			case 4:
				vitri(a,n);
				break;
			case 5:
		 		printf("Tong cac phan tu co vi tri chan: %d\n",gtchan(a,n));
		 		break;
 			case 6:
 				sx(a,n);
 				break;
		}
	}while (chon!=0);
}