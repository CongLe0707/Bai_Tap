#include<stdio.h>
// câu a
void Nhap(int &n){
	do{
        printf("Nhap n = ");
		scanf("%d",&n);
	}while(0>n || n>100);
}
//câu b
int kiemtra(int n){
    int tong = 0;
    for(int i=1;i<=n/2;i++){
	if(n%i==0) 
    tong+=i;
	}
    if(tong==n) return 1; 
    return 0 ;
}
//câu c
void LietKeSoHoanThien(int n){
	printf("Cac so hoan thien la  : ");
	for(int  i = 1;i<=n;i++){
		int ketQua = kiemtra(i);
		    if(ketQua==1){
			    printf("%d\t",i);
		}
	}
}
//câu d
int DemSoHoanThien(int n){
	int Dem = 0;
	for(int i=1;i<=n;i++){
		int ketQua = kiemtra(i);
		    if(ketQua==1){
			    Dem++;
		}	
	}
	return Dem;
}
//câu e
int TongSoHoanThien(int n){
	int Tong = 0;
	for(int i=1;i<=n;i++){
		int ketQua = kiemtra(i);
		    if(ketQua==1){
			    Tong += i;
		    }	
	}
	return Tong;
}
//câu f
float TBCSoHoanThien(int n){
	int Tong = 0;
	int Dem = 0;
	for(int i=1;i<=n;i++){
		int ketQua = kiemtra(i);
		    if(ketQua==1){
			    Tong += i;
			    Dem++;
		    }	
	}
	return (float)Tong/Dem;
}
int main(){
	int n;	
	Nhap(n);
	LietKeSoHoanThien(n);
	printf("\n");
	int SoLuong = DemSoHoanThien(n);
	printf("Tu 1 den %d co : %d so hoan thien\n",n,SoLuong);
	int Tong = TongSoHoanThien(n);
	printf("Tong so hoan thien tu 1 den  %d = %d\n",n,Tong);
	float TBC = TBCSoHoanThien(n);
	printf("Tu 1 den %d co TBC so hoan thien la %f\n",n,TBC);
	return 0;
}