#include<iostream>
using namespace std;
int main() {
    int soN;
    cout << "Nhap gia tri n ";
    cin >> soN;
    int i=1;
    float tich=1, tong=0;
    if (soN<1) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    while (i<=soN) {
        tich=tich*i;
        tong = tong+tich;
        i++;
    }
    cout << "Vay tong cua day so = " << tong << endl;

    return 0;
}