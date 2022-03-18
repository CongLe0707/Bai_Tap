/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float toan, li, hoa, diemTrungBinh;
    
    cout << "Nhap diem mon toan ";
    cin >> toan;
    cout << "Nhap diem mon li ";
    cin >> li;
    cout << "Nhap diem mon hoa ";
    cin >> hoa;

    diemTrungBinh = (toan + li + hoa) / 3;
    cout << "Vay diem trung binh cua ban la " << diemTrungBinh << endl;

    return 0;
}
