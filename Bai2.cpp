#include<iostream>
using namespace std;
#include <cmath>
void Nhap_n(int &n) {   
    cout << "Nhap n ";
    cin >> n;   
}
void LietKe(int n) {
    for (int i=1;i<=n;i++) {
        if (i%2==0) {
            if (i%3!=0) {
                cout <<i<< " " ;
            }
        }
    }
}
void SoHoanHien(int n) {
    int S=0;
    for (int i=1; i<n;i++) {
        if (n%i==0) {
            S=S+i;
        }
    }
    if (S==n) {
        cout << n << " la so hoan thien " << endl;
    } else {
        cout << n << " khong phai so hoan thien " << endl;
    }
}
void Nhap_ab(int &a, int &b) {   
    cout << "Nhap a ";
    cin >> a;  
    cout << "Nhap b ";
    cin >> b;   
}

int gcd(int a, int b){
    
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
int main () 
{
    int n,a,b;
    Nhap_n(n);
    LietKe(n);
    cout << endl;
    SoHoanHien(n);
    Nhap_ab(a,b);
    int UCLN=gcd(a,b);
    cout << "Uoc chung lon nhat la " << UCLN << endl;

    return 0;
}