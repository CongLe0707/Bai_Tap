#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int soN ;
    int soX;
    int i=1;

    cout << "Nhap gia tri x ";
    cin >> soX;
    cout << "Nhap mu so n ";
    cin >> soN;

    float tong=0;
    float tich=1;

    while (i<=soN) {
        tich=tich*2*soX;
        tong=tong+tich;
        i++;
    }
    cout << "Vay tong cua day so = " << tong << endl;
    
    return 0;
}