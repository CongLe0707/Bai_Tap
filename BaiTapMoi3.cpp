#include<iostream>
using namespace std;
struct HopBanh
{
    int ngay, thang, nam;
    char TenHopBanh[30];
    int KhoiLuong;

};
struct DANHSACH
{
    int n;
    HopBanh DanhSanh[30];
};
typedef struct DANHSACH danhsach;
void NhapThongTin (HopBanh &hb){
    fflush(stdin);
    cout << "Nhap Ten hop banh "; 
    gets(hb.TenHopBanh);
    fflush(stdin);
    cout << "Khoi luong " ; cin >> hb.KhoiLuong;
    fflush(stdin);
    cout << "Nhap Ngay " ; cin >> hb.ngay;
    fflush(stdin);
    cout << "Nhap Thang "; cin >> hb.thang;
    fflush(stdin);
    cout << "Nhap Nam: "; cin >> hb.nam;
}
void XuatThongTin(HopBanh hh){
    cout << "XUat ten hop banh " << hh.TenHopBanh << endl;
    cout << "Khoi luong " << hh.KhoiLuong << endl;
    cout << "Ngay san xuat " << hh.ngay << "/" << hh.thang << "/" << hh.nam << endl;
}
void NhapDanhSach(danhsach &ds){
    do{
        cout << "Nhap n ";
        cin >>ds.n;
        if (ds.n<=0){
            cout << "Vui long nhap lai ";
        }
    }while (ds.n<=0);
    for (int i=1; i<=ds.n; i++){
        cout << "Nhap hop banh thu " << i << endl;
        NhapThongTin(ds.DanhSanh[i]);
    }
}
void XuatDanhSach(danhsach ds){
    for (int i=1; i<=ds.n; i++){
        XuatThongTin(ds.DanhSanh[i]);
    }
}
int main()
{
    danhsach ds;
    NhapDanhSach(ds);
    XuatDanhSach(ds);
    return 0;
}