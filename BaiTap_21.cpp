#include<iostream>
using namespace std;
int main() {
    int soN;
    int DiemUocSo=0;
    cout << "Nhap gia tri n: ";
    cin >> soN;
    if (soN<=0) {
        cout << "Ban da nhap sai gia tri";
        return 0;
    }
    for (int i=1 ; i<=soN; i++) { 
        if (soN%i==0){
            cout << i << " " << endl;
            DiemUocSo++;
        }
    }
    cout << "Vay uoc so co " << DiemUocSo << " so" << endl;

    return 1;
}