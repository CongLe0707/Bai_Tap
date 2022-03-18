#include<iostream>
#include<cmath>
using namespace std;
void Nhap_n(int &n) {
    do {
    cout << "Nhap n " ;
    cin >> n;
    } while (n<=0);
}
void Nhap_Mang(int &n, int a[]) {
    for (int i=0; i<n; i++) {
        cout << "Nhap mang [ " << i << " ] = " ;
        cin >> a[i];
    }
}
void Xuat_Mang(int n, int a[]){
    cout << "Mang da nhap la ";
    for (int i=0;i<n;i++) {
        cout << a[i] << " " ;
    }
}
int KTSoNguyenTo(int n ) {
    int dem =0;
    for(int i=1; i<n; i++) {
        if(n%i==0)
            dem++;
        if(dem==2)
            return 1;
        else
            return 0;
    }
}
int tongnt(int n,int a[]) {
    int tong=0;
    for(int i=0; i<n; i++) {
        if(KTSoNguyenTo(a[i])==1) {
            tong+=a[i];
        }
    }
    return tong;
}
void ChanLe(int n, int a[]) {
    int diem1=0,diem2=0;
    for (int i=0;i<n;i++) {
        if (a[i]%2==0) 
            diem1++;
    }
    for (int i=0;i<n;i++) {
        if (a[i]%2!=0) 
            diem2++;
    }
}
int main () 
{
    int n;
    int a[n];
    Nhap_n (n);
    Nhap_Mang(n,a);
    Xuat_Mang(n,a);
    cout << "Tong snt " << tongnt << endl;
    ChanLe(n,a);
    return 0;
}