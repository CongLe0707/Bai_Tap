// Nhập 4 số nguyên a,b,c,d vào và sắp xếp theo thứ tự tăng dần
#include<iostream>
using namespace std;
int main() 
{
    int a,b,c,d;
    int bientam;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    cout << "Nhap d: ";
    cin >> d;
    if (a>b) {
        bientam=a;
        a=b;
        b=bientam;
    }
    if (a>c) {
        bientam=a;
        a=c;
        c=bientam;
    }
    if (a>d) {
        bientam=a;
        a=d;
        c=bientam;
    }
     if (b>c) {
        bientam=b;
        b=c;
        c=bientam;
    }
    if (b>d) {
        bientam=b;
        b=d;
        d=bientam;
    }
    if (c>d) {
        bientam=c;
        c=d;
        d=bientam;
    }
    cout << "Sap xep theo thu tu "<< a << " " << b << " " << c << " " << d << endl;
    return 0;
}