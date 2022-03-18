#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    if (n<=0) {
        cout <<"Ban da nhap sai gia tri ";
        return 0;
    }
    int S=0;
    for (int i=1; i<n;i++) {
        if (n%i==0) {
            S=S+i;
        }
    }
    if (S==n) {
        cout << n << " la so hoan thien " << endl;
    } else {
        cout << n << " khong phai so hoan thien " << endl;
    }
    return 0;
}