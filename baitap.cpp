#include<iostream> 
using namespace std; 
int main()
{ 
  int a,b,c,d,e,f;
  cout<<"Nhap a = "; cin>>a;
  cout<<"Nhap b = "; cin>>b;
  cout<<"Nhap c = "; cin>>c;
  cout<<"Nhap d = "; cin>>d;
  cout<<"Nhap e = "; cin>>e;
  cout<<"Nhap f = "; cin>>f;
  int diemduong=0,diemam=0,diemk=0;
  if (a>0) diemduong++;
  if (a<0) diemam++;
  if (a==0) diemk++;
  if (b>0) diemduong++;
  if (b<0) diemam++;
  if (b==0) diemk++;
  if (c>0) diemduong++;
  if (c<0) diemam++;
  if (c==0) diemk++;
  if (d>0) diemduong++;
  if (d<0) diemam++;
  if (d==0) diemk++;
  if (e>0) diemduong++;
  if (e<0) diemam++;
  if (e==0) diemk++;
  if (f>0) diemduong++;
  if (f<0) diemam++;
  if (f==0) diemk++;
  cout<<"So luong so duong " << diemduong << endl;
  cout<<"So luong so am la " << diemam << endl;
  cout<<"So luong so 0 la " << diemk << endl;
  return 0;
} 
  
