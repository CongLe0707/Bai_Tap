// Sắp xếp chọn ( Selection sort : O(n^2))
/* 
    B1: Chọn vị tri i=0 là vi trị nhỏ or lớn nhất
    B2: Cho Duyệt từ vị tri i+1 . Nếu i=n < i=min or i=n > i=max;
    B3 Hoán đổi vị trí:
    VD n=6 : 5 3 6 8 0 2 
    i=0 là 5 = min or i= 0 là 5 = max;
    lúc này duyệt đến i = 0 giá trị = 0 nhỏ hơn min hóa đôi i = 0 và i = 4
        lúc này i0 = 0 và tiếp tục i=1 = 3 duyệt tiếp ( cứ như vậy với sắp xếp tăng dần )

*/
#include<iostream>
using namespace std;
void NhapN(int &n){
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n<=0){
            cout << "Vui long nhap lai ";
        }
    }while (n<=0);
}
void NhapMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << "a[ "<< i  << " ]= ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
void swap(int &a, int &b){
    int tmep=a;
    a=b;
    b=tmep;
}
void SapXepTang(int n, int a[]){
    for (int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if (a[j]<a[min]){
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
}
void SapXepGiam(int n, int a[]){
    for (int i=0; i<n-1; i++){
        int max=i;
        for(int j=i+1; j<n; j++){
            if (a[j]>a[max]){
                max = j;
            }
        }
        swap(a[max],a[i]);
    }
}
int main()
{
    int n;
    NhapN(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a),
    SapXepTang(n,a);
    cout << endl;
    XuatMang(n,a);
    SapXepGiam(n,a);
    cout <<  endl;
    XuatMang(n,a);
    return 0;
}