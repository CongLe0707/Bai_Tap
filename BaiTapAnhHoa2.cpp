#include<iostream>
using namespace std;
struct SinhVien {
    int ngay;
    int thang;
    int nam;
    int tuoi;
    char gioiTinh[4];
    char hoTen[100];
    void NhapThongTin(){
        fflush(stdin);
        cout << "Nhap tuoi "; cin >> this->tuoi;
        fflush(stdin);
        cout << "Nhap ten ";
        gets(this->hoTen);
        fflush(stdin);
        cout << "Nhap gioi tinh ";
        gets(this->gioiTinh);
        cout <<"Nhap ngay "; cin >> this->ngay;
        fflush(stdin);
        cout <<"Nhap thang "; cin >> this->thang;
        fflush(stdin);
        cout << "Nhap Nam: "; cin >> this->nam;
    }
    void XuatThongTin(){
        cout << "TUOI " << this->tuoi << endl;
        cout << "HO VA TEN " << this->hoTen << endl;
        cout << "GIOI TINH " << this->gioiTinh << endl;
        cout << this->ngay << "/" << this->thang << "/" << this->nam;
    }
};
int main ()
{
    SinhVien sv;
    sv.NhapThongTin();
    sv.XuatThongTin();
    return 0;
}