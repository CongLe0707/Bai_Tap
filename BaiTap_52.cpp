#include<iostream>
using namespace std;
struct ThiSinh
{
    char MaThiSinh[5];
    char TenThiSinh[30];
    float toan,ly,hoa;
    float TongDem;

};
void NhapThongTin(ThiSinh &ts){
    cout << "NHAP MA THI SINH: ";
    gets(ts.MaThiSinh);
    fflush(stdin);
    cout << "NHAP TEN THI SINH: ";
    gets(ts.TenThiSinh);
    fflush(stdin);
    cout << "NHAP DIEM TOAN: "; cin >> ts.toan;
    cout << "NHAP DIEM LY: "; cin >> ts.ly;
    cout << "NHAP DIEM HOA: "; cin >> ts.hoa; 
}
float TongDiem(ThiSinh ts){
    float tong = ts.toan+ts.ly+ts.hoa;
    return tong;
}
void XuatThongTin(ThiSinh ts){
    cout << "MA THI SINH LA: " << ts.MaThiSinh << endl;
    cout << "TEN THI SINH LA: " << ts.TenThiSinh << endl;
    cout << "DIEM TOAN: " << ts.toan << endl;
    cout << "DIEM LY: " << ts.ly << endl;
    cout << "DIEM HOA: " << ts.hoa << endl;
    cout << "TONG DIEM LA: " << TongDiem(ts) << endl;
}
int main()
{
    ThiSinh ts;
    NhapThongTin(ts);
    XuatThongTin(ts);
    return 0;
}