//Bài 2: Cho 3 số A và B và C được nhập vào từ bàn phím. Tìm số lớn nhất và số nhỏ nhất.
#include <iostream>

using namespace std;

int main()
{ 
    int so_a, so_b, so_c;
    cout << "Nhap so a ";
    cin >> so_a;
    cout << "Nhap so b ";
    cin >> so_b;
    cout << "Nhap so c ";
    cin >> so_c;

    int max = so_a;
    if (max < so_b) {
        max = so_b;
    }
    if (max < so_c) {
        max = so_c;
    }       
    cout << "Vay so lon nhat trong ba so la " << max << endl;

    int min = so_a ; 
    if (min> so_b) {
        min = so_b;
    }
    if ( min > so_c ) {
        min = so_c; 
    } 
    cout << "Vay so nho nhat trong ba so la " << min << endl;

    return 0;
}
