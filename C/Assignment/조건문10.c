#include <stdio.h>

int main (void)
{
	//�Է�  
	int x,y;
	
	printf("������ �Է��Ͻÿ�\n");
	
	//if
	if(scanf("%d+%d",&x,&y))
	{
		printf(">>>%d+%d=%d",x,y,x+y);	
	}
	else if(scanf("%d/%d",&x,&y))
	{
		printf(">>>%d/%d=%d",x,y,x/y);
	}
	else if(scanf("%d*%d",&x,&y))
	{
			printf(">>>%d*%d=%d",x,y,x*y);
	}
	else if(scanf("%d%%%d",&x,&y))
	{
		printf(">>>%d%%%d=%d",x,y,x%y);
	}
	
	return 0;
	
	
}
