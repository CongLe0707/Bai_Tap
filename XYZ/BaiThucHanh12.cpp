#include <iostream>
using namespace std;
int main() 
{
    int thang,nam;  
    cout << "Nhap thang ";
    cin >> thang;
    cout << "Nhap nam ";
    cin >> nam;
    
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        cout <<"Thang"<< thang << "co 31 ngay ";
    }
    else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
        cout <<"Thang "<< thang << " có 30 ngay ";
    }
    else if (thang==2){ 
        if (nam%4==0) {
            cout  << "Thang " << thang  << " co 29 ngay" << endl;
        } 
        else {
            cout  << "Thang " << thang  << " co 28 ngay" << endl;
        }
    }
    return 0;
}
