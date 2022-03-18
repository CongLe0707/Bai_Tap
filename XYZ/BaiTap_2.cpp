#include<iostream>
using namespace std;
int main() {
    int soN;
    cout << " Nhap gia tri n ";
    cin >> soN;
    int i=1;
    int tong = 0;

    while (i<=soN){
        tong = tong +i*i;
        i++;
    }
    cout << " Vay tong cach so = " << tong << endl;

     return 0;
}
