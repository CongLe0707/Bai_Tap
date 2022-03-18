#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    do {
    cout << "Nhap n: ";
    cin >> n; 
    } while (n<0||n>=10);
  
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}