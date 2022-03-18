//Nhập vào số nguyên N. In ra màn hình các dãy số nguyên từ 0 đến N
#include <iostream>
using namespace std; 

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    
    for ( int i = 0; i <= n ; ++i ) {
        cout << i << " ";
    }

    return 0;
}
