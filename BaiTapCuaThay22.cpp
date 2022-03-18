#include<stdio.h>
#include<ctype.h>
#include<string.h>
char* cauc(char s[]);
char* chuanhoachuoi(char s[]);

int main()
{
	char s[256];
	strcpy(s,"ky THUAT lAp trINH");
	printf("%s",cauc(s));
	printf("\n");
	return 0;	
}
char* chuanhoachuoi(char s[])
{
	strlwr(s);
	for (int i=0;i<strlen(s)-1;i++)
	if (s[i]==' ' && s[i+1]!=' ') s[i+1]=toupper(s[i+1]);
	s[0]=toupper(s[0]);
	return s;
}
