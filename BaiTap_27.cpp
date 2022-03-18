#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap gia tri n: ";
    cin >>n;
    if (n<=0) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    int tong =0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            tong = tong + i;
        }
    }
    cout << tong;
    return 0;
}