#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap vao canh a: ";
  
    cout << "Nhap vao canh b: ";
   
    cout << "Nhap vao canh c: ";
    cin >> a>>b>>c;
    if (a<0 || b<0||c<0) {
        cout << "Ba canh tam giac phai lon hon 0: ";
    }
    else {  
        if( a<b+c && b<a+c && c<a+b ){
            if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
                cout<<"Day la tam giac vuong";
            else 
                if(a==b && b==c)
                cout << "Day la tam giac deu";
                else
                    cout<<"Day la tam giac can"; 
        }
        else
            cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    }
    return 0;
}