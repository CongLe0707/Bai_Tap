#include<iostream>
#include<cmath>
using namespace std;
void NhapN(int &n){
    do{
        cout << "Nhap n ";
        cin >>  n;
    }while (n<1);
}
float Tong(int n){
    float tong = sqrt((float)2);
    for (int i=2; i<=n; i++) {
        tong = sqrt(2 + tong);
    }
    return tong;
}
int main()
{
    int n;
    NhapN(n);
    cout << "tong cang bac 2 = " <<(float)Tong(n);
    return 0;

}