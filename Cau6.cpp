#include<stdio.h>

int main() 
{
	unsigned int ngay, thang, nam;
	
	printf("Nhap ngay:");
	scanf("%u", &ngay);
	
	printf("Nhap thang:");
	scanf("%u", &thang);
	
	printf("Nhap nam:");
	scanf("%u", &nam);
	
	if(nam < 0) {
		printf("Ngay/Thang/Nam khong hop le");
	}
	else
	{
		switch(thang) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:     
			{
				if(ngay > 0 && ngay <=31 ) {
					printf("%u/%u/%u hop le!", ngay, thang, nam);
				}
				else {
					printf("%u/%u/%u khong hop le!", ngay, thang, nam);
				}
				break;
			}
			case 4: case 6: case 9: case 11 : {
				if(ngay > 0 && ngay <=30 ) {
					printf("%u/%u/%u hop le!", ngay, thang, nam);
				}
				else {
					printf("%u/%u/%u khong hop le!", ngay, thang, nam);
				}
				break;
			}
			case 2: {
				if((nam % 4 == 0 && nam % 100 != 0) || nam % 400==0) {
					if(ngay > 0 && ngay <= 29) {
						printf("%u/%u/%u hop le!", ngay, thang, nam);
					}
					else {
						printf("%u/%u/%u khong hop le!", ngay, thang, nam);
					}
				}
				else 
				{
					if(ngay > 0 && ngay <= 28) {
						printf("%u/%u/%u hop le!", ngay, thang, nam);
					}
					else {
						printf("%u/%u/%u khong hop le!", ngay, thang, nam);
					}
				}
				
				break;
			}
			default: {
				printf("%u/%u/%u khong hop le!", ngay, thang, nam);
				break;
			}
		}
	}
}
