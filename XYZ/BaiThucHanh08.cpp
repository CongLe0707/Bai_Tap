#include<iostream>
using namespace std;
int main () 
{
    float a,b;
    cout << "Nhap a: ";
    cin >> a ;
    cout << "Nhap b: ";
    cin >> b ;
    if (a==0) {
        if (b==0) {
            cout <<"Phuong trinh vo so nghiem ";
            return 0;
        } else {
            cout << "Phuong trinh vo nghiem" ;
            return 0;
        }

    } else {
        cout << "Phuong trinh co nghiem  x = " <<-b/a;
        }
    }
    return 0;
}