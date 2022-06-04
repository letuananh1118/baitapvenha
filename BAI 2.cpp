#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int tygia,usd,vnd;
	printf("nhap vao ty gia");
	scanf("%d",&tygia);
	printf("nhap so tien dola can doi");
	scanf("%d",&usd);
	vnd=usd*tygia;
	 printf("%d*%d=%d",tygia,usd,vnd);
	
	

	return 0;
}
