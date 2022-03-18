#include<stdio.h>
#include<math.h>
#define maxn 10000
void nhapmang(int a[], int &n);//cau a
void xuatmang(int a[], int n);//cau b
void inchinhphuong(int a[],int n);//cau c
int vitrimax(int a[], int n);//cau d
int tongchan(int a[], int n);//cau e
void sapxep(int a[], int n);//cau f
int main()
{
	int a[maxn],n,k,x;
	nhapmang(a,n);
	printf("Cac phan tu da nhap la: ");
	xuatmang(a,n);
	printf("Cac so CP o vi tri le la: ");
	inchinhphuong(a,n);
	printf("\nVi tri so lon nhat la: a[%d]",vitrimax(a,n));
	printf("\nTong cac so vi tri chan la: %d",tongchan(a,n));
	printf("\nSap xep tang dan: ");
	sapxep(a,n);
}
void Kiemtra(int a[], int i)
{
    for (int j=0;j<i;j++){
        while (a[i]==a[j]){
            printf ("Nhap lai gia tri a[%d]= ",i);scanf ("%d",&a[i]);
            Kiemtra(a, i);}
    }
}
void nhapmang(int a[], int &n)//cau a
{
	printf ("Nhap vao so phan tu cua mang ");scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf ("a[%d]= ",i);scanf ("%d",&a[i]);
        Kiemtra(a, i); 
    }
}
void xuatmang(int a[], int n)//cau b
{
	for (int i=0;i<n;i++)	
		printf("%d ",a[i]);	
	printf("\n");
}
int chinhphuong(int n) 
{
    for(int i=1; i<=n; i++){
        if(i*i == n) 
        return 1;
    break;
    }
    return 0;
}
void inchinhphuong(int a[],int n)//cau c
{
    for(int i=0; i<n; i++) {
        if(chinhphuong(a[i]) && (i%2 != 0))
            printf(" %d ",a[i]);
	}
}
int vitrimax(int a[], int n)
{
	int max=0;
	for (int i=0; i<n; i++)
		if (a[i]>a[max])
			max=i;
	return max;
}
int tongchan(int a[], int n)//cau e
{
	int t=0;
	for (int i=0; i<n; i++)
		if(i%2==0)	t = t+a[i];
	return t;
}
void swap(int &x, int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void sapxep(int a[], int n)
{
	for (int i=0; i<n-1; i++){
	for (int j=i+1; j<n; j++)
	if (a[i]>a[j])
		swap(a[i],a[j]);
	}
}