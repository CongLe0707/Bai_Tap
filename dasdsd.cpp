#include<iostream>
#include<cmath>
using namespace std;
void hoanchinh(int n)
{
	int sum=0;
    for(int i=1;i<=n/2;i++) {
	if(n%i==0) 
    	sum+=i;
	}
	if (sum==n)
		cout << "La so Hoan chinh";
	else 
		cout << "Khong phai so hoan chinh";
}
int main()
{   
  int n;
  cout << "Nhap n ";
  cin >> n;
  hoanchinh(n);

      return 0;
}