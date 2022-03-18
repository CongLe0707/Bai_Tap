#include<iostream>
#include<cmath>
using namespace std;
int main ()
{   
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int diem=0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            diem++;     
    }
    cout << "so luong so nguyen to nho hon or ban n : " << diem ;
    return 0;
}