#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout << "Keo bua bao ch1 :";
    cin >> ch1;
    cout << "Keo bua bao ch2 :";
    cin >> ch2;
    if (ch1=='b' && ch2=='b'|| ch1=='a' && ch2=='a'|| ch1=='k' && ch2=='k') {
        cout << "Hoa"<<endl;
    }
    else {
        if (ch1=='b'&&ch2=='a' || ch1=='a' && ch2=='k' || ch1=='k' && ch2=='b') {
            cout << "Nguoi choi thu nhat thang "<<endl;
        } 
        else {
            cout << "Nguoi choi thu  hai thang " <<endl; 
        }
           
    }
    return 0;
}