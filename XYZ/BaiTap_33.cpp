#include<iostream>
using namespace std;
int main()
{   int n;
    do {
    cout << "Nhap gia tri n ";
    cin >> n;
    } while(n<=0);
    int tong=0;
    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            tong=tong+i;
        }
    }
    cout << "Vay tong cac so chan trong chu so n = " << tong << endl;
    return 0;
}