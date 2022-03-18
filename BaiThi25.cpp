#include<iostream>
#include<cmath>
using namespace std;
#define MIN -10000
void Nhap_n(int &n) {
    do {
        cout << "Nhap n: " ;
        cin >> n;
    } while (n<=0);
}
void NhapMang(int n, int a[]) {
    for (int i=0; i<n;i++) {
        cout << "[ " << i <<" ] = ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]) {
    for (int i=0; i<n;i++)
        cout << a[i] << " ";
}
int tong(int n, int a[]) {
    int tong=0;
    for (int i=0; i<n;i++) 
        tong = tong + a[i];
    return tong;
    
}
int dem(int n, int a[]) {
    int dem=0;
    for (int i=0;i<n;i++)
        dem++;
    return dem;
}
float TBC(int n, int a[]) {
    float tbc=(float)tong(n,a) / dem(n,a);
    return tbc;
}
int Dem(int n, int a[]) {
    int dem=0;
    for (int i=0;i<n;i++) { 
      if (a[i]%100==0)
        dem++;
    }
    return dem;
}
void Dem100(int n, int a[]) {
    int dem1=0,dem2=0,dem3=0;
    for (int i=0; i<n;i++) {
        if (a[i]<100)
            dem1++;
        if (a[i]>=100 && a[i]<1000)
            dem2++;
        if (a[i]>=1000)
            dem3++;
    }
    cout << "Nho hon 100 co " << dem1 << " so " << endl;
    cout << "Lon hon or 100 va be hon 1000 co  " << dem2 << " so " << endl;
    cout << "Lon hon 1000 co " << dem3 << " so " << endl;    
}
int nt(int n)
{
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
int demSNT(int n, int a[]) {
    int dem = 0, donvi;
    for (int i=0; i<n; i++) {
        if (nt(a[i])) {
            donvi = a[i]%10;
            if (donvi!=1&&donvi!=2&&donvi!=3&&donvi!=5&&donvi!=7)
                dem++;
        }
    }
    return dem;
}
int DemSo(int n)
{
    int dem = 0;
    while (n > 0)
    {
        n /= 10;
        dem++;
    }
    return dem;
}
bool Armstrong(int n)
{
    int num = DemSo(n);
    int tam = n, tong = 0,SoCuoi;
    while (tam > 0)
    {
        SoCuoi = tam % 10; 
        tam /= 10;  
        tong += pow(SoCuoi, num);
    }
    if (tong == n)
        return true;
    return false;
}
int demsoasmtrong(int n, int a[]) {
    int dem=0;
    for(int i=0;i<n;i++){
        if (Armstrong(a[i]) == true){
            if (a[i]>10)
                dem++;
        }
    }
    return dem;
}

void vitrimax(int n, int a[]) {
	int max = 0;
	for (int i=0; i<n; i++) {
		if (a[i]==a[max]) { 
			max=i;
            cout << i << " ";
        }
    }
}
int SNTMax(int n, int a[]) {
    int max = MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max && nt(a[i]) )
            max = a[i];
    }
    if( max == MIN )
        return 0;
    else
        return max;
}
int CapSo(int n, int a[])
{
    int dem=0;
    for (int i=0;i<n;i++) { 
		for (int j=i+1;j<n;j++)
			if(a[i]>a[j]&&i<j)
				dem++;
    }
    return dem;
}
void lietke(int n, int a[])
{
    int dem=0,m;
    cout << "cau 9 "<<endl;
	cout << "nhap m ";
        cin >> m;
    for (int i=0;i<n-2;i++) { 
		for (int j=i+1;j<n-1;j++)
			for (int k=j+1;k<n;k++)
				if(a[i]+a[j]+a[k]==m&&i<j<k)
				{
				cout << " "<<a[i];
				cout <<" "<<a[j];
				cout <<" "<<a[k]<<endl;
			}
    }
}
void ThayThe(int n,int a[]){
   for(int i=0;i<n;i++){
      int temp=0;
      while(a[i]>0){
         temp+=a[i]%10;
         a[i]/=10;
      }
      a[i]=temp;
   }
   cout<<"cau 10 ";
   for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
   }
}
int main() 
{   
    int n;
    Nhap_n(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << "\nCau 1 = " <<TBC(n,a)<< endl;
    cout << "Cau 2 = " << Dem(n,a) << endl;
    Dem100(n,a);
    cout <<"Cau 4 "<< demSNT(n,a) << endl;
    cout << "Cau 5 "<<demsoasmtrong(n,a) << endl;
    vitrimax(n,a);
    cout <<"\nCau 7 " << SNTMax(n,a) << endl;
    cout << " Cau 8 " <<  CapSo(n,a) << endl;
    cout << "Cau 8 " <<  CapSo(n,a) << endl;
    lietke(n,a);
    ThayThe(n,a);
    return 0;
}

