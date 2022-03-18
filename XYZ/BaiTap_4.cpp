#include <iostream>
using namespace std;
int main() {
    int soN;
    cout << "Nhap gia tri n ";
    cin >> soN;
    int i=1;
    float tong=0;

    if (soN<1) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    while (i<= soN) {
        tong=  tong+ 1.0/(2*i);
        i++;
    }
    cout << "Vay tong cua cac so = " << tong << endl;
    
    return 0;
}