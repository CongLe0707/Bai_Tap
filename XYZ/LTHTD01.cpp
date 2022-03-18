#include <iostream>
using namespace std;
class SinhVien
{
private:
    char MSSV[20];
    char ten[30];
    int tuoi;
    int toan, li , hoa;
public:
    void NhapThongTin() 
    {
        cout << "Nhap MSSV: " ;
        fflush(stdin);
        gets(MSSV);
        cout << "Nhap ten: "; 
        fflush(stdin);
        gets(ten);
        cout << "Nhap tuoi: ";
        cin >> tuoi;
        cout << "Nhap diem toan: " ;
        cin >> toan;
        cout << "Nhap diem li: " ;
        cin >> li;
        cout << "Nhap diem hoa: " ;
        cin >> hoa;
    }
    void XuatThongTin() 
    {
        cout << "/----------------------/ " << endl;
        cout << "MSSV: " << MSSV << endl;
        cout << "TEN SINH VIEN: " << ten << endl;
        cout << "TUOI: " << tuoi << endl;
        cout << "DIEM TOAN: " << toan << endl;
        cout << "DIEM LI: " << li << endl;
        cout << "DIEM HOA: " << hoa<< endl;

    }
};
int main()
{
    SinhVien a;
    a.NhapThongTin();
    a.XuatThongTin();
    return 0;

}




