#include<iostream>
using namespace std;
void NhapN(int &n) {
    do {
        cout << "Nhap n = " ;
        cin >> n;
    } while (n<=0);
}
int Tong_So_Le(int n) {
    int tong=0;
    for (int i=1;i<=n;i++) {
        if (i%2!=0) {
            tong = tong + i;
        }
    }
    return tong;
}
int main () 
{
    int n;
    NhapN(n);
    cout << "Vay tong so le " << Tong_So_Le(n);
    return 0;
}