#include <stdio.h>
#include <math.h>
int nt(int n)
{
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
int main()
{
	int n,c,d;
	do 
	{
		printf("nhap n: \n");
		scanf("%d",&n);
	} while(n<0);
	c=0; d=0;
	printf("cac so nguyen to tu 1 den %d l�: \n",n);
	for (int i=1;i<=n;i++)
		if (nt(i)) 
			{
				c=c+1;
				d=d+i;
				printf("%d \t",i);
			}
	printf("\n");
	printf("c� %d so nguyen to tu 1 den %d \n",c,n);
	printf("tong cua cac so nguyen to tu 1 den %d  l� %d\n",n,d);
}