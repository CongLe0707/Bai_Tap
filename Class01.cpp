#include<iostream>
using namespace std;
class Nguoi
{
    protected:
    char ten[30];
    int tuoi;
};
class HocSinh: public Nguoi
{
    int ngay;
    int thang;
    int nam;
    int toan;
    int li;
    int hoa;
    public:
    void NhapThongTin(){
        cout << "Nhap Ten: " ;
        fflush(stdin);
        gets(this->ten);
        cout << "Nhap tuoi: ";
        fflush(stdin);
        cin >> this->tuoi;
        cout << "Nhap ngay sinh: ";
        fflush(stdin);
        cin >> this->ngay;
        cout << "Nhap thang sinh: ";
        fflush(stdin);
        cin >> this->thang;
        cout << "Nhap nam sinh : ";
        fflush(stdin);
        cin >> this->nam;
        fflush(stdin);
        do {
            cout << "Nhap diem toan: ";
            cin >> this->toan;
            cout << "Nhap diem ly: " ;
            cin >> this->li;
            cout << "Nhap diem hoa: ";
            cin >> this->hoa;
            if (this->hoa < 0 || this->li < 0 || this->toan < 0)
            {
                cout << "Nhap lai diem: " << endl;
            }
        } while (this->hoa < 0 || this->li < 0 || this->toan < 0);
    }
    void XuatThongTin(){
        cout << "HO VA TEN: " << this->ten << endl;
        cout << "NGAY THANG NAM SINH: " << this->ngay << "/" << this->thang << "/" << this->nam << endl;
        cout << "DIEM TOAN: " << this->toan << "\tDIEM HOA: " << this->hoa << "\tDIEM LY: " << this->li << endl;
    }
    void DiemTBMon(){
        int TBM;
        TBM = (this->toan + this->hoa + this->li)/3;
        if (TBM > 5) {
            cout << "LEN LOP THANG: " << endl;
        } else {
            cout << "THI LAI: " << endl;
        }
    }
    void DiemDauDaiHoc (){
        int tong=this->toan + this->hoa + this->li;
        cout << "TONG DIEM = " << tong << endl;
        if (tong > 20) {
            cout << "BAN DA DAU VAO TRUONG DAI HOC HUTECH, XIN CHUC MUNG !!!! ";
        } else{
            cout << "BAN DA ROT DAI HOC, XIN CHIA BUON: ";
        }
    }
};
int main()
{
    HocSinh a;
    a.NhapThongTin();
    a.XuatThongTin();
    a.DiemTBMon();
    a.DiemDauDaiHoc();
    return 0;
}
