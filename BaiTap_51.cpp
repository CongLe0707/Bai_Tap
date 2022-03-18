#include<iostream>
using namespace std;
struct NhanVien
{
    char MaNhanVien[5];
    char TenNhanVien[30];
    float Luong;
};
void NhapThongTin(NhanVien &nv){
    fflush(stdin);
    cout << "NHAP MA NHAN VIEN: ";
    gets(nv.MaNhanVien);
    fflush(stdin);
    cout << "NHAP TEN NHAN VIEN: ";
    gets(nv.TenNhanVien);
    fflush(stdin);
    cout << "NHAP LUONG ";
    cin >> nv.Luong;
}
void XuatThongTin(NhanVien nv){
    cout << "MA NHAN VIEN LA: " << nv.MaNhanVien << endl;
    cout << "TEN NHAN VIEN LA: " << nv.TenNhanVien << endl;
    cout << "Luong la " << nv.Luong << "VND";
}
int main ()
{
    NhanVien nv;
    NhapThongTin(nv);
    XuatThongTin(nv);
    return 0;
}