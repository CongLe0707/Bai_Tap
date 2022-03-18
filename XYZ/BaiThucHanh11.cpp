#include<iostream>
using namespace std;
int main () 
{
    int n;
    cout << "Nhap n co 2 chu so : ";
    cin >> n;
    if (9<n && n<100) { 
        switch (n/10)
        {
            case 1: cout << " Muoi "; break;
            case 2: cout << " hai muoi"; break;
            case 3: cout << " ba muoi "; break;
            case 4: cout << "bon muoi "; break;
            case 5: cout << " nam muoi "; break;
            case 6: cout << " sau muoi "; break;
            case 7: cout << " bay muoi "; break;
            case 8: cout << " tam muoi "; break;
            case 9: cout << " chin muoi "; break;
        }
        switch (n%10)
        {
            case 1: cout << " mot "; break;
            case 2: cout << " hai "; break;
            case 3: cout << " ba ";  break;
            case 4: cout << " bon "; break;
            case 5: cout << " nam ";  break;
            case 6: cout << " sau "; break;
            case 7: cout << " bay "; break;
            case 8: cout << " tam  ";  break;
            case 9: cout << " chin "; break;
        }
    return 0;
    } 
    else cout << "So ban da nhap k phai 2 chu so";
    return 0;
}