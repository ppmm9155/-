#include <stdio.h> 

int main (void)
{
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&number);
	
	switch(number){
		case 0:
			printf("����\n");
			break ;
		case 1:
			printf("�ϳ�\n");
			break ;
		case 2:
			printf("��\n");
			break;
		case 3:
			printf("����\n");
			break;	
	}
	return 0; 
}
