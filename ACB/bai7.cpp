#include <stdio.h>
int main()
{
	int n,t,n1;
	do 
	{
		printf("nhap n: ");
		scanf("%d",&n);
	} while(n<0);
	n1=n; t=0;
	while (n1>0)
	{
		t=t+n1%10;
		n1=n1/10;
	}
	printf("tong cac chu so  %d la: %d\n",n,t);
	return 0;
}