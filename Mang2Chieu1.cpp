#include<iostream>
using namespace std;
#define ROW 100
#define COL 100
void NhapMang(int &row, int &col ,int a[][COL]){
    do {
        cout << "Nhap hang ";
        cin >> row;
        cout << "Nhap cot ";
        cin >> col;
    }while (row<0 || col<0);

    for (int i=0; i<row; i++){
        for (int j=0;j<col;j++) {
            cout << "Nhap a [ " << i << " ][ " << j << " ] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}
void XuatMang(int row, int col, int a[][COL]){
    for (int i=0; i<row ;i++){
        for (int j=0; j<col;j++){
            cout << a[i][j] << "\t";
        }
    cout << endl;
    }
}
int TongDong(int col, int rowi, int a[][COL] ) {
    int sum(0);
    for (int i=0; i<col; i++)
        sum=sum+a[rowi][i];
    return sum;
}
int TongCot (int row, int coli, int a[][COL]){
    int sum=0;
    for (int i = 0; i<row; i++)
        sum = sum + a[i][coli];
    return sum;
}
void HoanDoi(int &a, int &b) {
    a=a+b;
    b=a-b;
    a=a-b;
}
void HoanDoiDong(int row, int col, int row1, int row2, int a[][COL]){
    if((row1 >= 0 && row1 < row) && (row2 >= 0 && row2 < row)) {
        for (int i=0;i<col;i++)
            HoanDoi(a[row1][i],a[row2][i]);
    }
}
void HoanDoiCot(int row, int col, int col1, int col2, int a[][COL]){
    if ((col1>=0&&col1<col) && (col2>=0&&col2<col)) {
        for(int i=0; i<row; i++)
            HoanDoi(a[i][col1],a[i][col2]);
    }
}
int main () 
{ 
    int a[ROW][COL];
    int row, col;
    NhapMang(row,col,a);
    XuatMang(row,col,a);
    int rowi;
    do {
        cout << "Nhap dong thu i " ;
        cin >> rowi;
    }while (rowi<0);
    int sumrowi=TongDong(col, rowi, a);
    cout << "Tong dong i = " << sumrowi << endl;
    int coli;
    do{
        cout << "Nhap cot thu i " ;
        cin >> coli;
    }while (coli<0); 
    cout << "Tong cot i = " << TongCot(row, coli, a) << endl;
    int row1,row2;
    do{
        cout << "Nhap dong 1:  ";
        cin >> row1;
    } while (row1 <0 || row1>= row);
    do{
        cout << "Nhap dong 2:  ";
        cin >> row2 ;
    } while (row2<0 || row2>= row);
    HoanDoiDong(row,col,row1,row2,a);
    XuatMang(row,col,a);
    int col1,col2;
    do{
        cout << "Nhap cot 1:  ";
        cin >> col1;
    } while (col1 <0 || col1>= col);
    do{
        cout << "Nhap cot 2:  ";
        cin >> col2 ;
    } while (col2<0 || col2>= row);
    HoanDoiCot(row, col, col1, col2, a);
    XuatMang(row,col,a);
    return 0;
}