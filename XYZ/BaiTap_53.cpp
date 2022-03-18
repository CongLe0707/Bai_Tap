#include<iostream>
using namespace std;
struct SoPhuc 
{
    int PhanThuc,PhanAo;
};
void NhapSoPhuc(SoPhuc &sp){
    cout << "Nhap Phan Thuc: " ; cin >> sp.PhanThuc;
    cout << "Nhap Phan ao: "; cin >> sp.PhanAo;
}
void XuatSoPhuc(SoPhuc sp){
    cout << "z=" << sp.PhanThuc << "+" << sp.PhanAo << "i";
}
SoPhuc TongSoPhuc (SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.PhanThuc = a.PhanThuc + b.PhanThuc;
    c.PhanAo = a.PhanAo + b.PhanAo ;
    return c;
}
SoPhuc HieuSoPhuc (SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.PhanThuc = a.PhanThuc - b.PhanThuc;
    c.PhanAo = a.PhanAo - b.PhanAo;
    return c;
}
SoPhuc TichSoPhuc(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.PhanThuc = a.PhanThuc * b.PhanThuc - a.PhanAo * b.PhanAo;
    c.PhanAo = a.PhanThuc * b.PhanAo + a.PhanAo * b.PhanThuc;
    return c;
}
SoPhuc ThuongSoPhuc(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.PhanThuc = (a.PhanThuc * b.PhanThuc + a.PhanAo * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);    
    c.PhanAo = (b.PhanThuc * a.PhanAo - b.PhanAo * a.PhanThuc) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
    return c;
}
SoPhuc SoPhucLienHop(SoPhuc a){
    a.PhanThuc=-a.PhanThuc;
    return a;
}
int main ()
{
    SoPhuc a,b;
    NhapSoPhuc(a);
    XuatSoPhuc(a);
    cout << endl;
    NhapSoPhuc(b);
    XuatSoPhuc(b);
    SoPhuc tong = TongSoPhuc(a,b);
    SoPhuc hieu = HieuSoPhuc (a,b);
    SoPhuc Thuong = ThuongSoPhuc(a,b);
    SoPhuc tich = TichSoPhuc(a,b);
    SoPhuc LienHop = SoPhucLienHop(a);
    SoPhuc LienHop2 = SoPhucLienHop(b);
    cout << "\nTong 2 so phuc  " ;
    XuatSoPhuc(tong);
    cout << "\nHieu 2 so phuc  " ;
    XuatSoPhuc(hieu);
    cout << "\nTich 2 so phuc  " ;
    XuatSoPhuc(tich);
    cout << "\nThuong 2 so phuc  " ;
    XuatSoPhuc(Thuong);
    cout << "\nSo Phuc lien hop cua a " ;
    XuatSoPhuc(LienHop);
    cout << "\nSo Phuc lien hop cua b " ;
    XuatSoPhuc(LienHop2);
    return 0;
} 
