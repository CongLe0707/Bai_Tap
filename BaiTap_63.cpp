#include<iostream>
using namespace std;
void Nhap(int &n){
    do {
        cout << "Nhap n ";
        cin >> n;
    }while (n<=0);
}
void Nhapxy(int &x, int &y){
    cout << "Nhap x: " ;cin >> x;
    cout <<"Nhap y: "; cin >> y ;
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
void LietKe(int n, int a[], int x, int y){
    for (int i=0; i<n; i++){
        if (a[i]>=x && a[i]<=y&& a[i]%2==0){
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n, x, y;
    Nhap(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << endl;
    Nhapxy(x,y);
    LietKe(n,a,x,y);
    return 0;
}