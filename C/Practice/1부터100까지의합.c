#include <stdio.h> 

int main (void)
{
	int i,sum;
	i=1;
	sum=0;
	
	while(i<=100)  // i�� 100�ɋ����� �ݺ� 
	{
		sum += i;
		i++;
	}
	
	printf("1���� 100������ ���� %d �Դϴ�.",sum);
	return 0;
}
