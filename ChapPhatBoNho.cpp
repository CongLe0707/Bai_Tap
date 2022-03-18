#include<iostream>
using namespace std;
void NhapMang (int &n, int *p){
    for (int i=0; i<n; i++) {
        cout << "a[ " << i << " ]= " ;
        cin >> *(p+i);
    }
}
void XuatMang(int n, int *p)
{
    for (int i=0; i<n; i++){
        cout << *(p+i) << " ";
    }
}

int main()
{
    int *p;
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n<=0){
            cout << "Nhap lai: " << endl;
        }
    } while (n<=0);
    
    p = new int [n];
    NhapMang (n,p);
    XuatMang(n,p);
    return 0;
}