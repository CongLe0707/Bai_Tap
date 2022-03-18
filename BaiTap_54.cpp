#include<iostream>
using namespace std;
struct Ngay
{
    int ngay, thang, nam;
};
struct HopSua
{
    char NhanHieu[20];
    float TrongLuong;
    Ngay NgaySanXuat;
};
void NhapNgay(Ngay &ng) {
    cout << "Nhap ngay " ; cin >> ng.ngay;
    cout << "Nhap thang "; cin >> ng.thang;
    cout << "Nhap nam "; cin >> ng.nam;
}
void XuatNgay(Ngay ng){
    cout << ng.ngay << "/" << ng.thang << "/" << ng.nam;
}
void NhapThongTin(HopSua &hs){
    fflush(stdin);
    cout << "Nhap Nhan Hieu ";
    gets(hs.NhanHieu);
    fflush(stdin);
    cout << "Nhap trong luong ";
    cin >> hs.TrongLuong;
    NhapNgay(hs.NgaySanXuat);
}
void XuatThongTin(HopSua hs){
    cout << "NHAN HIEU: " << hs.NhanHieu << endl;
    cout << "TRONG LUONG: " << hs.TrongLuong <<"kg"<< endl;
    cout << "NGAY SAN XUAT "; 
    XuatNgay(hs.NgaySanXuat);
}
int main()
{
    HopSua hs;
    NhapThongTin(hs);
    XuatThongTin(hs);
    return 0;
}