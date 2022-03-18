#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  
  // 0 1, số sau bằng tổng 2 số trước
  int soLienTruocThuNhat = 0;
  int soLienTruocThuHai = 1;
  int bienTam = 0;

  cout << "Day so Fibonacci: " << soLienTruocThuNhat << "  " << soLienTruocThuHai << "  "; 
 
  for (int i=0; i<n; i++) {  // i++ <=> i = i + 1 <=> i += 1 <=> ++i
    bienTam = soLienTruocThuNhat + soLienTruocThuHai;
    if (bienTam>n) {
      cout << "\nKet thuc day so fibonacci!";
      break;
    }
    cout << bienTam << "  ";   
    soLienTruocThuNhat = soLienTruocThuHai;
    soLienTruocThuHai = bienTam;
  }

  return 0;
}