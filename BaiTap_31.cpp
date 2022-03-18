#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout << "Nhap gia tri n ";
    cin >> n;
    if (n<=0) {
        cout << "Ban da nhap sai gia tri ";
        return 0;
    }
    int i=1;
    int tich=1;
    while (i<=n) {
        tich=tich*i;
        i++;
    }
    cout << "Tich cac chu so n= " << tich << endl;
    return 0;
}