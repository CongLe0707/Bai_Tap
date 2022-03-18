#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int soN, i;
    float tong, tich;
    cout << " Nhap gia tri n: ";
    cin >> soN;
    tong = 1;
    tich=0;
    i=1;
    while (i<=soN) {
        tong = tong+i;
        tich = tich + 1.0/tong ;
        i++;
    }
    cout << "Vay tong gia tri = " << tong << endl;

    return 0;
}