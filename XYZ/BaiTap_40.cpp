#include<iostream>
using namespace std;
void Uoc_So(int n) {
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            cout << i << " ";
        } 
     
    } 
}
int main()
{
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    Uoc_So(n);  
    return 0;
}