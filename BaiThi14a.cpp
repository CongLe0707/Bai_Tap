#include<iostream>
using namespace std;
void NhapMang(int n, int a[]) {
    for ( int i=0;i<n;i++) {
        cout << "Mang [ " << i << " ] = ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[] ) {
    cout  << "Mang da nhap la " ;
    for (int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
}
void Hoan_Doi(int &A, int &B) {           
    int tam=A;
        A=B;
        B=tam;
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
void Max(int n, int a[])
{
    int max = a[0];
    int diem=0;
    for (int i=1; i<n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    for (int i=1; i<n ;i++) {
        if (max == a[i]) {
            diem++;
        }
    }
    cout << "\nGia tri lon nhat cua mang la " << max ;
    cout << "\nSo gia gia tri gia tri max la  " << diem ;
}
int TongChuSo(int n, int a[]) {
    int tong=0,tam;
    for (int i=0;i<n;i++) { 
        while(a[i]>0){
            tong+=a[i]%10;
	        a[i]=a[i]/10;
        }
    }
    return tong;
}
int main () 
{
    int n;
    cout << "Nhap n ";
    cin >> n;
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    Sap_Xep_Tang_Dan(n,a);
    cout << "\nGia tri tang dan " ;
    XuatMang(n,a);
    Max(n,a);
    cout << endl;
    cout << TongChuSo(n,a) << endl;
    
    
    return 0;
}