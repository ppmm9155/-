#include <stdio.h>

int main (void)
{
	char ch;
	
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z') // A>= && Z<= A~Z  
	{
		printf("%c�� �빮���Դϴ�.\n",ch); 
	}
	else if(ch>='a'&&ch<='z') //a~z
	{
		printf("%c�� �ҹ����Դϴ�.\n",ch);
	}
	else if(ch>='0'&&ch<='9') //0~9 
	{
		printf("%c�� �����Դϴ�.\n",ch);
	}
	return 0;
} 
