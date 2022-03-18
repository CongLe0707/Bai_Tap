#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int soN ;
    int soX;
    int i=0;

    cout << "Nhap gia tri x ";
    cin >> soX;
    cout << "Nhap mu so n ";
    cin >> soN;

    float tong=0;
    float tich=1;
    
    while (i<soN) {
        tich = pow (soX, (2*i+1));
        tong = tong + tich;
        i++;
    }
    cout << "Vay tong cua day so = " << tong << endl;
    
    return 0;
}