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
					if(ngay > 0 && ngay <=29) {
                        cout <<  "ban da nhap hop le " << ngay <<" / " << thang <<" / " << nam;							
					}
					else {
                       		cout << "Ban da nhap ngay khong hop le ";	
                            return 0;		
					}
				}
				else 
				{
					if(ngay > 0 && ngay <= 28) { 
                        cout <<  "Ban da nhap hop le " << ngay <<" / " << thang <<" / " << nam;                        						
					}
					else {
						 cout << "Ban da nhap ngay khong hop le ";  
                         return 0;             
					}
				}
        break ;
        }
        default:
            cout << "Nhap khong hop le!!" << endl;
            return 0;
        break;   
    }
    cout << endl;
    for (int i=1;i<thang;i++) {
        switch (i)
        { 
            case 1: 
            case 3:
            case 5:     
            case 7:
            case 8:
            case 10:
            case 12: {
                ngay=ngay+31;
                break;    
            }
            case 4:
            case 6:
            case 9:
            case 11:{
                ngay=ngay+30;
                break;
            }
            case 2:  {
                if(nam % 4 == 0) {
					ngay=ngay+29;
                } else {
                    ngay=ngay+28;	
			    }
                break ;
            }
        }                   
    }
    cout << "La ngay thu " << ngay << " trong nam " << endl;	
    return 0;
}
    
  