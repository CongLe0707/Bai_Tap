//Bài 1: Cho 2 số nguyên A và B được nhập vào từ bàn phím. Tính tổng, hiệu, tích, thương (chú ý thương được làm tròn 2 số thập phân).
#include<stdio.h>
#include<conio.h>
int main()
{
	float T,L,H;
		printf("Nhap vao diem mon Toan = "); 
        scanf("%d",&T);
	    printf("\nNhap vao diem mon Ly  = "); 
        scanf("%d",&L);
	    printf("\nNhap vao diem mon Hoa  = "); 
        scanf("%d",&H);
	    printf("\nKet qua:");
	    
	float DTB=(T+L+H)/3;
	printf("\n\nDiem trung binh cua 3 mon Toan, Ly, Hoa la %.2f diem.",DTB); 
    return 0; 
}
