#include <stdio.h> 

int main (void)
{
	int number;
	
	printf("������ �Է��Ͻÿ�");
	scanf("%d",&number); //�Է�  
	
	if(number <0) // number <0 �����̸����     
		number = -number; //  x = -x 
	
	printf("���밪�� %d �Դϴ�.\n",number); 
	
	return 0;	
}
