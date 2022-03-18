#include<iostream>
using namespace std;
void NhapMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << "a[ " << i << " ]= ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
void swap (int &a, int &b){
    int tmep=a;
    a=b;
    b=tmep;
}
void SapXepTang(int n, int a[]){
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    do {
        cout << "Nhap n";
        cin >> n;
    } while(n<=0);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    SapXepTang(n,a);
    cout << "\n";
    XuatMang(n,a);
    return 0;
}