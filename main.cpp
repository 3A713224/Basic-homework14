#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a,b,c;
	printf("請輸入一邊(a):\n");
	scanf("%d",&a);
	printf("請輸入一邊(b):\n");
	scanf("%d",&b);
	printf("請輸入一邊(c):\n");
	scanf("%d",&c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	  
	  printf("是三角形");
	else
	  printf("不是三角形");	 
	return 0;
}
