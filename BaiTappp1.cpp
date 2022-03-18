#include<iostream>
using namespace std;
int main()
{
  float a1, b1, c1, a2, b2, c2;
  float Det, Detx, Dety, x, y;
  cout << "Nhap a1: "; 
  cin >> a1;
  cout << "\nNhap b1: "; 
  cin >> b1;
  cout << "\nNhap c1: "; 
  cin >> c1;
  cout << "\nNhap a2: "; 
  cin >> a2;
  cout << "\nNhap b2: "; 
  cin >> b2;
  cout << "\nNhap c2: "; 
  cin >> c2;
  Det = a1 * b2 - a2 * b1;
  Detx = c1 * b2 - c2 * b1;
  Dety = a1 * c2 - a2 * c1;
  if (Det == 0) {
    if (Detx !=0 || Dety !=0) {
      cout<<"he phuong trinh vo so nghiem"; 
    }
    else {
      cout<<"phuong trinh vo so nghiem";
    }
  }
  else {
    x = Detx / Det;
    y = Dety / Det;
    cout << "phuong trinh co nghiem "<< x <<","<< y;
  }
  return 0;
}