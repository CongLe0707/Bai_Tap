#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
int main ()
{   float s;
    int LuaChon;
    cout << "Lua chon de tinh dien tich ";
    cin >> LuaChon;
    int a,b;
    switch (LuaChon)
    {
        case 1:
            cout << "Nhap a: ";
            cin >> a;
            s = a*a;
            cout << "Dien tich hinh vuong = " << s << endl;
        break;
        case 2:
            int r;
            cout << "Nhap r: ";
            cin >> r;
            s=r*r*PI;
            cout <<"Dien tich hinh tron = " << s << endl;
        break;
        case 3:
            cout << "Nhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;      
            s=a*b;
            cout << "Dien tich hinh chu nhat = " << s << endl;
        break ;
    default:
        break;
    }
    return 0;
}