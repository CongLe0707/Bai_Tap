#include<iostream>
using namespace std;
float toan, li, hoa;
float TBM;
void nhap() {
    cout << "Nhap diem mon toan ";
    cin >> toan;
    cout << "Nhap diem mon li ";
    cin >> li;
    cout << "Nhap diem mon hoa ";
    cin >> hoa;
}
void xuat() {
    cout << "Vay diem trung binh mon = " << TBM;
}
void Tinh_Diem() {
    TBM=(toan+li+hoa)/3;
}

int main()
{
    nhap();
    Tinh_Diem();
    xuat();
    return 0;
}