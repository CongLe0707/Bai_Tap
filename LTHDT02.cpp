#include<iostream>
using namespace std;
class SinhVien
{
private:
    char ten[30];
    char mssv[20];
    int tuoi;
    int toan, li, hoa;
public:
    void NhapThongTin() 
    {
        cout << "Nhap MSSV: " ;
        fflush(stdin);
        gets(mssv);
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
        cout << "MSSV: " << mssv << endl;
        cout << "TEN SINH VIEN: " << ten << endl;
        cout << "TUOI: " << tuoi << endl;
        cout << "DIEM TOAN: " << toan << endl;
        cout << "DIEM LI: " << li << endl;
        cout << "DIEM HOA: " << hoa << endl;

    }
};
class DanhSach : private SinhVien
{
private:
    int n;
    SinhVien ds[30];
public:
    
    void NhapDanhSach ()
    {
        
        do {
            cout << "Nhap So sinh vien ";
            cin >> n;
            if (n > 30){
                cout << "Ban da nhap qua han: ";
            }   
        } while (n > 30);
        for (int i=1; i<=n; i++){
            cout << "Nhap sinh vien thu " << i << endl;
            NhapDanhSach(ds[i]);
        }
    }
    void XuatDanhSach(){
        for (int i=1; i<=n; i++){
            cout << endl;
            XuatDanhSach(ds[i]);
    }
};
int main ()
{
    DanhSach a;
    a.NhapDanhSach();
    a.XuatDanhSach();
    return 0;
}
