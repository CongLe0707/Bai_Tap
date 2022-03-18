#include<iostream>
using namespace std;
void NhapN(int &n){
    do {
        cout << "Nhap n ";
        cin >> n;
    }while (n<=0);
}
void LietKe(int n){
    cout << "Ca uoc so cua n: ";
    for (int i = 1; i<=n; i++){
        if (n%i==0){
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    NhapN(n);
    LietKe(n);
    return 0;
}