#include<iostream>
using namespace std;
const int MAX=100;
void Nhap(int &n,int a[])
{
    do{
        cout << "Nhap n ";
        cin >> n;

    }while (n<=0);
    for(int i=0;i<n;i++)
    {
        cout << "a[ "<< i <<" ]= ";
        cin >> a[i];
        for(int j=0; j<i; j++)
        {
            while(a[i] == a[j])
            {
                cout << "a[ " << i << " ]= ";
                cin >> a[i]; 
            }
        }
    }
}
void Xuat(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
int ChinhPhuong(int n) {
    for(int i=1; i<=n; i++){
        if(i*i == n) {
            return 1;
            break;
        }
    }
     return 0;
}
void KiemTra(int n, int a[]){
    for (int i=0; i<n; i++){
        if (ChinhPhuong(a[i]) && i%2!=0)
            cout << a[i] <<" ";
    }
}
int ViTriGTLN(int n , int a[]) {
    int max = a[0], VTMax=0;
    for (int i=0;i<n;i++) {
        if (a[i] > max ){
            max=a[i];
            VTMax = i;
        }
    }
    return VTMax;
}
int AMin(int n,int a[])
{
	int vtmin=0;
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]< min && a[i]<0)
		{
			min=a[i];
		}
		return min;
}
int SoDuongMin(int n, int a[]){
    int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]< min && a[i]>0)
		{
			min=a[i];
		}
    return min;
}
int TongVTChan(int n, int a[]){
    int tong=0;
    for (int i=0; i<n; i++){
        if (i%2==0 && i!=0){
            tong = tong + a[i];
        }
    }
    return tong;
}
void Hoan_Doi(int &A, int &B) {           
    A=A+B;
    B=A-B;
    A=A-B;
}
void Sap_Xep_Tang_Dan(int n, int a[]) {
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++) {
           if(a[j]<a[i]) {                
                Hoan_Doi(a[j], a[i]);    
            }
        }
    }
}
int main()
{
    int n, a[MAX];
    Nhap(n,a);
    Xuat(n,a);
    cout << "\nSo chinh phuong vi tri le: ";
    KiemTra(n,a);
    cout << "\nVi tri GTLN: " <<  ViTriGTLN(n,a) << endl;
    cout << "So am nho nhat: " << AMin(n,a);
    cout << "\nSo duong nho nhat: " << SoDuongMin(n,a);
    cout << "\nTong vi tri chan: " << TongVTChan(n,a);
    cout << endl;
    Sap_Xep_Tang_Dan(n,a);
    Xuat(n,a);

    return 0;
}