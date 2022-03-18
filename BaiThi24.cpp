#include<iostream>
using namespace std;
void NhapN(int &n) {
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n<=0 || n>=10000);
}
int hoanchinh(int n)
{
	int sum=0;
    for(int i=1;i<=n/2;i++)
	if(n%i==0) 
    	sum+=i;
	return sum==n;
}
void XuatSohoanchinh(int n){
	for(int i=1;i<n;i++)
	    if(hoanchinh(i))
		    cout << i << " ";
}
int main() 
{   
    int n;
    NhapN(n);
    XuatSohoanchinh(n);
    return 0;
}