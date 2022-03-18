#include<iostream>
using namespace std;
const int ROW=100;
const int COL=100;
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
void SoChan (int row, int col, int a[][COL]){
    int tong=0;
    cout << "Cac so chan la: ";
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (a[i][j]%2==0){
                cout << a[i][j] << " ";
                tong = tong + a[i][j];
                
            }
        }
    }
    cout << "\nTong so chan = " << tong << endl;
}
void SoLe (int row, int col, int a[][COL]){
    int tong=0;
    cout << "Cac so le la: ";
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (a[i][j]%2!=0){
                cout << a[i][j] << " ";
                tong = tong + a[i][j];
            }
        }
    }
    cout << "\nTong so le = " << tong << endl;
}
int main ()
{
    int a[ROW][COL];
    int row, col;
    NhapMang(row, col, a);
    XuatMang(row, col, a);
    SoChan(row, col, a);
    SoLe(row, col, a);

    return 0;
}