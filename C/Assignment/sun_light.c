#include <stdio.h>

int main (void)
{
	double light_speed = 300000; //���� �ӵ�  
	double distance = 149600000; //�¾�� ���� ���� �Ÿ� 
	
	double time;
	time = distance/light_speed; //�Ÿ� ���Ǽӵ��� ����
	
	printf("���� �ӵ��� %lfkm \n",light_speed);
	printf("�¾�� ���� ���� �Ÿ��� %lf \n",distance);
	printf("���޽ð��� %lf��\n",time);
	double m=((time/60)-0.311111);
	double s=0.311111*60;
	printf("%lf��%lf��\n",m,s);
	  
	int a,b; //����  
	
	a=((498/60)%60);
	b=(498%60);
	printf("%d��",a);
	printf("%d��",b);
	return 0; 
}
