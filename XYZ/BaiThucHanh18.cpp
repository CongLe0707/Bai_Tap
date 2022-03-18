#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    float s4=0;
    do {
    cout << "Nhap n: ";
    cin >> n; 
    cout << "Nhap x: ";
    cin >> x;
    } while (n<0);
  
    int i=1;
    while (i<=n) {
        s4=pow(x,i);
        i++;
    }
    cout<< "s4= "<<s4;
    return 0;
}