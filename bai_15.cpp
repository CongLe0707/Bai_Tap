#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
    int a, b, min, uocSoChungLonNhat = 1;

    cout << "Nhap gia tri thu nhat: ";
    cin >> a;
    cout << "Nhap gia tri thu hai: ";
    cin >> b;

    if (a==0 || b==0) {
        cout << "Hai so khong co uoc chung" << endl;
    } else if (a != 0 && b == 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(a) << endl;
    } else if (a == 0 && b != 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(b) << endl;
    } else {
        if (a < b) {
            min = a;
        } else {
            min = b;
        }
        
        for(int i = 1; i <= min; i++)
        {
            if(a%i==0 && b%i==0)
            {
                uocSoChungLonNhat = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << uocSoChungLonNhat << endl;
    }
    return 0;
}