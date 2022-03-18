#include<iostream>
using namespace std;
int main ()
{   
    int n,s,t=0;
    cout << "Nhap n: ";
    cin >> n;
    while (n>0) {
        s=n%10;
        t=t*10+s;
        n=n/10;
    }
    cout << "Xuat gia tri nguoc lai " << t ;

    return 0;
}