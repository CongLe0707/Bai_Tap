#include<iostream>
#include<cstring>
using namespace std;
int DemTu(char *s) {
    int dem=0;
    if(s[0]!=' ')
		dem=1;
    for (int i=0; i<strlen(s)-1 ;i++) {
        if (s[i]==' ' && s[i+1]!=' ') {
            dem++;
        }
    }
    return dem;
}
void demkytu(char s[])
{
	int d=0;
	for (int i=0;i<strlen(s);i++)
	if (s[i]!=' ') d++;
	else
	{
		cout<<d<<" ";
		d=0;
	}
	cout<<d<<" ";
}

int main() 
{
    char s[256];
    cout << "Nhap Chuoi: ";
    gets(s);
    puts(s);
    cout << "So tu trong chuoi la " << DemTu(s) << endl;
    demkytu(s);

    return 0;
}