#include <stdio.h>
#include <math.h>

int main (void)
{
	//�Է�  
	double a,b,c,dis;
	
	printf("��� a�� �Է��Ͻÿ�:"); 
	scanf("%lf",&a); //a 
	
	
	printf("��� b�� �Է��Ͻÿ�:");
	scanf("%lf",&b); //b
	
	
	printf("��� c�� �Է��Ͻÿ�:");
	scanf("%lf",&c); //c
	//
	
	if(a==0)  //���� 0�ϋ�  �߱�  
	{
		printf("�������� ���� %f �Դϴ�.",-c/b); //-c/b �߱�   
	}
	else
	{
		dis=(b*b-4.0*a*c);
		if(dis >=0)
		{
			printf("�������� ���� %f�Դϴ�.\n",(-b+sqrt(dis))/(2.0*a)); //0���� Ŭ�� �Ǳ�  
			printf("�������� ���� %f�Դϴ�.\n",(-b-sqrt(dis))/(2.0*a)); // 0���� ������  ���  
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.");
	}
	
	return 0; 
	
	
}
