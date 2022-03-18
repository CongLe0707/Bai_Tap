#include<iostream>
using namespace std;
int main() {
    int soN ;
    cout << "Nhap gia tri n: ";
    cin >> soN;
    int i=1;
    int sum=0;

    while (i<=soN) {
        sum = sum + i;
        i++;
    }
    cout << "Vay tong cach so = " << sum << endl;

     return 0;
}

