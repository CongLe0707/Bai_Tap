#include<iostream>
using namespace std;
int main () 
{ 
    int a;
    float b;
    char c ;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;
    cout << "Nhap c :";
    cin >> c ;
    float tong = a+b;
    float hieu = a-b;
    float tich = a*b;
    float thuong = a/b;
    cout << "Xuat a = " << a << endl;
    cout << "Xuat b = " << b << endl;
    cout << "Xuat c = " << c << endl;
    cout << "Tong 2 so a + b = " << tong << endl;
    cout << "Tong 2 so a - b = " << hieu << endl;
    cout << "Tong 2 so a * b = " << tich << endl;
    cout << "Tong 2 so a / b = " << thuong << endl;
    return 0;

}