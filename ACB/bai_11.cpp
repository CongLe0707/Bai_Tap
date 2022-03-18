#include<iostream>
using namespace std;
int main()
{
  int soN; 
  cout << "Nhap gia tri n1 ";
  cin >> soN;
  
  int bienTam = soN;
  while (bienTam < 10) {
    int x = bienTam % 10;
    if (x % 2 == 0) {
      return 0;
    }
    else if (x/10==0) {
      return 1;    
    }
  }
  
  return 0;
}


// khai báo (kiểu dữ liệu, khai báo biến, hằng)
// if  - if else 
// switch case
// for 
// while - do while 
// array (mảng)
// function (hàm)

