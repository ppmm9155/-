#include <stdio.h>

int main (void)
{
	int grade,n;
	float sum, average;
	
	n=0;
	sum=0;
	grade=0;
	
	printf("���� �Է��� ���� �Ϸ��� ������ �Է��Ͻÿ�\n");
	printf("_________________________________________\n");
	
	while(grade>=0) //0�̻��ϋ� ���� 
	{
		printf("������ �Է��Ͻÿ�");
		scanf("%d",&grade);
		
		sum+=grade; // ���� ��  
		n++; //�����°�  
	 } 
	 
	 sum=sum-grade; //�հ� ����  
	 n--; //���������� ����  
	 average=sum/n; // ���=�հ�/��������  
	 
	 printf("������ ����� %f �Դϴ�.\n",average);
	 
	 return 0;
	 
}
