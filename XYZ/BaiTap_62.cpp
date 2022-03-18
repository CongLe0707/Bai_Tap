#include<iostream>
using namespace std;
struct LuanVan
{
   char MaLuanVan[20];
   char TenSinhVien[30];
   int nam;
   int TenLuanVan[100];
   void NhapThongTin(){
       fflush(stdin);
       cout << "Nhap ma luan van ";
       gets( this->MaLuanVan);
       fflush(stdin);
       cout << "Nhap ten sinh vien ";
       gets(this->TenSinhVien);
       fflush(stdin);
       cout << "Nhap ten luan van ";
       gets(this->TenLuanVan);
       fflush(stdin);
       cout << "Nhap nam ";
       cin >> this->nam;
   }
   void XuatThongTin(){
       cout <<"MA LUAN VAN LA: "<< this->MaLuanVan << endl;
       cout <<"TEN SINH VIEN: "<< this->TenSinhVien << endl;
       cout <<"TEN LUAN VAN : "<< this->TenLuanVan << endl;
       cout <<"NAM THUC HIEN: "<< this->nam << endl;
   }
};

int main()
{
    LuanVan lv;
    lv.NhapThongTin();
    lv.XuatThongTin();
    return 0;
}