#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int hight,bottom,dientich;
	printf("nhap vao chieu cao ,nhap vao canh day :");
	scanf("%d%d",&hight,&bottom);
	dientich=(hight*bottom)/2;
	printf("(%d*%d)/2=%d",hight,bottom,dientich);
	return 0;
}
	
