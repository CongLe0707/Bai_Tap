#include <iostream>
using namespace std;
#define MAXN 100000
void NhapN(int &n) {
    do {
        cout << "Nhap n = ";
        cin >> n;
    } while (n<0);
}void NhapMang(int n, int a[]){
    for (int i=0 ; i<n;i++) {
        cout << " Mang [ " << i << " ] = ";
        cin >> a[i];
    }
}
void menu() {
    cout << "1: Nhap mang " << endl;
    cout << "2: Xuat mang " << endl;
    cout << "3: Dem phan tu am " << endl;
    cout << "4: Vi tri phan tu chan " << endl;
    cout << "0: Ket Thuc " << endl;
    
}
void XuatMang (int n, int a[]) {
    cout << "Mang da nhap la ";
    for (int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
}
int DemPhanTuAm(int n, int a[]) {
    int dem=0;
    for (int i=0; i<n;i++) {
        if (a[i]<0){
            dem++;
        }
    }
    return dem;
}
void ViTrichan (int n, int a[]) {
    for (int i=0;i<n;i++) {
        if (a[i]%2==0) {
            cout << i << " " ;
        }
    }
}
int main() 
{
    int n;
    int a[MAXN];
    int chon1;
    do {
        cout << "Lua chon cua ba la " ;
        cin >> chon1;
        switch(chon1) {
            case 1: {
                NhapN(n);
                NhapMang(n,a);
                break;
            }
            case 2 :
                XuatMang(n,a);
                cout << endl;
                break;
            case 3:
                cout << "Phan tu am co trong ma la " << DemPhanTuAm(n,a);
                cout << endl;
                break;
            case 4:
                ViTrichan(n,a);
                cout << endl;
                break;
            case 0:
                cout << "Ket Thuc ";
                cout << endl;
                break;
        }          
    } while (chon1!=0);
    return 0;
}