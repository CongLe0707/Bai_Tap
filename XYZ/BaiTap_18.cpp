#include<iostream>
using namespace std;
int main() 
{
    int soN;
    cout << "Nhap so n: ";
    cin >> soN;
    if (soN<=0) {
        cout << "Ban da nhap sai gia tri ";       
    }
    for (int i=1; i<=soN;i++) {
        if (soN%i==0) {
            cout  << i << " " << endl;
        }
    }
    return 0;
}
