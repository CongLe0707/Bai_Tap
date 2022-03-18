#include<iostream>
#include<cmath>
using namespace std;
#define maxn 1000
struct toado
{  
    int x;
    int y;
};
void NhapToaDo(toado p[], int &n) {
    cout << "Nhap n ";
    cin >> n;
    for (int i=1; i<=n;i++) {
        cin >> p[i].x >> p[i].y;
    }
}
void CauA(toado p[], int n) {
    int d1=0,d2=0,d3=0,d4=0,d5=0;
    for (int i=1; i<=n;i++) {
        if (p[i].x>0 && p[i].y>0)
            d1++;
        if (p[i].x<0 && p[i].y>0)
            d2++;
        if (p[i].x<0 && p[i].y<0)
            d3++;
        if (p[i].x>0 && p[i].y<0)
            d4++;
        if (p[i].x==0 || p[i].y==0)
            d5++;
    }
    cout << "So diem nam goc phan tu thu I: " << d1 << endl;
    cout << "So diem nam goc phan tu thu II: " << d2 << endl;
    cout << "So diem nam goc phan tu thu III: " << d3 << endl;
    cout << "So diem nam goc phan tu thu IV: " << d4 << endl;
    cout << "So diem nam tren truc toa do: " << d5 << endl;
}
float kc(toado a, toado b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
void CauB(toado p[], int n)
{
    float  min = kc(p[1],p[2]);
    int  viTri1 = 1;
    int  viTri2 = 2;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <=n+1; j++) { 
            float khoangCach = kc(p[i],p[j]);
            if (khoangCach < min){
                min = khoangCach;
                viTri1 = i;
                viTri2 = j;
            }
        }    
    }
    cout <<"Cau b " << viTri1<< " " << viTri2 << endl;
    cout << "Gia tri nho nhat cua 2 diem " << min ;
}
int main () {
    toado p[maxn];
    int n;
    NhapToaDo(p,n);
    CauA(p,n);
    CauB(p,n);
    return 0;
}
