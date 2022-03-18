/* 
Bài 20: Viết chương trình nhập vào dãy số N phần tử với yêu cầu sau:
    - Độ dài mảng do người dùng nhập vào từ bàn phím.
    - Giá trị mảng được nhập tự động và giới hạin trong [x ; y]. Gá trị x và y do người dùng nhập vào.
    - Tính tổng, hiệu, tích, thương các phần tử của mảng.
    - Sắp xếp mảng theo thứ tự số chẵn đầu mảng tăng dần và số lẻ ở cuối mảng giảm dần. */
#include<iostream>
using namespace std;
void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {
        cout << "mang [" << i << "] = " ;
        cin >> mang[i];
    }
}
void Xuat_Mang(int N, int mang[]) {
    cout << "Xuat mang da nhap: "; 
    for (int i=0; i<N; i++) {
        cout << mang[i] << " ";
    }   
}
int Tinh_Tong(int N, int mang[]) {
    int tong = 0;
    for (int i=0; i<N; i++) {
        tong = tong + mang[i];
    }
    return tong;
    
}
int Tinh_Hieu(int N, int mang[]) {
    int hieu = 0;
    for (int i=0; i<N; i++) {
        hieu = hieu - mang[i];
    }
    return hieu;
    
}
int Tinh_Tich(int N, int mang[]) {
    int tich = 1;
    for (int i=0; i<N; i++) {
        tich = tich * mang[i];
    }
    return tich;
    
}
int Tinh_Thuong(int N, int mang[]) {
    int thuong = 0;
    for (int i=0; i<N; i++) {
        thuong = thuong + mang[i];
    }
    return thuong;    
}
int main() {
    int N;
    cout << "Nhap N = ";
    cin >> N;
    int mang[N];
    Nhap_Mang(N, mang);
    Xuat_Mang(N, mang);
    int TinhTong = Tinh_Tong (N, mang);
    cout << "\nTong = " << TinhTong;

    int TinhHieu = Tinh_Hieu (N, mang);
    cout << "\nHieu = " << TinhHieu;

    int TinhTich = Tinh_Tich (N, mang);
    cout << "\nTich = " << TinhTich;

    int TinhThuong = Tinh_Thuong (N, mang);
    cout << "\nThuong = " << TinhThuong;

    return 0;
}