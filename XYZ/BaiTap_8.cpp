#include<iostream>
using namespace std;
int main() {
    int soN;
    cout << "Nhap gia tri n ";
    cin >> soN;
    int i=1;
    float tong=0;
    
    if (soN<1) {
        cout << "Ban da nhap sai gia tri";
        return 0;
    }
    while (i<=soN) {
        tong = tong+(float)(2*i+1)/(2*i+2);
        i++;
    }
    cout << "Vay tong cac so = "<< tong << endl;

    return 1;
}