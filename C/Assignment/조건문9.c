#include <stdio.h>

int main(void)
{
	//�����  
	int n;
	printf("�Ż���� �Է��Ͻÿ�:"); 
	scanf("%d",&n);
	
	//if
	if(n<100) //100 �̸�  
	{
		printf("small\n");
	 }
	 else if((n>=100)&&(n<200)) // 100�̻� 200�̸�  
	 {
	 	printf("medium\n");
	 }
	 else if(n>=200) //200�̻�  
	 {
		printf("large\n");	
	 }
	 
	 
	 return 0;
	  
}
