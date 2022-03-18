#include<iostream>
using namespace std;
int main()
{   
    float a, b;
    cout << "Moi ban nhap gia tri a = ";
    cin >> a;
    cout << "Moi ban nhap gia tri b = ";
    cin >> b;
    if (a*b>0) {
        cout << "a va b cung dau ";
    } else  {
        cout << "a va b trai dau";
    }
    return 0;
}