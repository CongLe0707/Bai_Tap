#include<iostream>
using namespace std;
void Nhap_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {   
        cin >> mang[i];
    }
}
void Max(int n, int a[])
{
    int max = a[0];
    int diem=0;
    for (int i=1; i<n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    for (int i=1; i<n ;i++) {
        if (max == a[i]) {
            diem++;
        }
    }
    cout << "\nGia tri lon nhat cua mang la " << max ;
    cout << "\nSo gia gia tri gia tri max la  " << diem ;
}

void Xuat_Mang(int N, int mangA[]) {
    for (int i=0; i<N; i++) {
        cout << mangA[i] << " ";
    }
}
int TongChuSo(int n, int a[]) {
    int tong=0,tam;
    for (int i=0;i<n;i++) { 
        while(a[i]>0){
            tong+=a[i]%10;
	        a[i]=a[i]/10;
        }
    }
    return tong;
}
void Hoan_Doi(int &A, int &B) {             // A = 5    B = 3
    A = A + B;  // A = 8  B = 3
    B = A - B;  // A = 8  B = 5
    A = A - B;  // A = 3  B = 5
}

void Sap_Xep_Tang_Dan(int N, int mang[]) {
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++) {
           if(mang[i] > mang[j]) {                
                Hoan_Doi(mang[j], mang[i]);    
            }
        }
    }
}
int main() {
    int N;
    do {
    cout << "Nhap so N = ";
    cin >> N;
    } while(N<=0);
    int mang[N];

    Nhap_Mang(N,mang);
    cout << "\nMang da nhap la: ";
    Xuat_Mang(N,mang);
    Max(N,mang);
    cout << "\nTong cac chu so mang = " << TongChuSo(N,mang);
    Sap_Xep_Tang_Dan(N, mang); 
    cout << "\nVay thu tu tang dan cua ma la: ";
    Xuat_Mang(N,mang);

    
    return 0;
}
