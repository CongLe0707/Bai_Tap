#include<iostream>
using namespace std;
int main() {
    int soN;
    cout << "Nhap so n ";
    cin >> soN;
    int i=1;
    int tich=1;

    if (soN<1) {
        cout << "Ban da nhap sai gia tri";
        return 0;     
    }
    while (i<=soN) {
        tich=tich*i;
        i++;
    }
    cout << "Vay tich cua cac so = " << tich << endl;

    return 1;
}