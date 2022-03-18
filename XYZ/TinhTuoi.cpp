#include<iostream>
using namespace std;
void NhapMang(int n, int a[]){
	for(int i=0;i<n;i++)
		cin >> a[i];
}
void XuatMang(int n, int a[]){
	for (int i=0; i<n; i++){
		cout << a[i] <<" ";
}
}
void Hoan_Doi(int &A, int &B) {           
    int tam=A;
        A=B;
        B=tam;
}
void HoanDoi(int n, int a[]) {
    for(int i=0; i < n-1 ; i++){
        for(int j=i+1; j<n; j++) {  
			if (a[i]>a[j])                      
            	Hoan_Doi(a[j], a[i]);    
        }
    }
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	NhapMang(n,a);
	XuatMang(n,a);
	HoanDoi(n,a);
	cout << endl;
	XuatMang(n,a);
	return 0;
}