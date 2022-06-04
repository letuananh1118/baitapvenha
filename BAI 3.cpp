#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.14
int main(void)
{
	int r,dientich,chuvi;
	printf("ban kinh vong tron");
	scanf("%d",&r);
	dientich=3.14*r^2;
	printf("dien tich vong tron %d\n",dientich);
	chuvi=2*3.14*r;
	printf("chu vi vong tron %d\n",chuvi);
	return 0;
}
	
