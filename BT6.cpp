#include<iostream>
using namespace std;
#define maxn 30000
void Nhap(int a[], int &n)
{
    do{
		cout << "Nhap n ";
        cin >> n;
    }while(n<1);
    for(int i=0;i<n;i++)
    {
       cout <<"a[ " << i <<  " ]= ";
	   cin >> a[i];
    }
}
int Tongsochan(int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        { if(a[i]>0)
            if (a[i]%2==0)
                {
                    s=s+a[i];
                }
        }
    return s;
}
int Demsoam(int a[],int n)
{
    int demam=0;
    for(int i=0;i<n;i++)
        { if(a[i]<0)
            demam++;
        }
    return demam;
}
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
float Trungbinhcong(int a[], int n)
{
    int sum=0,dem=0;
        for(int i=0;i<n;i++)
        { if (a[i]%5==0)
            sum += a[i];
            dem++;
        }
		float p=(float)sum/dem;
    return p;
}
int kiemtra(int a[],int n)
{
    int kt=0;
    for(int i=0;i<n;i++)
         if(a[i]==0) return 1;
         else return 0;
}
int main ()
{
    int a[maxn],n;
    Nhap(a,n);
    cout << "Cau 4: " <<  Trungbinhcong(a,n) << endl;
    cout << "Cau 5: " << Tongsochan(a,n) << endl;
	cout << "Cau 6: " <<  Demsoam(a,n) << endl;
    cout << "Cau 7: " <<  Fibonacci(n) << endl;
    cout << "Cau 8: " <<  kiemtra(a,n) << endl;
    return 0;
}