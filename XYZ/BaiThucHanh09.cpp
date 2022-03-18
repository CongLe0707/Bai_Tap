#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    float delta,x1,x2,xk;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a==0) {
        if (b==0) {
            if (c==0) {
                cout << "PT vo so ngkiem";
                return 0;
            
            }
            else {
                cout << "PT vo nghiem";
                return 0;
            }
        }
        else {
            cout << "Phuong trinh co nghiem x = " << -c/b;
            return 0;
        }
    }              
    else {
        delta = (b*b)-4*a*c;
        if (delta<0) {
            cout << "Phuong trinh vo nghiem ";
    }   else {
            if ( delta==0 ) {
                xk = -b/(2*a);
                cout << "Phuong trinh co nghiem kep " << xk;
        }   else {
                x1= (-b + sqrt( delta ) ) / ( 2*a ) ;
                x2 = (-b - sqrt( delta ) ) / ( 2*a ) ; 
                cout << "Phuong trinh co nghiem x1 = " << x1 <<endl;
                cout << "Phuong trinh co nghiem x2 = " << x2 <<endl;
        } 
    }
    }
    return 0;
}