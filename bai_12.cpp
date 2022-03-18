#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[20];
    int j = 0;
    cout<<"Nhap vao so nguyen n: ";
    cin>>n;
    while(n!=0){
        arr[j] = n % 10;
        n/=10;
        j++;        
    }
    bool isbool = true;
    for(int i = 0; i< j; i++){
        if(arr[i] <= arr[i+1] )
            isbool = false;
    }
    if(isbool)
        cout<<"Day so tang dan ";
    else
        cout<<"Day so khong tang dang";
    return 0;

    // test
    
}