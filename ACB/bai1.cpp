#include<iostream>
using namespace std;
#include <cmath>
void Nhap_n(int &n) {
    do {
        cout << "Nhap n ";
        cin >> n;
    } while (n<0 || n>100);
}
int nt(int n)
{
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
void KiemTraSNT (int n) {
    if (n<2) {
        cout << n << " khong phai so nguyen to\n";
    }
    int diem = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0){
            diem++;
        }
    } 
    if (diem==0) {
        cout <<"n la so nguyen to\n";
    } else {
    cout <<"n khong phai so nguyen to\n ";
    }
}
void KietKe(int n) {
    for (int i = 2; i <= n; i++) {
        if (nt(i) == 1) {
            cout <<i<< " ";
        }
    }
}
float Tinh_Tong(int n) {
    int tong=0;
    for (int i = 2; i <= n; i++) {
        if (nt(i) == 1) {
            tong=tong+i;
        }
    }
    return tong;
}
float diemSNT(int n) {
    int diem = 0;
    for (int i = 0; i <= n; i++) {
        if (nt(i) == 1)
            diem++;
    }
    return diem;
}
int main()
{
    int n;
    Nhap_n(n);
    KiemTraSNT(n);
    KietKe(n);
    cout << endl;
    float tong=Tinh_Tong(n);
    cout << "Vay tong cac so nguyen to la " << tong << endl;
    float Diem = diemSNT(n);
    float TBC = tong/Diem;
    cout << "Tbc cua snt la " <<(float)TBC << endl;
    
    return 0;
}