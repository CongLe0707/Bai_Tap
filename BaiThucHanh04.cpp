#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
int main ()
{             
    float s,c,r;
    cout << "Nhap ban kinh  r: ";
    cin >> r;
    c=2*r*PI;
    s=r*r*PI;
    cout <<"Chu vi hinh tron = " << c << endl;
    cout <<"Dien tich hinh tron = " << s << endl;
    return 0;
}