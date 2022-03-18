#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cout << "Nhap vao so nguyen N: ";
    cin >> N;
    if (N<=0) {
        cout << "Ban da nhap sai gia tri";
        return 0;
    }
    if (N<2) {
        cout << N << " khong phai so nguyen to\n";
        return 0;
    }
    int BienTam = 0;
    for(int i = 2; i <= sqrt(N); i++) {
        if(N % i == 0){
            cout <<i;
        }
    }

    return 1;
}