#include <stdio.h>

int main (void)
{
	char data[2001]=""; // ������ ���Ե� ���� stdin  
	fgets(data,2000,stdin); //fgets( ) �� ����ϸ� ���鹮�ڰ� ���ԵǾ��մ� ������ �Է¹޾� ������ �� �ִ�
	printf("%s",data);
	return 0; 
}
