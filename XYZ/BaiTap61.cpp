#include<iostream>
#include<cmath>
using namespace std;
void NHapN(int &n){
    do {
        cout << "Nhap n ";
        cin >> n;
    }while (n<1);
}
float Tong(int n){
    float tong=0;
    for (int i=1; i<=n; i++){
        tong = sqrt(i+tong);
    }
    return tong;
}z
int main()
{
    int n;
    NHapN(n);
    cout << "Tinh tong = " << (float)Tong(n);
    return 0;
}