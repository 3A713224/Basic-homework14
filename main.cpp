#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a,b,c;
	printf("�п�J�@��(a):\n");
	scanf("%d",&a);
	printf("�п�J�@��(b):\n");
	scanf("%d",&b);
	printf("�п�J�@��(c):\n");
	scanf("%d",&c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	  
	  printf("�O�T����");
	else
	  printf("���O�T����");	 
	return 0;
}
