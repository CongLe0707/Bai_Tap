#include<iostream>
using namespace std;
int main()
{
    float Km;
    float tien;
    do {
        cout << "So KM ban di la: ";
        cin >> Km;
        if (Km<=0){
            cout << "Nhap lai: " << endl;
        }
    } while(Km<=0);
    if (Km <= 30 ){
        tien = Km*7000;
    }
    if (Km>30){
        tien =30*7000 + (Km-30)*4000;
    }
    cout << "So tien cua ban la: " << tien << " VND " << endl;
    return 0;
}