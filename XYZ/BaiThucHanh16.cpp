#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout << "Nhap k: ";
    cin >> k;
    do {
    cout << "Nhap n: ";
    cin >> n;
    } while (n<0 || n>=10) ;
    for (int i=1;i<=n;i++) {
        for(int j =1; j<=k;j++) {
            cout <<"*";
            
        }
        cout <<"\n";      
    }
    return 0;
}