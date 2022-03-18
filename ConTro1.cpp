#include<iostream>
using namespace  std;
int main ()
{   int a=100, b=50;
    int *p1, *p2;
    cout << "Gia tri a " << a << endl; // a=100
    cout << endl;
    cout << "Dia chi cua a "<< &a << endl; // a= địa chỉ
    cout << endl;
    cout << "Gia tri *&a " << *&a << endl; // a= 100
    cout << endl;
    p1=&a;
    cout <<" con tro &p1 " << &p1 << endl; // &p1= địa chỉa của p
    cout << endl;
    cout << "Con tro *p1 " << *p1 << endl; //*p=a=100
    cout << endl;
    cout << "con tro p " << p1 << endl;// p=địa chỉ của a;
    cout << endl;
    p2=&b;
    cout << "Gia tri b " << b << endl; //50
    cout << endl;
    cout << "Dia chi cua b "<< &b << endl; // địa chỉ của b
    cout << endl;
    cout << "Gia tri *&b " << *&b << endl; // *&b=b
    cout << endl;
    cout << "Gia tri p2 " << p2 << endl; // p2=địa chỉ b
    cout << endl;
    cout << "Dia chi cua &p2 "<< &p2 << endl; // địa chỉ của p2
    cout << endl;
    cout << "Gia tri *p " << *p2 << endl; // *p2=50
    cout << endl;
    *p2+=10;
    cout << "Gia tri p2 " << b << endl; // p2= địa chỉ của 60
    cout << endl;
    cout << "Dia chi cua &p2 "<< &b<< endl; // địa chỉ của 60
    cout << endl;
    cout << "Gia tri *p2 " << *p2 << endl; // *p2=60
    cout << endl;
    cout << "Gia tri p2 " << p2 << endl; 
    cout << endl;
    cout << "Dia chi cua &p2 "<< &p2 << endl; 
    cout << endl;
     // có 2 cái địa chỉ
    // 1 là địa chỉ của biến con trỏ p
    // 2 là địa chỉ mà con trỏ pa trỏ đến
// Toán tử * để lấy ra giá trị mà con trỏ đang trỏ đến
// Ko để toán tử gì cả thì lấy ra địa chỉ mà con trỏ đang trỏ đến
// Nếu để cả dấu & trước tên con trỏ thì ta đang lấy ra "địa chỉ của riêng" con trỏ.

    return 0;
}