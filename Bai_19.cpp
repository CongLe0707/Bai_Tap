#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <cmath>
using namespace std;
void Nhap_Mang(int &N, int mang[]) {
	srand(time(NULL));
	for (int i=0; i<N; i++) {
		mang[i] = rand() * -1;
        
	}
}
void Xuat_Mang(int N, int mang[]) {
    for (int i=0; i<N; i++) {
        if (i>=-5 && i<=100) {
            cout << mang[i];         
        }         
    }
   
}
void Hoan_Doi(int A, int B) {            
    A = A + B;  
    B = A - B;  
    A = A - B;  
}
void Sap_Xep_Giam_Dan(int N, int mang[]) {
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if(mang[i] < mang[j]) {
                Hoan_Doi(mang[j], mang[i]);       
            }
        }
    }
}   

int main() {
    int N;
    cout << "Nhap gia tri N: ";
    cin >> N;
    int mang[N];
    Nhap_Mang(N, mang);
    Xuat_Mang(N, mang);
    

    Sap_Xep_Giam_Dan(N, mang);
    Xuat_Mang(N, mang);


    return 0;
}