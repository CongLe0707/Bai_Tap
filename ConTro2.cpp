#include<iostream>
using namespace std;
int main () 
{
    int a[]={5,6,4,7,8};
    int tong = 0;
    cout << "gia tri *&a " << *a; // gia trị a[0]
    cout << endl;
    cout << "dia chi &a " << &a; // địa chỉ tại a[0]
    cout << endl;
    cout << " *(a+1) " << *(a+1); // gia trị tiếp theo
    cout << endl;
    cout << "a+1" << a+1 << endl;// địa chỉ của giá trị tiếp theo
    cout << "*(a+1)+*(a+2)"<< *(a+1)+*(a+2); // a[1]+a[2]
     // có 2 cái địa chỉ
    // 1 là địa chỉ của biến con trỏ pa
    // 2 là địa chỉ mà con trỏ pa trỏ đến
// Toán tử * để lấy ra giá trị mà con trỏ đang trỏ đến
// Ko để toán tử gì cả thì lấy ra địa chỉ mà con trỏ đang trỏ đến
// Nếu để cả dấu & trước tên con trỏ thì ta đang lấy ra "địa chỉ của riêng" con trỏ.
    return 0;
}