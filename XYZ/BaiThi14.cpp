#include<iostream>
using namespace std;
void Nhap_n(int &n) {
    do {
    cout << "Nhap n " ;
    cin >> n;
    } while (n<=0 || n>30000);
}
void Nhap_Mang(int &n, int a[]) {
    for (int i=0; i<n; i++) {
        cout << "Nhap mang [ " << i << " ] = " ;
        cin >> a[i];
    }
}
void Xuat_Mang(int n, int a[]){
    for (int i=0;i<n;i++) {
        cout << a[i] << " " ;
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
    for (int i=0; i<n ;i++) {
        if (max == a[i]) {
            diem++;
        }
    }
    cout << "\nGia tri lon nhat cua mang la " << max ;
    cout << "\nSo gia gia tri gia tri max la  " << diem ;
}
int TongChuSo(int n, int a[]) {
    int tong=0;
    for (int i=0;i<n;i++) { 
        while(a[i]>0){
            tong+=a[i]%10;
	        a[i]=a[i]/10;
        }
    }
    return tong;
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
int main () 
{
    int n;
    Nhap_n (n);
    int a[n];
    Nhap_Mang(n,a);
    Xuat_Mang(n,a);
    Sap_Xep_Tang_Dan(n,a);
    cout << "\nGia tri tang dan " ;
    Xuat_Mang(n,a);
    
    return 0;
}