#include<iostream>
using namespace std;
int main() 
{
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    switch (thang) {
        case 1:
        case 3:
        case 5:     
        case 7:
        case 8:
        case 10:
        case 12: {
            if (ngay > 0 && ngay <= 31 ) {
                cout <<  "Ban da nhap hop le " <<ngay <<" / " << thang <<" / " << nam;            
            } else {
                cout << "Ba da nhap sai ngay ";
                return 0;
            }

            break ;
        }
        case 4:
        case 6:
        case 9:
        case 11: {
            if (ngay>0 && ngay <=30 ) {
                cout <<  "Ban da nhap hop le " << ngay <<" / " << thang <<" / " << nam;

            } else {
                cout << "Ban da nhap sai ngay thang " ;
                return 0;
            }
            break ;
        }
        case 2:  {
            if(nam % 4 == 0) {
					if(ngay > 0 && ngay <=29) 
                        cout <<  "ban da nhap hop le " << ngay <<" / " << thang <<" / " << nam;							
					
					else 
                       		cout << "Ban da nhap sai ngay thang ";	
                            return 0;		
					
				}
				else 
				{
					if(ngay > 0 && ngay <= 28)  
                        cout <<  "Ban da nhap hop le " << ngay <<" / " << thang <<" / " << nam;                        						
					
					else 
						 cout << "Ban da nhap sai ngay thang ";  
                         return 0;             
					
				}
        break ;
        }   
    }
    switch(thang){
		case 1:{
			if (ngay==31) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 <<" - "<< nam;
                cout << "\nNgay truoc  la 30 - " << thang <<" - "<< nam;
            } else if (ngay == 1) {
                cout <<"\nNgay tiep theo la "<< ngay+1 <<"  - " << thang << " - " << nam;
                cout <<"\nNgay truoc la 31 - 12  "<< nam-1;
            } else {
                cout <<"\nNgay tiep theo la "<< ngay+1 <<"  - " << thang << " - " << nam;
                cout<<"Ngay truoc la "<< ngay-1 <<"  - " << thang << " - " << nam;
            }
			break;
		}
		case 2:{
			if (nam%4==0){
				if (ngay==29) {    
                    cout <<"\nNgay tiep theo la 1 - " << thang+1 <<" - "<< nam;
                    cout <<"\nNgay truoc  la 28 - " << thang <<" - "<< nam;
                } else {
                    cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                    cout <<"\nNgay truoc la "<< ngay-1 << " - " << thang << " - " << nam;
                }
			}
			else {
				if (ngay==28) {
                    cout << "\nNgay tiep theo la 1 - "<< thang+1 << " - " << nam;
                    cout << "\nNgay truoc la 27 - "<< thang << " - " << nam;
                } else {
                    cout <<"\nNgay tiep theo la " << ngay+1<< " - "<< thang << " - " << nam;
                    cout <<"\nNgay truoc  la " << ngay-1<< " - "<< thang << " - " << nam;
                }
			}
			break;
		}
		case 3:{
			if (ngay==31) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 30 - " << thang << " - " << nam;
            } else {
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;               
            }
			break;
		}
		case 4:{
			if (ngay==30) {
                cout << "\nNgay tiep theo la 1 - "<< thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 29 - "<< thang << " - " << nam;
            } else {
                cout<<" \nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la 29 - "<< thang << " - " << nam;
            }
			break;
		}
		case 5: {
			if (ngay==31) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 30 - " << thang << " - " << nam;
            }
			else {
                cout << "\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 6: {
			if (ngay==30) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 29 - "<< thang << " - " << nam;
            }              
			else { 
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 7: {
			if (ngay==31) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 30 - " << thang << " - " << nam;
            }
			else {
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 8:{
			if (ngay==31) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 30 - " << thang << " - " << nam;
            }
			else{
                 cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                 cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 9:{
			if (ngay==30) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " <<nam;
                cout << "\nNgay truoc  la 29 - "<< thang << " - " << nam;
            }
			else {
                cout <<"\nNgay tiep theo la " <<ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 10:{
			if (ngay==31) {
                cout <<" \nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 30 - " << thang << " - " << nam;
            }
			else { 
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 11:{
			if (ngay==30) {
                cout << "\nNgay tiep theo la 1 - " << thang+1 << " - " << nam;
                cout << "\nNgay truoc  la 29 - "<< thang << " - " << nam;
            }
			else {
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang<< " - " << nam;
                cout << "\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}
		case 12:{
			if  (ngay==31) {
                cout << "\nNgay tiep theo la 1 - 1 - "<< nam+1;
                cout << "\nNgay truoc  la 30 - 12 - "<< nam;
                
            }
			else {
                cout <<"\nNgay tiep theo la "<< ngay+1 << " - " << thang << " - " << nam;
                cout <<"\nNgay truoc  la "<< ngay-1 << " - " << thang << " - " << nam;
            }
			break;
		}	
    default:
        cout << "Nhap khong hop le!!" << endl;
        break;
	}
    return 0;
}