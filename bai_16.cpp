#include <iostream>
using namespace std;
int main() {
	int ngay,thang,nam;
	cout<<"Nhap ngay : ";
	cin>>ngay;
	
	cout<<"\nNhap thang: ";
	cin>>thang;
	
	cout<<"\nNhap nam: ";
	cin>>nam;
	
	switch(thang){
		case 1:{
			if (ngay==31) 
                cout << "\n1 - " << thang+1 <<" - "<< nam;
			else 
                cout << ngay+1 <<"  - " << thang << " - " << nam;
			break;
		}
		case 2:{
			if (nam%4==0){
				if (ngay==29)    
                    cout <<"\n1 - " << thang+1 <<" - "<< nam;
				else 
                    cout << ngay+1 << " - " << thang << " - " << nam;
			}
			else {
				if (ngay==28) 
                    cout << "\n1 - "<< thang+1 << " - " << nam;
				else 
                    cout << ngay+ 1<< " - "<< thang << " - " << nam;
			}
			break;
		}
		case 3:{
			if (ngay==31) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 4:{
			if (ngay==30) 
                cout << "\n1 - "<< thang+1 << " - " << nam;
			else 
                cout<< ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 5: {
			if (ngay==31) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 6: {
			if (ngay==30) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 7: {
			if (ngay==31) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 8:{
			if (ngay==31) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else
                 cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 9:{
			if (ngay==30) 
                cout << "\n1 - " << thang+1 << " - " <<nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 10:{
			if (ngay==31) 
                cout <<" \n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
		case 11:{
			if (ngay==30) 
                cout << "\n1 - " << thang+1 << " - " << nam;
			else 
                cout << ngay+1 << " - " << thang<< " - " << nam;
			break;
		}
		case 12:{
			if  (ngay==31) 
                cout << "\n1 - 1 - "<< nam+1;
			else 
                cout << ngay+1 << " - " << thang << " - " << nam;
			break;
		}
    default:
        cout << "Nhap khong hop le!!" << endl;
	}
	return 0;
}