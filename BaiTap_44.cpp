#include<iostream>
#include <iostream>
using namespace std;
void Nhap_n(int &n){
    do {
        cout << "Nhap n ";
        cin >> n;
    } while (n<=0);
}
void Nhap_Mang(int n, int a[]){
    for (int i=0;i<n;i++){
        cout << "Mang a [ " << i << " ] = ";
        cin >> a[i];
    }
}
void Xuat_Mang(int n, int a[]){
    cout << "Mang da nhap la ";
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
}
int Snt(int n) {
    if (n<2) return 0;
    for (int i=2;i<n;i++)
        if (n%i==0) return 0;
    return 1;
}
int SNTDauTien(int n, int a[]){
    for(int i=0;i<n;i++){
        if (Snt(a[i])) {
            return a[i];
        }
    }
    return -1;
}
int main ()
{
    int n;
    Nhap_n(n);
    int a[n];
    Nhap_Mang(n,a);
    Xuat_Mang (n,a);
    cout << "\nSo nguyen to dau tien trong mang " << SNTDauTien(n,a) ;

    return 0;
}