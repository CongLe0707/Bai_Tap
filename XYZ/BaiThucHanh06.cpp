#include<iostream>
#include<cmath>
using namespace std;
int main ()
{             
    float a,b,c; 
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    float S, CV ,p ;
    if (a+b>c && a+c>b && c+b>a) {
        CV = a+b+c;
        p = CV/2;
        S= sqrt(p*(p*a)-(p*b)-(p*c));
    } else {
        cout << "ABC khong phai tam giac " <<endl;
        return 0;
    }
    cout << "Chu vi tam giac = " << CV << endl;
    cout << "Dien tich tam giac = " << S << endl;
    return 0;
}