#include<iostream>
using namespace std;
int Tong(int n) {
    int tong=0;
    for (int i=1;i<=n;i++) {
        tong=tong+i;
    }
    return tong;
}
int main()
{
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    int tong = Tong(n);
    cout << "Gia tri tong cac chu so n = " << tong << endl;
    
    return 0;
}
