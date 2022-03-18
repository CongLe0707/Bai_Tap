#include <iostream>
using namespace std;
int main() {
    int soN;                              
    cout << "Moi ban nhap gia tri N: ";     
    cin >> soN;  
    
    int mang[soN];          // khai bao

    for (int i=0; i<soN; i++) {             // nhap mang
        cout << "\nNhap mang[" << i << "] = ";
        cin >> mang[i];
    }

    /*
        i = 0 -> 0<=5  -> True: mang[0] = 1
        i = 1 -> 1<=5  -> Ture: mang[1] = 2
        i = 2 -> 2<=5  -> True: mang[2] = 3 
        i = 3 -> 3<=5  -> true: mang[3] = 4
        i = 4 -> 4<=5  -> true: mang[4] = 99
        i = 5 -> 5<=5  -> true: mang[5] = 100
        i = 6 -> 6<=5  -> false -> ket thuc vong lap
    */
   
    cout << "Xuat mang da nhap: ";      // xuat mang
    for (int i=0; i<soN; i++) {
        cout << mang[i] << "   ";
    }

    // truy van gia tri cua mang tai phan tu co chi so x
    int soY;
    cout << "Moi ban gia tri y: ";
    cin >> soY;
    cout << "Phan tu thu y " << mang[soY] << endl; 

    int tong=0;
    tong = mang[2] + mang[3];
    cout << "Vay tong la : " << tong << endl;

    return 0;
}