#include<iostream>
using namespace std;
void TroMang(int *p) {
    cout << p << "\n";
    cout << *p << "\n";
}
int main()
{   const int size = 6;
    int a[size]={7,3,8,9,3,2};
    for (int* p=a; p<a+size; p++) {
        TroMang(p);
    }
    return 0;
}