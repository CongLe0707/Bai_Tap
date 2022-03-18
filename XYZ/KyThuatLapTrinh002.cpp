#include<iostream>
using namespace std;
void NhapN (int &n){
    do{
        cout << "Nhap n: ";
        cin >> n;
        if (n<0 || n>100){
            cout <<"Nhap lai: ";
        } 
    }while (n<0 || n>100);
}
void NhapMang(int &n, int a[]){
    for (int i=0; i<n; i++){
        cout << "a[ " << i << " ]= ";
        cin >> a[i];
        for (int j=0; j<i; j++){
            while (a[i]== a[j]){
                cout << "a[ " << i << " ]= ";
                cin >> a[i];
            }
        }
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
int SCP(int a)
{
    for(int i=0; i<a; i++){
        if(i*i==a){
            return 1;
            break;
        }
    }
    return -1;
}
void SoChinhPhuong(int n, int a[]){
    for (int i=0; i<n; i++){
        if ((SCP(a[i])==1)&&i%2!=0){
                cout << a[i];
        }
    }
}
void VTmax(int n, int a[]){
    int max=a[0];
    for (int i=1; i<n; i++ ){
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout <<"So lon nhat = " <<  max ;
}
void PhanTuDuongNhoNhat(int n, int a[]){
    int min = a[0];
    for (int i=1; i<n; i++){
        if(a[i]>0 && a[i]<min){
            min = a[i];
        }
    }
    cout << "Phan tu duong nho nhat: " << min << endl;
}
int ViTriAmDauTien(int n, int a[]){
    for (int i=0; i<n; i++) {
        if (a[i] < 0) {
            return a[i];
        }
    }
    return -1;
}

void PhanTuAmLonNhat(int n, int a[]){
    int min = ViTriAmDauTien(n,a);
    if ( min != -1) {
        for (int i=0; i<n; i++) {
            if (a[i] < 0 && a[i] > min ) {
                a[i] = min;
            }
        }    
    }
    cout << "Phan tu am lon nhat: " << min << endl;
}
int TongChan(int n, int a[]){
    int tong = 0;
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            tong = tong + a[i];
        }
    }
    return tong;
}
void Swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
void SapXep(int n, int a[]) {
    for (int i=0 ; i<n; i++) {
        for (int j=i+1 ; j<n ; j++) {
            if (a[j] < a[i]){
                swap(a[j],a[i]);
            }
        }
    }
}
int main()
{
    int n;
    NhapN(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << endl;
    SoChinhPhuong(n,a);
    cout << endl;
    VTmax(n,a);
    cout << endl;
    PhanTuDuongNhoNhat(n,a);
    PhanTuAmLonNhat(n,a);
    cout << "Tong Chan = " << TongChan(n,a) << endl;
    SapXep(n,a);
    XuatMang(n,a);
    return 0;
}