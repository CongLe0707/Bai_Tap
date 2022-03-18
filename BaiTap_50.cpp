#include<iostream>
using namespace std;
struct Ngay
{
    int ngay,thang,nam;
};
struct CauThu
{
    char macauthu[20];
    char Tencauthu[30];
    Ngay ngaysinh;
};
void NhapNgay(Ngay &ng){
    cout << "NHAP NGAY SINH "; cin >> ng.ngay;
    cout << "NHAP THANG SINH "; cin >> ng.thang;
    cout << "NHAP NAM SINH "; cin >> ng.nam;
}
void XuatNgay(Ngay ng){
    cout << ng.ngay << "/" << ng.thang << "/" << ng.nam <<endl;
}
void NhapThongTin (CauThu &ct){
    fflush(stdin);
    cout << "NHAP MA CAU THU: ";
    gets(ct.macauthu);
    fflush(stdin);
    cout << "NHAP TEN CAU THU: ";
    gets (ct.Tencauthu);
    fflush(stdin);
    NhapNgay(ct.ngaysinh);
}
void XuatThongTin(CauThu ct){
    cout << "MA THU LA: " << ct.macauthu;
    cout << "\nTEN CAU THU LA: " << ct.Tencauthu << endl;
    cout << "NGAY THANG NAM SINH LA: "
    XuatNgay(ct.ngaysinh);
}

int main()
{
    CauThu ct;
    NhapThongTin(ct);
    XuatThongTin(ct);
    return 0;

}