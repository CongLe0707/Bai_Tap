#include<iostream>
using namespace std;
void NhapN(int &n){
    do {
        cout << "Nhap n ";
        cin >> n;
    } while (n<=0);
}
void NhapMang(int n, int a[]) {
    for (int i=0;i<n;i++){
        cout << "a [ " << i << " ] = ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int ViTriMin(int n, int a[]){
    int min=0;
    for (int i=0;i<n;i++){
        if (a[i]<a[min]) 
            min=i;
    }
    return min;
}
int main ()
{
    int n;
    NhapN(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);  
    cout << "\nVi tri min trong mang " << ViTriMin(n,a);
    return 0;
}