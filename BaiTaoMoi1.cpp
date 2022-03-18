#include<iostream>
using namespace std;
const int n=10;
void Nhap(int &n){
    do {
        cout << "Nhap n; ";
        cin >> n;
        
        if (n==0){
            cout << "Moi ban nhap lai ";
        } 
    }while (n==0);

}
void NhapMang(int n, int a[]){
    for (int i=0; i<n; i++ ){
        cout <<"Nhap a[ " << i << " ]= ";
        cin >> a[i];
    }
}
void XuatMang(int n, int a[]){
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}
void Hoadoi(int &A, int &B){
    int tam=A;
        A=B;
        B=tam;
}
void SapXep(int n, int a[]){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n+1; j++ ) {
            if (a[i]>a[j])
                Hoadoi(a[j],a[i]);
        }
    }
}
int TimKim(int x, int a[]){
    int trai=0, phai=n-1;
    int mid;
    while(trai<=phai){
        mid = (trai+phai)/2;
        if (a[mid]==x){
            return mid;
        } else if (a[mid] < x){
            phai = mid+1;
            return TimKim(x,a);
        } else{
            trai = mid-1;
            return  TimKim(x,a);
        }
    }
    return -1;
}
int main()
{
    int a[n] ,x;
    NhapMang(n,a);
    XuatMang(n,a);
    cout << endl;
    while (1)
    {
        cout << "Nhap x; ";
        cin >> x;
        if (x==-1) break;
        if (TimKim(x,a)==1){
            cout << "Tim thay"<< endl;
       }else{
           cout  << "Khong tim thay" << endl;
       }
    }
    
    return 0;
}