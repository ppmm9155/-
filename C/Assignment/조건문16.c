#include <stdio.h>

int main (void)
{
	int a,b,c;
	
	printf("�ﰢ���� 3���� �Է��Ͻÿ� \n");
	scanf("%d\n%d\n%d",&a,&b,&c); 
	
	if((a+b)>c&&(b+c)>a&&(a+c)>b) //(a+b) > c, (b+c) > a , (a+c) >b 
	{
		printf(" �ǹٸ� �ﰢ��  �Դϴ�.\n");
	}
	else
	{
		printf("�ǹٸ� �ﰢ���� �ƴմϴ�.\n");
	}
	return 0;
}
