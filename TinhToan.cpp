#include <stdio.h>
#define MAX 1000
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}
 
 
void XoaPhanTu(int a[], int &n, int pos){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}
int main(){
    int a[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(a, n);
    XuatMang(a, n);
   
    int  pos;
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &pos);
    XoaPhanTu(a, n, pos);
    printf("\nMang sau khi xoa: ");
    XuatMang(a, n);
    printf("\nDone!"); 
}
 