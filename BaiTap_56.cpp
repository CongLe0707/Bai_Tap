#include<iostream>
using namespace std;
struct LuanVan
{
    char MaLuanVan[10];
    char TenLuanVan[100];
    char TenThiSinh[30];
    char TenGiangVien[30];
    int NamThucHien;
};
int NhapThongTinLv(LuanVan &lv){
    cout << "Nhap ma luan van: ";
    gets(lv.MaLuanVan);
    fflush(stdin);
    cout << "Nhap Ten Luan Van: " ;
    gets(lv.TenLuanVan);
    fflush(stdin);
    cout << "Nhap ten thi sinh: ";
    gets(lv.TenThiSinh);
    fflush(stdin);
    cout << "Nhap Ten giang vien: ";
    gets(lv.TenGiangVien);
    fflush(stdin);
    cout << "Nhap Nam Thuc hien ";
    cin >> lv.NamThucHien;
}
void XuatThongTinLv(LuanVan lv){
    cout << "MA LUAN VAN: " << lv.MaLuanVan << endl;
    cout << "TEN LUAN VAN: " << lv.TenLuanVan << endl;
    cout << "TEN THI SINH: " << lv.TenThiSinh << endl;
    cout << "TEN GIANG VIEN: " << lv.TenGiangVien << endl;
    cout << "NAM THUC HIEN: " << lv.NamThucHien << endl;
}
int main()
{
    LuanVan lv;
    NhapThongTinLv(lv);
    cout << endl;
    XuatThongTinLv(lv);
    return 0;
}