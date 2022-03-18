#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    do {
    cout << "Nhap n: ";
    cin >> n; 
    } while (n<0||n>=100);
    int diem=0, tong=0;
     for(int i =1; i<=n; i++) {
        if (n%i==0) {
            diem++;
        }
    }
    if (diem==2) {
        cout << n <<" la so nguyen to "<< endl;
    } else {
        cout <<n<<" khong phai so nguyen to "<< endl;
    }
    for (int i=1; i<n;i++) {
        if (n%i==0) {
            tong=tong+i;
        }
    }
    if (tong==n) {
        cout << n << " la so hoan thien " << endl;
    } else {
        cout << n << " khong phai so hoan thien " << endl;
    }
    return 0;
}