#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float DiemToan, DiemLi, DiemHoa;
    cout<<"Moi ban nhap diem toan: ";
    cin>>DiemToan;
    cout<<"Moi ban nhap diem li: ";
    cin>>DiemLi;
    cout<<"Moi ban nhap diem hoa: ";
    cin>>DiemHoa;

    float TongDiem= DiemToan+DiemLi+DiemHoa;
    cout<<"\nVay Tong diem 3 mon cua ban la: "<< fixed << setprecision(1) << TongDiem << endl;
    return 0;
}