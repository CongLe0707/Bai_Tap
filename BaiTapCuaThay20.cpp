#include<iostream>
using namespace std;
int main() 
{
    char ch1;
    cout << "Nhap ki tu " ;
    cin >> ch1;
    cout << isalnum(ch1) << endl;
    cout << isalpha(ch1) << endl;
    cout << isdigit(ch1) << endl;
    cout << islower(ch1) << endl;
    cout << isupper(ch1) << endl;
    cout << isspace(ch1) << endl;
    cout << tolower(ch1) << endl;
    cout << toupper(ch1) << endl;
    cout << toascii(ch1) << endl;
    return 0;
}