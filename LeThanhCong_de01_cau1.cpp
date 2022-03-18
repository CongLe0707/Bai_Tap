#include <iostream>
#include <cmath>
using namespace std;
void Nhap_N(int &n){
    do {
        cout << "Nhap so nguyen n ";
        cin >> n;
    } while (n<99);
}
int nt(int n)
{
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
void KiemTraSNT (int n) {
    if (n<2) {
        cout << n << " khong phai so nguyen to\n";
    }
    int diem = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0){
            diem++;
        }
    } 
    if (diem==0) {
        cout << n <<" la so nguyen to\n";
    } else {
    cout << n <<" khong phai so nguyen to\n ";
    }
}
int main() 
{
    int n;
    Nhap_N(n);
    int so3 = n/100;
    int so2 = ((n%100)/10);
    int so1 = (n%10);
    cout << "So 1 = " << so1 << endl;
    cout << "So 2 = " << so2 << endl;
    cout << "So 3 = " << so3 << endl;
    KiemTraSNT(n);
    return 0;
}