#include <iostream>
using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
void NhapPhanSO(PhanSo &x){
    do{
    cout << "Nhap Tu so ";
    cin >> x.tu;
    cout << "Nhap Mau So ";
    cin >> x.mau;
    if (x.mau==0){
        cout << "Nhap lai" << endl;
    }
    }while (x.mau==0);
    
}
void XuatPhanSo (PhanSo x){
    cout << x.tu << "/" << x.mau << endl;
}
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void rutgon(PhanSo &ps)
{
	int c=UCLN(ps.tu,ps.mau);
	ps.tu=ps.tu/c;
	ps.mau=ps.mau/c;
}

int main()
{
    PhanSo x1,x2;
    NhapPhanSO(x1);
    NhapPhanSO(x2);
    XuatPhanSo(x1);
    XuatPhanSo (x2);
    PhanSo x3 = TongPS(x1,x2);
    XuatPhanSo (x3);
    cout << rutgon(x3);
    XuatPhanSo(x3);
    return 0;
} 