#include <stdio.h> 

int main(void)
{
	int number;
	printf("������ �Է��Ͻÿ�"); //���  
	scanf("%d",&number); // �����Է�  
	
	if(number%2==0) //2�γ��� ���������� 0�ΰ�?   
		printf("�Էµ� ������ ¦���Դϴ�.\n"); //0�ϰ�� ¦��  
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n"); // 0�� �ƴ� ��� Ȧ��  
		
	return 0;		
}
