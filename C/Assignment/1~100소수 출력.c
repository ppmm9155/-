#include <stdio.h>

void is_prime()
{
	int i,j;
	for(i=2;i<=100;i++)
	{
	for(j=2;j<i;j++)
	if(i%j ==0) break;
	if(i==j)
	printf("%d\n",j);
	}
}
int main(void)
{
	printf("1���� 100������ �Ҽ��� ����մϴ�.\n");
	is_prime();
	return 0;
}
