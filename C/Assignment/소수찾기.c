#include <stdio.h>

int is_prime(int);
int get_integer(void);
main() //main
{
	int n,result;
	n = get_integer();
	result = is_prime(n);
	
	if(result == 1)
		printf("%d�� �Ҽ� �Դϴ�.\n",n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n",n);
	return 0;	
	
}
int get_integer(void) //�Է�  
{
	int n;
	printf("������ �Է��Ͻÿ�");
	scanf("%d",&n);
	return n;
}

int is_prime(int n)
{
	
	int divisors=0;
	int i;
	for (i=1;i<=n;i++)
	{
		if(n%i == 0)
			divisors++;
	}
	return (divisors ==2);
}


