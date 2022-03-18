// nhập a,b,c,d có bao nhiu số khác nhau
#include<iostream>
using namespace std;
int main() 
{
    int a,b,c,d;
    int diem=1;
    cout << "Nhap a : ";
    cin >> a;
    cout << "Nhap b : ";
    cin >> b;
    cout << "Nhap c : ";
    cin >> c;
    cout << "Nhap d : ";
    cin >> d;
    if (a!=b && a!=c && a!=d ) diem++;
    if (b!=c && b!=d) diem++;
    if (c!=d ) diem++;
    if ( a==b && a==c && a==d) {
        cout << "Khong co gia tri khac nhau " ;
        return 0;
    }
    cout << "So luong so khac nhau la " << diem;
    return 0;
}