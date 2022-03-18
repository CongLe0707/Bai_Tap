//viết hàm tìm tất cả các số nguyên tố nhỏ hơn 100. Chú ý các số tìm được phải đưa vào mảng và in ra màn hình mảng số nguyên tố vừa tìm được.
#include <iostream>
#include <cmath>
#define X 100
using namespace std;
void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {   
        cin >> mang[i];
    }
}
void Xuat_Mang(int N, int mangA[]) {
    cout << "Mang da nhap la: ";
    for (int i=0; i<N; i++) {
        cout << mangA[i] << " ";
    }
}
bool Kiem_Tra_Nguyen_To(int N)
{
    if (N < 2)
    {
        return false;
    }
    else if (N > 2)
    {
        if (N % 2 == 0)  
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)N); i = i+ 2)   
        {
            if (N % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int Diem_SNT(int N, int mang[])
{
    int BienTam = 0;
    for(int i = 0; i < N; i++)
    {
        if(Kiem_Tra_Nguyen_To(mang[i]) == true && mang[i] < 100)
        {
            BienTam++;
        }
    }
    return BienTam;
}
int main()
{
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    int mang[X];

    Nhap_Mang(N, mang);
    Kiem_Tra_Nguyen_To(N);
    Xuat_Mang(N, mang);
    

    int DiemSoNguyenTo = Diem_SNT(N, mang);
    cout << DiemSoNguyenTo;

    return 0;
}
