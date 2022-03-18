#include<iostream>
using namespace std;
void NhapN(int &n){
    do{
        cout << "Nhap n: ";
        cin >> n;
    }while (n<=0);
}
void tongUs(int n){
    int tong=0;
    for (int i=1; i<=n; i++){
        if (n%i==0){
            cout << i << " ";
            tong = tong + i;
        }
    }
    cout << "\nTong cac uoc so = " << tong ;
}
int main()
{   
    int n;
    NhapN(n);
    tongUs(n);
    return 0;
}
