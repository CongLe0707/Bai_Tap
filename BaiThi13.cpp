#include<iostream>
#include<cmath>
using namespace std;
void Nhap_n(int &n) {
    do {
    cout << "Nhap n ";
    cin >> n;
    } while (n<=0);
}
// câu a
int s1(int n) {
    int s1=0;
    for (int i=1; i<=n; i++) {
        s1 = s1 + pow(i,2);
    }
    return s1;
} // câu b
int s2(int n) {
    int s2=0, tich =1;
    for (int i = 1; i<=n; i++) {
        tich = tich*i;
        s2 = s2 + tich;
    }
    return s2;
} // câu c
int t3(int n ) {
    int tich=1;
    for (int i=n; i<=2*n; i++) {
        tich = tich*i;
    }
    return tich;
}
int s3(int n) {
    int s3=0;
    for (int i =1 ; i<=n ; i++) {      
        s3 = s3 + t3(i);
    }
    return s3;
}
int main () 
{
    int n;
    Nhap_n(n);
    int tong1=s1(n);
    cout << "s1 = " << tong1 << endl;
    int tong2=s2(n);
    cout << "s2 = " << tong2 << endl;
    int tong3=s3(n);
    cout << "s3 = " << tong3 << endl;
    return 0;

}