// Nhập 3 số dương hỏi có phải tam giác không
int KT(int x){
	double k=sqrt(x),temp=0;
	for(int i=1;i<sqrt(k);i++)
	{
	if(k==i) temp++;
	}
	if(temp==0) return 0;
	else return 1;	
}
void ChinhPhuong(int a[],int n){
	for(int i=0;i<n;i++){
		if(i%2==1 && KT(a[i]))
		{
			printf("%d",a[i]);
		}
	}
}