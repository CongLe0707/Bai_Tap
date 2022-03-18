#include<iostream>
using namespace std;
int main ()
{   
    int n; 
    cout << "nhap n:";
    cin >> n;
    int diem=0;
    for (int i=1; i<=n;i++) {
        if (n%i==0) {
            diem++;
        }      
    }
    cout << diem ;
    return 0;
}