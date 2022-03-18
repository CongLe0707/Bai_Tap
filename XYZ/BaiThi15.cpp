#include<iostream>
using namespace std;
void NhapN(int &n){
    cout << "Nhap n ";
    cin >> n;
}
void Nhap_Mang(int n , int a[]) {
    for (int i=0;i<n;i++) {
        cout << "Mang [ " << i << " ] = " ;
        cin >> a[i];
    }
}
void Xuat_Mang(int n, int a[]) {
    cout << "Mang da nhap la  " ;
    for (int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int GTLN(int n , int a[]) {
    int max = a[0];
    for (int i=1;i<n;i++) {
        if (max < a[i]){
            max=a[i];
        }
    }
    return max;
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
int Diem(int n, int a[]){
    int diem=0;
    for (int i=0;i<n;i++) {
        diem++;
    }
    return diem;
}
int main () 
{
    int n;
    NhapN(n);
    int a[n];
    Nhap_Mang(n,a);
    Xuat_Mang(n,a);
    float tong = TongChuSo(n,a);
    cout << "\nTong gia tri mang = " << tong << endl;
    cout << "Gia tri lon nhat mang =  " << GTLN(n,a) << endl;
    int diem = Diem(n,a);
    float tbc = tong/diem;
    cout << "TBC mang = "<< (float)tbc ;
    return 0;
}