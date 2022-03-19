#include<iostream>
using namespace std;
class VanDongVien
{
private:
    char Ten[30];
    float cannang;
    char monthidau[50];
    float chieucao;
public:
    void NhapThongTin()
    { 
        cout << "Nhap Ten: ";
        fflush(stdin);
        gets(this->Ten);
        cout << "Nhap Can Nang: ";
        fflush(stdin);
        cin >> this->cannang;
        cout << "Nhap chieu cao: ";
        fflush(stdin);
        cin >> this->chieucao;
        cout << "Nhap mon thi dau: ";
        fflush(stdin);
        gets(this->monthidau);
    }
    void XuatThongTin() {
        cout << "_______________*******______________" << endl;
        cout << "Ho Va Ten: " << this->Ten <<  endl;
        cout << "Can Nang: " << this->cannang << "Kg" << endl;
        cout << "Chieu Cao: " << this->chieucao <<"cm" << endl;
        cout << "Bo Mo Thi Dau: " << this->monthidau << endl;
        
    }
};
int main () {
    int n;
    
    VanDongVien arr;
    do {
        cout << "1 de nhap thong tin VDV: " << endl;
        cout << "2 de xuat thong tin VDV: " << endl;
        cout << "0 de thoat khoi menu: " << endl;
        cin >> n;
        switch (n)
        {
            case 1:
                arr.NhapThongTin();
                break;
            case 2:
                arr.XuatThongTin();
                break;
        }
    }while (n!=0);
    return 0;
}