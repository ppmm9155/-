#include <stdio.h> 

int main (void)
{
	//���� 
	int x,y,r;
	
	//�Է� 
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��,������)");
	scanf("%d %d",&x,&y);
	
	//
	while(y!=0) // y=�ƴҋ� ���� , y=0�̵Ǹ� ����  
	{
		r= x % y; // 
		x=y; // 
		y=r; // 
	}
	
	printf("�ִ� ������� %d �Դϴ�.\n.",x);
	
	return 0;
	
}
