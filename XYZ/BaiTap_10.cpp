#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,x;
    float t;
    cout << "Nhap vao co so mu x ";
    cin >> x;
    cout << "Nhap mu so n ";
    cin >> n;
    t=pow(x,n);
    cout << "Vay "<< x << "^"<< n << "=" << t << endl;   
    return 0;
}