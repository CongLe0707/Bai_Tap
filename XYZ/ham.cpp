#include<iostream>
using namespace std;

/* KDL TenHam( co tham so hoac khong ) {
    code
} */

void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {   
        cin >> mang[i];
    }
}

void Xuat_Mang(int soLuongPhanTu, int mangA[]) {
    cout << "Mang da nhap la: ";
    for (int i=0; i<soLuongPhanTu; i++) {
        cout << mangA[i] << " ";
    }
}

int Tinh_Tong(int x, int y, int mang[]) {
    int tong = mang[x] + mang[y];
    return tong;
}

int Tinh_Hieu(int x, int y, int mang[]) {
    int hieu = mang[x] - mang[y];
    return hieu;
}

int Tinh_Tich(int x , int y, int mang[]) {
    int tich = mang[x] * mang[y];
    return tich;
}

int Tinh_Thuong (int x, int y, int mang[]) {
    int thuong = mang[x] / mang[y];
    return thuong;
}

int Hoan_Doi


int main () {
    int N;
    cout << "Moi ban nhap so N: ";
    cin >> N;
    int mang[N];  
    
    Nhap_Mang(N, mang);
    Xuat_Mang(N, mang);

    int x, y;
    cout << "\nNhap vị trí x = ";
    cin >> x;
    cout << "\nNhap vị trí y = ";
    cin >> y;
    
    int Tong = Tinh_Tong(x, y, mang);
    cout << "Tong = " << Tong << endl;

    int Hieu = Tinh_Hieu(x, y, mang);
    cout << "Hieu = " << Hieu << endl;

    int Tich = Tinh_Tich(x, y, mang);
    cout << "Tich = " << Tich << endl;

    int Thuong = Tinh_Thuong(x, y, mang);
    cout << "Thuong = " << Thuong << endl;

    // Viết hàm đổi vị trí của 2 số bất kỳ trong mảng (vị trí 2 số do người dùng nhập)
    // Viết hàm tìm số lớn nhất 
    // Viết hàm tìm số nhỏ nhất
    // Viết hàm sắp xếp mảng theo thứ tự tăng dần
    // Viết hàm sắp xếp mảng theo thứ tự giảm dần
    return 0;
}
