#include<iostream>
#include<cmath>
using namespace std;
void Nhap_N (int &n) {
    cout << "Nhap n ";
    cin >> n;
}
int nt(int n)
{
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
int diemSNT(int n) {
    int diem = 0;
    for (int i = 0; i <= n; i++) {
        if (nt(i) == 1)
            diem++;
    }
    return diem;
}
void KietKe(int n) {
    for (int i = 2; i <= n; i++) {
        if (nt(i) == 1) {
            int max = nt(i);
            if 
            cout <<i<< " ";
        }
    }

}
int main() 
{   int n;
    Nhap_N(n);
    int diem = diemSNT(n);
    cout << "So luong SNT la " << diem ;
    SNT(n);
    return 0;
}