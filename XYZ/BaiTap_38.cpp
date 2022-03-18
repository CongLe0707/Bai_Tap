#include<iostream>
#define MAX 100
using namespace std;
void Nhap_Mang(int n, int mang[]){
    for (int i=0;i<n;i++) {
        cin >> mang[i];
    }
}
void Xuat_Mang(int n, int mang[]){
    for (int i=0; i<n;i++){
        cout << mang[i];
    }
}
float Gia_TRi_Tra_Ve(int n, int mang[]){
    for (int i=0; i<n;i++){
        if (mang[i] < 0 ); {
            return mang[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    int mang[MAX];
    Nhap_Mang(n, mang);
    Xuat_Mang(n, mang);
    float TraVe=Gia_TRi_Tra_Ve(n, mang);
    cout << " \nGia tri tra ve la " << TraVe << endl;
    return 0;
}