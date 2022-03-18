#include<iostream>
using namespace std;
void Nhap_mang (int n, int mang[]) {
    for (int i=0; i<n; i++) {
        cin >> mang[i];
    }
}
void Xuat_Mang (int n, int mang[]) {
    for (int i=0; i<n;i++) {
        cout << mang[i] <<" ";
    }
}
int Gia_Tri_LN (int n, int mang []) {
    int max=mang[0];
    for (int i=0; i<n;i++) {
        if (max<mang[i]) {
            max=mang[i];
        }
         
     }
    return max;
}
int main()
{
    int n;
    cout << "Moi ban nhap gia tri n: ";
    cin >> n;
    int mang[n];
    Nhap_mang(n, mang);
    Xuat_Mang(n, mang);
    int Max=Gia_Tri_LN(n, mang);
    cout << "Vay gia tri lon nhat cua mang la: " << Max;
    return 0;
}
