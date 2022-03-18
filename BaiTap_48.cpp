#include<iostream>
using namespace std;
const int COL=100;
const int ROW=100;
void NhapMang(int &row, int &col, int a[][COL]){
    do{
        cout << "Nhap hang " ; cin >> row;
        cout << "Nhap cot " ; cin >> col;
    } while (row < 0 || col < 0);
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << "a[ " << i << " ][ " << j << " ]= ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}
void XuatMang(int row, int col, int a[][COL]){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << a[i][j] << "\t";
        }
    cout << endl;
    }
}
int Diem(int row, int col, int a[][COL]){
    int diem=0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            diem++;
        }
    }
    return diem;
}
int tong(int row, int col, int a[][COL]){
    int tong=0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            tong = tong + a[i][j];
        }
    }
    return tong;
}
float TrungBinhCong(int row, int col, int a[][COL]){
    float Tbc =(float)tong(row, col, a) / Diem(row, col, a);
    return Tbc;
}
int main()
{
    int a[ROW][COL];
    int row, col;
    NhapMang(row, col, a);
    XuatMang(row, col, a);
    cout << "Trung binh mang = " <<(float)TrungBinhCong(row, col, a);
    return 0;
}