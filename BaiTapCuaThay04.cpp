#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float denta ;
    float nghiem_1, nghiem_2, nghiemKep;
    
    cout << "Moi ban nhap gia tri a= ";
    cin >> a;
    cout << "Moi ban nhap gia tri b= ";
    cin >> b;
    cout << "Moi ban nhap gia tri c= ";
    cin >> c;
    if (a==0) {
       if (b!=0)
		cout<<"PT co nghiem x = "<<-c/b;
	else 
		if (c==0) 
			cout<<"PT vo so nghiem";
		else 
			cout<<"PT vo nghiem";
        return 0;
    }
    denta = (b*b) - (4*a *c);
    if ( denta < 0 )
    {
        cout << "Phuong trinh cua ban vo nghiem " << endl; 
        return 0;    
    }
    else {
        if ( denta == 0)
    { 
            nghiemKep = -b/(2*a);
            cout << " nghiem kep cua ban= " << nghiemKep << endl;
            return 0;
    }
        else
    {
            nghiem_1 = (-b + sqrt( denta ) ) / ( 2*a ) ;
            nghiem_2 = (-b - sqrt( denta ) ) / ( 2*a ) ;
            cout << " Nghiem thu nhat cua phuong trinh la: " << nghiem_1 << endl;
            cout << " Nghiem thu hai cua phuong trinh la: " << nghiem_2 << endl;
            return 0;
    } 
    }
    return 0;
}