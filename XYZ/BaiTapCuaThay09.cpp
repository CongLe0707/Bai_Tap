#include<iostream>
using namespace std;
int sodao(int n)
{
	int s=0;
	while(n > 0)
	{
		s = s*10+n%10;
		n = n / 10;
	}
	return s;
}
}
int main () {
    int n;
    cout << " Nhap n " ;
    cin >> n
}