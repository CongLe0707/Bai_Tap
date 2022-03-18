#include<iostream>
#include<cstring>
using namespace std;
struct HocSinh
{
    char HoTen[30];
    float toan,van;
    float tbm;
};
typedef struct HocSinh HOCSINH;
struct LopHoc
{
    char TenLop[30];
    int SiSo;
    HocSinh DanhSanh[50];
};
typedef struct LopHoc LOPHOC;
void NhapHocSinh(HOCSINH &hs){
    fflush(stdin);
    cout << "Nhap ho ten ";
    gets(hs.HoTen);
    fflush(stdin);
    cout << "Nhap Diem toan: ";
    cin >> hs.toan;
    fflush(stdin);
    cout << "Nhap Diem van: ";
    cin >> hs.van;
}

float TBM(HOCSINH hs){
    return (float)(hs.toan+hs.van)/2;
}
void XuatHocSinh(HOCSINH hs){
    cout << "Ho VA TEN: " << hs.HoTen << endl;
    cout << "DIEM TOAN LA " << hs.toan << endl;
    cout << "DIEM VAN LA  " << hs.van << endl;
    cout << "TBM = " << TBM(hs) << endl;
  
}
void NhapLopHoc(LOPHOC &lh){
    fflush(stdin);
    cout << "Nhap ten lop hoc: ";
    gets(lh.TenLop);
    do {
        cout << "Nhap si so lop: ";
        cin >> lh.SiSo;
        if (lh.SiSo<=0 || lh.SiSo > 50){
            cout << "Vui long nhap lai! ";
        } 
    }while(lh.SiSo<=0 || lh.SiSo > 50);
    for (int i=0; i<lh.SiSo; i++){
        cout << "Nhap vao hoc sinh thu " << i+1;
        cout << endl;
        NhapHocSinh(lh.DanhSanh[i]);
    }
}
void XuatLopHoc(LOPHOC lh){
    for (int i=0; i<lh.SiSo; i++){
        cout << "Hoc sinh Thu " << i+1;
        XuatHocSinh(lh.DanhSanh[i]);
    }
}
int main()
{
    LOPHOC lh;
    NhapLopHoc(lh);
    XuatLopHoc(lh);
    return 0;
}
