#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Nhap n ";
    cin >> n;
    int diem=0;
    int tam=n;
    if (n==0) {
        diem=0;
    }
    while (tam!=0) {
        diem+=1;
        tam=tam/10;
    }
    cout << "So chu so cua n la " << diem << endl;
    return 0;

}