#include<iostream>
using namespace std;
int main() {
    int soN;
    cout << "Nhap so n: ";
    cin >> soN;
    if (soN<=0) {
        cout << "Ban da nhap sai gia tri";
    }
    float tichUocSo=1;
    for (int i=1;i<=soN;i++) {
        if (soN%i==0) {
            cout << i << " " << endl;
            tichUocSo=tichUocSo*i;
        }
    }
    cout << "Vay tong cac uoc so = " << tichUocSo << endl;
    
    return 0;
}

