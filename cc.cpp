#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	// duyệt từ đầu mảng đến cuối mảng - để nhập từng giá trị cho các phần tử của mảng
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i]; 
	}
}

void Xuat_Mang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";  
	}
}

bool Kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		if (n == 2)
		{
			return true;
		}
		else
		{
			if (n % 2 == 0)
			{
				return false;
			}
			else
			{
				for (int i = 2; i < n; i++)
				{
				
					if (n % i == 0)
					{
						return false;
					}
				}
					
			}
		}
	}
	return true;
}

void In_Cac_Phan_Tu_La_So_Nguyen_To(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		if (Kiem_Tra_So_Nguyen_To(a[i]) == true)
		{
			cout << a[i] << "  ";
		}
	}
}

int main()
{
	int a[100]; 

	int n; 
	do
	{
		cout << "\nNhap so luong phan tu mang: ";
		cin >> n;
		if (n <= 0 || n > 100)
		{
			cout << "\nSo luong phan tu mang vuot qua qui dinh.";
		}
	} while (n <= 0 || n > 100);

	
	cout << "\nNHAP MANG\n";
	Nhap_Mang(a, n);
	
	cout << "\n XUAT MANG\n";
	Xuat_Mang(a, n);

	cout << " CAC SO NGUYEN TO\n";
	In_Cac_Phan_Tu_La_So_Nguyen_To(a, n);


	return 0;
}