#include<stdio.h>
#include<math.h>
#define maxn 10000
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int demsohoanchinh(int a[], int n);// Do Thanh Dat (D)
void chanle(int a[], int n);
int tongsonguyento(int a[], int n);
int main()
{
	int a[maxn],n;
	nhapmang(a,n);
	xuatmang(a,n);
	printf("Cau 1: Dem so hoan chinh: %d\n",demsohoanchinh(a,n));
	printf("Cau 2: ");
	chanle(a,n);
	printf("Cau 3: Tong gia tri nguyen to : %d\n",tongsonguyento(a,n));
	return 0;
}
void nhapmang(int a[], int &n)
{
	printf("Nhap so n = ");scanf("%d",&n);
	for (int i=0;i<n;i++)	
		scanf("%d",&a[i]);
}
void xuatmang(int a[], int n)
{
	for (int i=0;i<n;i++)	
		printf("%d ",a[i]);	
	printf("\n");
}
int hoanchinh(int n)
{
	int sum=0;
    for(int i=1;i<=n/2;i++)
	if(n%i==0) 
    	sum+=i;
	return sum==n;
}
int demsohoanchinh(int a[], int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	if(hoanchinh(a[i]))
		d++;
	return d;
}
void chanle(int a[], int n)
{
	int chan=0,le=0;
	for (int i=0;i<n;i++)
	if (a[i]%2==0)
		chan=chan+1;
	else	
		le=le+1;
	printf("Mang co %d so chan, mang co %d so le\n",chan,le);
}
int nguyento(int n)
{
	if (n<2) return 0;
	int k= sqrt(n);
	for(int i=2;i<=k;i++)
	if(n%i==0) return 0;
	return 1;
}
int tongsonguyento(int a[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	if(nguyento(a[i]))
	sum+=a[i];
	return sum;
}