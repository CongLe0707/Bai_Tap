#include<iostream>
#include<cmath>
using namespace std;
void NhapN(int &n){
    do{
        cout << "Nhap n ; "; cin >> n;
    }while (n<=0);
}
void NhapMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << "a[ " << i << " ] = ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n;i++){
        cout << a[i] << " ";
    }
}
void LietKe (int n, int a[]){
    int diem=0;
    for (int i=0; i<n; i++){
        if(a[i]>a[i+1]){
            diem=1;
            cout << a[i];
        }
    }
    if (diem==0){
        cout << "Khong co";
    }
}
int main()
{
    int n;
    NhapN(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    LietKe(n,a);
    return 0;
}