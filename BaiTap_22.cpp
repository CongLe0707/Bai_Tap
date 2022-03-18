#include<iostream>
using namespace std;
int main () {
    int soN;
    cout << "Nhap so n: ";
    cin >> soN;
    if (soN<=0) {
        cout << "Ban da nhap sai gia tri"<< endl ;
    }
    for (int i=1; i<=soN; i++) {
        if (soN%i==0) {
            if (i%2==1) {
                cout << i << " " << endl;
            }
        }
    }

    return 0;
}
