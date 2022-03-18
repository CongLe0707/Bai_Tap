#include<iostream>
using namespace std;
struct SinhVien
{
    char ten[20];
    int nam;
    int thang;
    int ngay;
    char mssv[20];
    void NhapThongTin(){
        cout << "Nhap ten: ";
        fflush(stdin);
        gets(this->ten);
        cout << "Nhap ngay: ";
        fflush(stdin);
        cin >> this->ngay;
        cout << "Nhap thang: ";
        fflush(stdin);
        cin >> this->thang;
        cout << "Nhap nam: ";
        fflush(stdin);
        cin >> this->nam;
        cout << "Nhap mssv: ";
        fflush(stdin);
        gets(this->mssv);
    }
    void XuatThongTin(){
        cout << "Ho Va Ten: " << this->ten << endl;
        cout << "Ngay thang nam sinh: " << this->ngay <<"/" << this->thang << "/" << this->nam << endl;
        cout << "MSSV: " << this->mssv << endl;
    }
};

int main()
{
    SinhVien a;
    a.NhapThongTin();
    a.XuatThongTin();
    return 0;
}
