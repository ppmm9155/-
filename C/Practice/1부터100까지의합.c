#include <stdio.h> 

int main (void)
{
	int i,sum;
	i=1;
	sum=0;
	
	while(i<=100)  // i�� 100�ɋ����� 101�� �ݺ� 
	{
		sum += i; // sum= sum+i, 0=0+1,1=1+2 ...4950=4950+100    
		i++;
	}
	
	printf("1���� 100������ ���� %d �Դϴ�.",sum);
	return 0;
}
