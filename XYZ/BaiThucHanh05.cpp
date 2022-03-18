#include<iostream>
using namespace std;
int main ()
{             
    int a,b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int max = a;
    if (b>max) {
        max = b;
    }
    cout << "Vay so lon nhat la " << max << endl;
    int x,y,z;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;
    int MAX = x;
    if (y>MAX) {
        MAX = y;   
    }
    if (z>MAX) {
        MAX = z;
    }
    cout << "Gia tri lon nhat trong 3 so la " << MAX << endl;
    return 0;
}