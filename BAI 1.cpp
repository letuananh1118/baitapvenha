#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int n;
	printf("nhap so n :");
	scanf("%d",&n);
	if(n>0)
	 printf("n la so nguyen duong");
	if(n<0)
	 printf("n la so nguyen am");
	else
	 printf("n bang 0");

	return 0;
}
