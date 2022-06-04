#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.14
int main(void)
{
	int radius,hight,V;
	printf("nhap ban kinh day,nhap chieu cao tru");
	scanf("%d%d",&radius,&hight);
	V=3.14*radius^2*hight;
	printf("The tich la %d\n",V);
	return 0;
}
	
