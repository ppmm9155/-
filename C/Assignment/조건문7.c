#include <stdio.h>

int main (void)
{
	int score;
	//�Է� 
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&score);
	
	//if
	if(score >=90)
	{
		printf("�հ�:����A\n");
	}else if (score >=80)
	{
		printf("�а�:����B\n");
	 }else if (score >=70)
	 {
	 	printf("�հ�:����C\n");	
	 }else if (score>=60)
	 {
	 	printf("�հ�:����D\n");
	 }
	 else 
	 {
	 	printf("���հ�:����F\n");
	 }
	 
	 return 0;
	
	
}
