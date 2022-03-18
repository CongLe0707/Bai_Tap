#include<iostream>
using namespace std;
int main () 
{
    int n;
    do {
    cout << "Nhap n : ";
    cin >> n ;
    } while (n<=0);
    float tong = 1;
    int i=1;
    while (n>=i) {
        tong = tong + (float)1/((2*i)+1);
        i++;
    }
    cout << "Tong s = " << tong << endl;
    return 0;
}