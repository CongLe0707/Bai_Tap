// nhap vao 1 phan so:
#include<iostream>
using namespace std;
struct PhanSo
{
    int tu, mau;
    void NhapPhanSo(){
        cout << "Nhap tu so: ";
        cin >> this->tu;
        do {
            cout << "Nhap mau so ";
            cin >>this->mau;
        } while (this->mau==0);
    }
    void XuatPhanSo(){
        cout << "Phan so moi nhap la " <<this->tu << "/" << this->mau;
    }
    PhanSo tich(PhanSo ps2){
        PhanSo ps3;
        ps3.tu = ps2.tu*this->tu;
        ps3.mau = ps2.mau*this->mau;
        return ps3;
    }
    int UocSo(){
        if (this->tu==0 || this->mau==0){
            return this->tu + this->mau;
        }
        while (this->tu != this->mau )
        {
            if (this->tu > this->mau){
                this->tu =this->mau -  this->mau;
            }
            else{
                this->mau = this->mau - this->mau;
            }
        }
        return this->tu;
    }
    void ToiGian(){
        int c=UocSo();
        this->tu = this->tu/c;
        this->mau = this->mau/c;
        cout << this->tu <<"/"<<this->mau;
    }
};
int main()
{
    PhanSo ps1,ps2;
    ps1.NhapPhanSo();
    ps2.NhapPhanSo();
    PhanSo Tich = ps1.tich(ps2);
    Tich.XuatPhanSo();
    ps1.ToiGian();
    ps1.XuatPhanSo();
    return 0;
}