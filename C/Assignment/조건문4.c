#include <stdio.h>

int main (void) 
{
	int n1,n2,n3;
	//�Է�  
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&n1);
	printf("�и� �Է��Ͻÿ�:");
	scanf("%d",&n2);
	
	//if�� 
	if(n1==0) // ���ڰ� 0�� ���  
	{
		printf("0���� ������ �����ϴ�.\n");  
	}
	else
	{
		n3=n2/n1; // ���ڰ� 0�� �ƴѰ�� , ex) n3=n2/0   
		printf("����� %d �Դϴ�.\n",n3);
		
	}
	return 0;
	
	 
}
