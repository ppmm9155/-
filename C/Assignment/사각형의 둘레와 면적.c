#include <stdio.h>

int main (void)
{
	double width,hight,area,perimeter;
	printf("���� ���̸� �Է��Ͻÿ�\n");
	scanf("%lf",&width);
	printf("������ ���̸� �Է��Ͻÿ�\n");
	scanf("%lf",&hight);
	
	area=width*hight;
	perimeter=2*(width+hight);
	
	printf("�簢���� ����: %lf\n",area);
	printf("�簢���� �ѷ�: %lf\n",perimeter);
	return 0;
}
