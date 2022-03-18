#include<iostream>
using namespace std;
int main()
{
    int so_N, max=0;
    cout << " Nhap gia tri N: ";
    cin >> so_N;
    if ( so_N <= 0)
    {
        cout <<" Ban da nhap sai gia tri " << endl;
    }
    for ( int i = 1; i <= so_N; i++ )
    {
        if ( so_N % i ==0 )
        {
            cout << i << " " ; 
        }
    }
    cout << " Vay gia tri lon nhat cua uoc so la: "<< max << endl;
    return 0;
}