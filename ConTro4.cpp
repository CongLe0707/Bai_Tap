#include<iostream>
using namespace std;
int main()
{
    int a[]={6,5,7,3,9};
    int *p=a;
    for (int i=0;i<5;i++) {
        cout << " Dia chi con tro tai  [ " << i <<" ] = " << p << endl; 
        cout << "Gia tri tai con tro [ " << i << " ] = " << *p << endl;
        p++;
    }
    return 0;  
}