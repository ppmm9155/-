#include <stdio.h> 

int main (void)
{
	int i =1;
	
	loop:
	{
		printf("%d*%d=%d\n",3,i,3*i); // 3,i,3*i 
		i++; //1�� ����  
		if(i==10)goto end; // 10�������� end  
		goto loop;
		
		end:
		return 0;
		
	}
}
