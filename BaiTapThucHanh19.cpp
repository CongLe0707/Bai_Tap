#include<iostream>
#include<cmath>
using namespace std;
void NhapN(int &n) {
    do {
        cout << "Nhap n ";
        cin >> n;
    } while (n<0 || n>10);
}
void NhapMang(int n, int a[]){
    for (int i=0 ; i<n;i++) {
        cout << " Mang [ " << i << " ] = ";
        cin >> a[i];
    }
}
void XuatMang (int n, int a[]) {
    cout << "Mang da nhap la ";
    for (int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
}
void XuatSoChiaCho3(int n, int a[]) {
    cout << "Nhung gia tri chia het cho 3 = ";
    for (int i=0; i<n; i++) {
        if (a[i]%3==0) {
            cout << a[i] << " ";
        }
    }
}
float Tong_Mang(int n, int a[]) {
    float tong=0;
    for(int i=0;i<n;i++) {
        tong=tong+a[i];
    }
    return tong;
}
int Diem(int n, int a[]){
    int diem=0;
    for (int i=0;i<n;i++) {
        diem++;
    }
    return diem;
}
float TBC(int n, int a[]) {
    float tbc = Tong_Mang(n,a) / Diem(n,a);
    return tbc;
}
float TongDuong(int n, int a[]) {
    float tong=0;
    for (int i=0; i<n;i++) {
        if (a[i]>0) {
            tong = tong + a[i];
        }
    }
    return tong;
}
int DiemSoDuong(int n, int a[]){
    int diem=0;
    for (int i=0;i<n;i++) {
        if (a[i]>0){
            diem++;
        }
    }
    return diem;
}
float TBSD (int n , int a[]) {
    float tb = TongDuong(n,a) / DiemSoDuong(n,a);
    return tb;
}
// TỪ H ĐẾN O
int SNT (int n){
	if (n<2) return 0;
	int k=sqrt(n);
	for (int i=2;i<=k;i++)
	if (n%i==0) return 0;
	return 1;		
}
void InSNT(int n, int a[]) {
    cout << "Cac so nguyen to trong mang la ";
    for (int i=0; i<n; i++) {
        if (SNT(a[i])) {
            cout << a[i] << " ";
        }
    }
}
int DiemSNT(int n, int a[]) {
    int diem=0;
    for (int i=0; i<n; i++) {
        if (SNT(a[i])==1) {
            diem++;
        }
    }
    return diem;
}
float TongSNT (int n, int a[]) {
    float tong=0;
    for (int i=0; i<n;i++) {
        if (SNT(a[i])==1) {
            tong = tong + a[i];
        }
    }
    return tong;
}
float TBSNT(int n, int a[]) {
    float tbsnt = TongSNT(n,a)/DiemSNT(n,a);
    return tbsnt;
}
int VTDuongDauTien (int n, int a[]) {
	{
		for (int i=0; i<n; i++)
		if (a[i]>0)
		return i; 
	} 
	return -1;
}
int VTDuongCuoiCung (int n, int a[]) {
    {
        for (int i=n-1 ;i>=0;i--)
            if (a[i] > 0)
            return i;
    }
    return -1;
}
int MAX(int n, int a[]) {
    int max=a[0];
    for (int i=1;i<n;i++){
        if (max<a[i])
           max=a[i];
    }
    return max;
}
int Min(int n, int a[]) {
    int min=a[0];
    for (int i=1;i<n;i++){
        if (min>a[i])
           min=a[i];
    }
    return min;
}
int GiaTriAmLonNhat(int n, int a[]) {
    int max=0;
    for(int i=0; i<n; i++) {
        if(a[i]<0) {
            max = a[i];
                break;                          
        }
    }
    for(int i=0; i<n; i++) {
        if(a[i]<0 && a[i]>max)
            max = a[i];
    }
    return max;
}
int main() 
{
    int n;
    NhapN(n);
    int a[n];
    NhapMang(n,a);
    XuatMang(n,a);
    cout << "\n";
    XuatSoChiaCho3(n,a);
    float tong = Tong_Mang(n,a);
    cout <<"\nTong mang = " << tong << endl;
    float tbc =TBC(n,a);
    cout << "Trung binh cong cua mang = " << (float)tbc << endl;
    float tbsd=TBSD(n,a);
    cout << "Trung binh so duong trong mang = " << (float)tbsd << endl;
    InSNT(n,a);
    cout << "\nSo luong SNT trong mang la " << DiemSNT(n,a) << endl;
    cout << "Tong cac so nguyen to = " << TongSNT(n,a) << endl;
    float tbsnt = TBSNT(n,a);
    cout << "TBSNT = " << (float)tbsnt << endl;
    cout << "Vi tri nguyen duong dau tien la " << VTDuongDauTien(n,a) << endl;
    cout << "Vi tri nguyen duong cuoi cung la " << VTDuongCuoiCung(n,a) << endl;
    cout << "Gia tri lon nhat cua mang  = " << MAX(n,a) << endl;
    cout << "Gia tri nho nhat cua mang  = " << Min(n,a) << endl;
    cout << "Gia tri am lon nhat = " << GiaTriAmLonNhat(n,a) << endl;
    return 0;
}