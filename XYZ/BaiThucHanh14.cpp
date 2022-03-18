#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    float x;
    cout << "Nhap x: ";
    cin >> x; 
    float s1=0,s2=0,s3=0,s4=0;
    do {
    cout << "Nhap n: ";
    cin >> n; 
    } while (n<0);
    for (int i=1;i<=n; i++) {
        cout << i << " ";      
    }
    cout << "\n";
    for (int i=1;i<=n;i++)  {
        if (i%2==0) {
            cout << i <<" ";
            
        }
    }
    cout << "\n";
    for (int i=1; i<=n;i++) {
        if(i%2!=0) {
            if (i%3==0) {
                cout << i << " ";
            }
        }
    }
    // câu d1
    /*
    int i=1;
    while (i<=n) {
        s1=s1+i;
        i++;
    }
    cout << "S1="<<s1<<endl; */

    //câu d2
    /*int i=1;
     while (i<=n) {
        s2=s2+(pow((-1),i)*i);
        i++;
    }
    cout<<"S2 = "<<s2;
    */

   // câu d3
   /* int i=1;
    while (i<=n) {
        s3=s3+(1.0*i)/(i+1);
        i++;
    }
    cout<< "s3= "<<s3;
   */
  
  // câu d4
  /*
    int i=1;
    while (i<=n) {
        s4=pow(x,i);
        i++;
    }
    cout<< "s4= "<<s4;
  */
   // câu e
   /*
    int s5 = 0;
    int BienTam = n;

    while(BienTam != 0)
    {
        s5 = s5 + BienTam % 10;
        BienTam = BienTam/ 10;
    }
     cout << "s5= " <<s5 << endl;
   */
    return 0;
}