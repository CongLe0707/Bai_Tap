#include<iostream>
using namespace std;
void Nhap(int &a, int &b) {
    do{
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    }while (a<=0 && a%7!=0 || b<=0 && b%7!=0);
}
int UCLNAB(int a, int b){
    
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
int BCNN(int a,int b){
    return (a*b)/UCLNAB(a,b);
}
int main ()
{
    int a,b;
    Nhap(a,b);
    int USCL = UCLNAB(a,b);
    cout << "Uoc so chung lon nhat " << USCL << endl;
    int bcnn=BCNN(a,b);
    cout << "Boi chung nho nhat " << bcnn << endl;
    
    return 0;
    
}