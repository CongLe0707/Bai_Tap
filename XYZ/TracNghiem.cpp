/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() { 
  char luaChon;
  cout << "Cau hoi: Trong day so 2 5 7 9. So nao chia het cho 2?\n";
  cout << "A. 2\n";
  cout << "B. 5\n";
  cout << "C. 7\n";
  cout << "D. 9\n";
  cout << "Lua chon cua ban la: ";
  cin >> luaChon;

  switch (luaChon) {
    case 'a': {
      cout << "Dap an a chinh xac!" << endl;
      break;
    }
    case 'A': {
      cout<<"Dap an A chinh xac!"<<endl;
      break;
    }
    case 'b': {
      cout << "Dap an b khong chinh xac!" << endl;
   
    }
    case 'B': {
      cout << "Dap an B khong chinh xac!" << endl;
    
    }
    case 'c': {
      cout << "Dap an c khong chinh xac!" << endl;
      break;
    }
    case 'C': {
      cout << "Dap an C khong chinh xac!" << endl;
      break;
    }
    case 'd': {
      cout << "Dap an d khong chinh xac!" << endl;
      break;
    }
    case 'D': {
      cout << "Dap an D khong chinh xac!" << endl;
      break;
    }
    default:
      cout << "Dap an nhap khong phu hop." << endl;
  }

  return 0;
}



