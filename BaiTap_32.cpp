#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    if (n<=0) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    int tong=0;
    for (int i=1; i<=n; i++) {
        if (i%2!=0) {
            tong = tong+i;
        }
    }
    cout << "Vay tong cac chu so n le = " << tong << endl;
    return 0;
}