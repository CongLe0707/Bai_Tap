#include<iostream>
using namespace std;
int main()
{
  int soN,  tongUocSo = 0;
  cout << "Nhap gia tri n ";
  cin >> soN;

  for (int i=1; i <= soN; i++) 
  {
    if (soN%i==0)
    {
      cout << i << " " ; 
      tongUocSo = tongUocSo + i; 
    }
  }
  
  cout << "Vay tong cua cac uoc = " << tongUocSo << endl;
  
  return 0;

  }


  