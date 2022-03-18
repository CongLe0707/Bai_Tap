#include<iostream>
using namespace std;
class SinhVien {
    private :
        char Ho[20];
        char Ten[20];
        int Tuoi;
        char MSSV[20];
    public:
        void ThongTin(){
            cout << "Nhap ho: ";
            fflush(stdin);
            gets(this->Ho);
            cout << "Nhap ten: ";
            fflush(stdin);
            gets(this->Ten);
            cout << "Nhap tuoi: ";
            fflush(stdin);
            cin >> this->Tuoi;
            cout << "Nhap MSSV: ";
            fflush(stdin);
            gets(this->MSSV);
        }
        void XuatThongTin(){
            cout << "--------THONG TIN SINH VIEN-----------" << endl;
            cout << "HO VA TEN: " << this->Ho << " " << this->Ten << endl;
            cout << "TUOI: " << this->Tuoi << endl;
            cout << "MSSV: " << this->MSSV << endl;
        }
};
int main() {
    SinhVien a;
    a.ThongTin();
    a.XuatThongTin();
    return 0;
}
