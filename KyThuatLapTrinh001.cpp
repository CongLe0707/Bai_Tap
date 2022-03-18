#include<iostream>
using namespace std;
void NhapN (int &n)
{
    do {
        cout << "Nhap n: ";
        cin >> n;
        if ( n<=0 || n>100){
            cout << "Nhap lai " << endl;
        }
    } while (n<=0 || n>100);
}
void NhapMang (int &n, int a[])
{
    for (int i=0; i<n; i++) {
        cout << "a[ " << i << " ]= ";
        cin >> a[i];
    }
}
void XuatMang (int n, int a[])
{
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
} 
 int PhanTuDuong (int n, int a[]) 
{
    for (int i=0; i<n; i++){
        if (a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}
int PhanTuDuongCuoi (int n, int a[])
{
    for (int i=n-1; i>0; i--){
        if ( a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}
 
int Max(int n, int a[]) {
    int max = a[0];
    for (int i=1; i<n; i++) {
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int DemPhanTu (int n, int a[])
{
    int dem=0, max=a[0];
    for (int i=1; i<n ; i++) {
        if (Max(n,a) == a[i]){
            dem++;
        }
    }
    return dem;
}
void ViTriLonNhat (int n, int a[])

{
    int max=a[0];
    for (int i=0; i<n; i++) {
        if ( Max(n,a) == a[i]){
            cout << i << " ";
        }
    }
}
void ChenViTri(int &n, int a[], int v, int c){
    for (int i=n; i > v; i--){
        a[i] = a[i-1];
    }
    a[v] = c;
    n++;
}

int main() {
    int n,v,c;
    NhapN(n);
    int a[100];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << endl;
    cout << "Phan tu duong dau tien la: " << PhanTuDuong(n,a) << endl;
    cout << "Phan tu duong cuoi cung la: " << PhanTuDuongCuoi(n,a) << endl;
    cout << "Gia tri lon nhat la: " << Max(n,a) << endl;
    cout << "So phan tu lon nhat la: " << DemPhanTu(n,a) << endl;
    cout << "Cac vi tri lon nhat: " ;
    ViTriLonNhat(n,a);
    cout << endl;
    cout << "Nhap vi tri can chen: ";
    cin >> v;
    cout << "Nhap So can chen: ";
    cin >> c;
    ChenViTri(n,a,v,c);
    cout << endl;
    XuatMang(n,a);
    return 0;
}