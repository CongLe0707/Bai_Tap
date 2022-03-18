#include<iostream>
using namespace std;
struct Gio
{
    int gio, phut, giay;
};
struct Ngay
{
    int ngay, thang , nam;
};
struct ChuyenBay
{
    char ma[5], noidi[20], noiden[20];
    Ngay ngayBay;
    Gio GioBay;
};
void NhapGio(Gio &g){
    cout << "Nhap gio " ; cin >> g.gio;
    cout << "Nhap phut "; cin >> g.phut;
    cout << "Nhap giay "; cin >> g.giay;
}
void XuatGio(Gio g) {
    cout << g.gio << "h " <<g.phut << "p " << g.giay << "s" << endl;
} 
void NhapNgay(Ngay &ng){
    cout << "Nhap ngay " ; cin >> ng.ngay;
    cout << "Nhap thang "; cin >> ng.thang;
    cout << "Nhap nam "; cin >> ng.nam;
}
void XuatNgay(Ngay n){
    cout << n.ngay << "/" << n.thang << "/" << n.nam << endl;
}
void NhapChuyenBay(ChuyenBay &cb){
    fflush(stdin);
    cout << "Nhap ma chuyen bay ";
    gets(cb.ma);
    fflush(stdin);
    cout << "Nhap noi di ";
    gets(cb.noidi);
    fflush(stdin);
    cout << "Nhap Noi den ";
    gets(cb.noiden);
    fflush(stdin);
    cout << "Nhap ngay bay " ;
    NhapNgay(cb.ngayBay);
    fflush(stdin);
    cout << "\nNhap gio bay ";
    NhapGio(cb.GioBay);
}
void XuatChuyenBay(ChuyenBay cb){
    cout << "Ma chuyen bay " << cb.ma << endl;
    cout << "\nNoi di la " << cb.noidi << endl;
    cout << "Noi den la  " << cb.noiden << endl;
    cout << "Ngay bay la  " ;
    XuatNgay(cb.ngayBay) ;
    cout << "\nGio bay la ";
    XuatGio(cb.GioBay);
}
int main ()
{
    ChuyenBay cb;
    NhapChuyenBay(cb);
    cout << endl;
    XuatChuyenBay(cb);
    return 0;
}