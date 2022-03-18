#include<iostream>
using namespace std;
class TuNhan
{
private:
    char ten[30];
    char toi[100];
    int truyna;
    int nam;
    char bietdanh[100];
public:
    void NhapThongTin() 
    {
        cout << "Nhap ten: " ;
        fflush(stdin);
        gets(ten);
        cout << "Nhap biet danh: "; 
        fflush(stdin);
        gets(bietdanh);
        cout << "Nhap toi ";
        fflush(stdin);
        gets(toi);
        cout << "Nhap muc truy na : "; 
        cin >> truyna;
        cout << "Nhap nam: ";
        fflush(stdin);
        cin >> nam;
        
    }
    void XuatThongTin() 
    {
        cout << "/----------------------/ " << endl;
        cout << "TEN : " << ten << endl;
        cout << "BIET DANH: " << bietdanh << endl;
        cout << "PHAM TOI: " << toi << endl;
        cout << "MUC TRUY NA " << truyna << "beli" << endl;
        cout << "O TU : " << nam << " nam" <<endl;
    }
};
class DanhSach : private TuNhan
{
private:
    int n;
public:
    void NhapDanhSach ()
    {
        
        do {
            cout << "Nhap So tu nha  ";
            cin >> n;
            if (n > 30){
                cout << "Ban da nhap qua han: ";
            }   
        } while (n > 30);
        for (int i=1; i<=n; i++){
            cout << "Nhap tu nhan thu " << i << endl;
            NhapThongTin();
        }
    }
    void XuatDanhSach(){
        for (int i=1; i<=n; i++){
            cout << endl;
            XuatThongTin();
        }
    }
};
int main ()
{
    DanhSach a;
    a.NhapDanhSach();
    a.XuatDanhSach();
    return 0;
}