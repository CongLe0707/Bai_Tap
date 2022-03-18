#include <iostream>
using namespace std;
struct NgayThang
{
    int ngay;
    int thang;
    int nam;
};
typedef NgayThang ngaythang;
struct sinhvien
{
    int tuoi;
    char gioiTinh[4];
    char hoTen[100];
    NgayThang ngayNhapHoc;
};
typedef struct sinhvien SinhVien;
struct DanhSanh
{
    int siso;
    SinhVien danhsachsinhvien[100];
};
typedef struct DanhSanh danhsach;
void NhapNgay(ngaythang &nt)
{
    cout << "Nhap ngay ";
    cin >> nt.ngay;
    cout << "Nhap thang ";
    cin >> nt.thang;
    cout << "Nhap Nam: ";
    cin >> nt.nam;
}
void XuatNgay(ngaythang nt)
{
    cout << nt.ngay << "/" << nt.thang << "/" << nt.nam;
}
void NhapThongTin(SinhVien &sv)
{
    fflush(stdin);
    cout << "Nhap tuoi ";
    cin >> sv.tuoi;
    fflush(stdin);
    cout << "Nhap ten ";
    gets(sv.hoTen);
    fflush(stdin);
    cout << "Nhap gioi tinh ";
    gets(sv.gioiTinh);
    fflush(stdin);
    NhapNgay(sv.ngayNhapHoc);
}
void XuatThongTin(SinhVien sv)
{
    cout << endl;
    cout << "TUOI " << sv.tuoi << endl;
    cout << "HO VA TEN " << sv.hoTen << endl;
    cout << "GIOI TINH " << sv.gioiTinh << endl;
    XuatNgay(sv.ngayNhapHoc);
}
void NhapDanhSanh(danhsach &ds)
{
    do
    {
        cout << "Nhap si so ";
        cin >> ds.siso;
        if (ds.siso < 1 || ds.siso > 100)
        {
            cout << "VUi long nhap lai ";
        }
    } while (ds.siso < 1 || ds.siso > 100);
    for (int i = 1; i <= ds.siso; i++)
    {
        cout << "Nhap sinh vien thu " << i << endl;
        NhapThongTin(ds.danhsachsinhvien[i]);
    }
}
void XuatDanhSanh(danhsach ds)
{
    for (int i = 1; i <= ds.siso ; i++)
    {
        cout << "\nXUAT SINH VIEN THU " << i ;
        XuatThongTin(ds.danhsachsinhvien[i]);
    }
}
int main()
{
    danhsach ds;
    NhapDanhSanh(ds);
    XuatDanhSanh(ds);
    return 0;
}