#include<iostream>
using namespace std;
struct NGAYTHANG
{
    int ngay, thang, nam;
};

struct SinhVien
{
    int mssv;
    char hovaten[30];
    char lop[10];
    char gioitinh[5];
    NGAYTHANG ngaythang;
    float dtb;

};
struct  DanhSach
{
    int n;
    SinhVien danhsachsv[30];
};
void NhapNgay (NGAYTHANG &nt){
    cout << "Nhap ngay: "; cin >> nt.ngay;
    cout << "Nhap thang: "; cin >> nt.thang;
    cout << "Nhap nam: "; cin >> nt.nam;
}
void Xuatngay (NGAYTHANG nt){
    cout << "Ngay sinh " << nt.ngay << "/" << nt.thang  << "/" << nt.nam << endl;
}
void NhapThongtin(SinhVien &sv){
    fflush(stdin);
    cout << "Nhap MSSV "; cin >> sv.mssv;
    fflush(stdin);
    cout << "Nhap ten ";
    gets(sv.hovaten);
    fflush(stdin);
    cout << "Nhap gioi tinh "; 
    gets(sv.gioitinh);
    NhapNgay(sv.ngaythang);
    fflush(stdin);
    cout << "Nhap diem trung binh ";
    cin >> sv.dtb;
}
void XuatThongTin(SinhVien sv){
    cout << "Lop: " << sv.lop << endl;
    cout <<"MSSV:" << sv.mssv << endl;
    cout << "Gioi tinh: " << sv.gioitinh << endl;
    Xuatngay(sv.ngaythang);
    cout << "\nDTB" << sv.dtb << endl;
}
void NhapDanhSach (DanhSach &ds){
    do {
        cout << "SSSV: ";
        cin >> ds.n;
    } while (ds.n<0 || ds.n>30);
    for (int i=1;i<=ds.n;i++){
        cout << "Nhap SV thu " << i << endl;
        NhapDanhSach(ds.danhsachsv[i]) ;
    }
}
void XuatDanhSach(DanhSach ds){
    cout << ""
}
int main()
{
    return 0;
}