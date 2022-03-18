#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
void NhapMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << "a[ " << i << " ]= ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
void SapXep(int n, int  a[]){
    for(int i=1; i<n; i++){
        int x=a[i], pos = i-1;
        while (pos>=0 && x<a[pos]){
            a[pos+1]=a[pos];
            --pos;
        }
        a[pos+1] =x;
    }
}
int main()
{
    int n;
    do {
        cout << "Nhap n ";
        cin >> n;

    }while (n<=0);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << endl;
    SapXep(n,a);
    XuatMang(n,a);
    return 0;
}