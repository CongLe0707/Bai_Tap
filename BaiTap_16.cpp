#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int soN, soX;
    int i=1;
    float mauSo=0;
    float tong=0;
    float tich=1;
    cout << "Nhap so n: ";
    cin >> soN;
    cout << "Nhap so x: ";
    cin >>soX;
     
    if (soN<1) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    while (i<=soN) {
        tich =tich*soX;
        mauSo = mauSo+i;
        tong = tong + tich/mauSo;
        i++;
    }
    cout << "Vay tong cua ban = " << tong << endl;
  
    return 0;
}
