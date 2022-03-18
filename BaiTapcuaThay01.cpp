#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Nhap a,b,c = "; cin>>a>>b>>c;
	float tong,tbc;
	tong=a+b+c;
	tbc=(a+b+c)/3;
	int max = a;
    if (max <b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }       
    int min = a ; 
    if (min> b) {
        min = b;
    }
    if ( min>c ) {
        min=c; 
    } 
	cout << "Vay so lon nhat trong ba so la " << max << endl;
    cout << "\nVay so nho nhat trong ba so la " << min << endl;
	cout <<"\nTong cua ba so = " <<tong<< endl;
	cout <<"\nTrung binh cong cua ba so = "<<(float)tbc<<endl;
	return 0;
}
