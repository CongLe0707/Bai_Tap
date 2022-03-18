#include<iostream>
#include<cstring>
using namespace std;
const int max=30;
struct Ngay
{
    int ngay, thang, nam;
};
typedef struct Ngay NGAY;
struct CAUTHU
{
    char MaCauThu[6];
    char TenCauThu[30];
    NGAY NgaySinh;
};
typedef struct CAUTHU CauThu;
struct DOIBONG
{
    char MaDoiBong[10];
    char TenDoiBong[40];
    int n;
    CauThu DanhSachCauThu[30];

};
typedef struct DOIBONG DoiBong;
void NhapNgay(NGAY &ng){
    cout << "Nhap ngay " ; cin >> ng.ngay;
    cout << "Nhap thang " ; cin >> ng.thang;
    cout << "Nhap nam " ; cin >> ng.nam;
}
void XuatNgay(NGAY ng){
    cout << ng.ngay << "/" << ng.thang << "/" << ng.nam;
}
void NhapCauThu(CauThu &ct){
    fflush(stdin);
    cout << "Nhap ma cau thu ";
    gets(ct.MaCauThu);
    fflush(stdin);
    cout << "Nhap ten cau thu ";
    gets(ct.TenCauThu);
    fflush(stdin);
    NhapNgay(ct.NgaySinh);
}
void XuatCauThu(CauThu ct){
    cout << "Ma cau thu: " << ct.MaCauThu << endl;
    cout << "Ten cau thu: " << ct.TenCauThu << endl;
    cout << "Ngay sinh: ";
    XuatNgay(ct.NgaySinh);
}
void NhapDoiBong(DoiBong &db){
    fflush(stdin);
    cout << "Nhap ma doi bong ";
    gets(db.MaDoiBong);
    fflush(stdin);
    cout << "Nhap ten doi bong ";
    gets(db.TenDoiBong);
    do{
        cout << "Nhap so luong cau thu ";
        cin >> db.n;
        if (db.n<=0 || db.n > 30)
        {
            cout << "So luong cau thu doi ban khong hop le. Vui long kiem tra lai !";
        }
    } while(db.n<=0 || db.n > 30);
    for (int i=0 ;i< db.n; i++){
        cout << "Nhap Cau thu Thu " << i+1;
        char MaCauThu[20];
        int KiemTra;
        do {
            fflush(stdin);
            cout << "Nhap ma cau thu ";
            gets(MaCauThu);
            KiemTra=1;
            for (int j=i-1;j>=0;j--){
                if (strcmp(db.DanhSachCauThu[j].MaCauThu,MaCauThu)==0){
                    KiemTra = 0;
                    break ;
                }
            }
            if (KiemTra==0){
                cout << "Ma Cau thu da bi trung. Vui long kiem tra lai ";
            }
        } while (KiemTra==0);
        strcpy(db.DanhSachCauThu[i].MaCauThu, MaCauThu);
        NhapCauThu(db.DanhSachCauThu[i]);
    }
}
void XuatDoiBong(DoiBong db){
    cout << "Ma doi bong: " << db.MaDoiBong << endl;
    cout << "Nhap ten doi bong: " << db.TenDoiBong << endl;
    for (int i=0;i<db.n; i++){
        cout << "Xuat cau thu thu  " <<  i+1 ;
        XuatCauThu(db.DanhSachCauThu[i]);
    }
}
int main()
{
    DoiBong db;
    NhapDoiBong(db);
    XuatDoiBong(db);
    return 0;
}