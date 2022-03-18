#include<iostream>
using namespace std;
void Nhap_N(int &n) {
    do {
        cout << "Nhap n " ;
        cin >> n;
    } while (n<=0);
}
void Nhap_mang(int n, int a[]) {
    for (int i=0;i<n;i++) {
        cout << "Mang a[ " << i << "] = ";
        cin >> a[i];
    }
}
void Xuat_mang (int n, int a[]) {
    cout << "Mang da nhap la ";
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
}
int SoChan(int n, int a[]) {
        for (int i=0; i<n;i++) {
            if (a[i]%2==0) {
            return a[i];
            }
        }
    return -1;
}
int main()
{   
    int n;
    Nhap_N(n);
    int a[n];
    Nhap_mang(n,a);
    Xuat_mang(n,a);
    cout<<"So chan dau la " << SoChan(n,a);
    return 0;
}