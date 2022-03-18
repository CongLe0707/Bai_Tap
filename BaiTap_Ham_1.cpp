#include<iostream>
using namespace std;
void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {   
        cin >> mang[i];
    }
}

void Xuat_Mang(int N, int mangA[]) {
    cout << "Mang da nhap la: ";
    for (int i=0; i<N; i++) {
        cout << mangA[i] << " ";
    }
}
void Hoan_doi(int &A, int &B) {
    int BienTam = A;
    A = B;
    B = BienTam;
}

int main() {
    int N;
    cout << "Nhap so N = ";
    cin >> N;
    int mang[N];

    Nhap_Mang(N,mang);

    Xuat_Mang(N,mang);    
    int A, B ;
    cout << "\nNhap so A = ";
    cin >> A;
    cout << "\nNhap so B = ";
    cin >> B;       

    Hoan_doi(mang[A], mang[B]);
    Xuat_Mang(N, mang);    

    return 0;
}
