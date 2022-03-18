#include <iostream>
using namespace std;
int main() 
{
    int soN;
    cout << "Nhap gia tri n: ";
    cin >> soN;

    float sum = 0;
    for  (int i=1; i<soN; i++) {
    
        sum +=  (float) i/(i+1);
    }
    cout << "Tong 1/2 + 2/3 +... + n/(n+1)= " << sum << endl;
    return sum;
}
 