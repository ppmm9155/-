#include <stdio.h>

int main (void)
{
	double f_temp;
	double c_temp;
	//ȭ���µ� 
	printf("ȭ���µ��� �Է��Ͻÿ�:");  
	scanf("%lf",&f_temp);
	//�����µ�	
	c_temp = 5.0/9.0*(f_temp -32);
	//((double)5 / (double)9) * (f_temp-32);
	//5.0 / 9.0 * (f_temp -32);
	//((double)5 /9) * (f_temp -32);
	printf("�����µ��� %lf�Դϴ�\n",c_temp); 
	
	return 0 ;
}
