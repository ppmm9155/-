#include <stdio.h>
#define SIZE 10

int main (void)
{
	char ans1;
	int ans2;
	int ans3;
	int i;
	int seats[SIZE]={0};
	
	while(1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(Y or N)");
		scanf("%c",&ans1);
		
		if(ans1=='y')
		{
			printf("------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("------------------------\n");
			for(i=0;i<SIZE;i++)
				printf("%d",seats[i]);
			printf("\n");
			printf("���° �¼��� �����Ͻðڽ��ϱ�?");
			scanf("%d,%d",ans2,ans3); //���2�� ����  
			//���1 
			if(ans2<=0||ans2>SIZE)
			{
				printf("1���� 10������ ���ڸ� �Է��Ͻÿ�\n");
				continue;
			}
			if(seats[ans2-1]==0) // ���� ���� �ʾҽ���  
			{
				seats[ans2-1]=1;
				printf("����Ǿ����ϴ�.\n");
			
			}
			else //�̹� ���� ������  
				printf("�̹� ����� �ڸ��Դϴ�.\n");
			//���2	
			if(ans3<=0||ans3>SIZE)
			{
				printf("1���� 10������ ���ڸ� �Է��Ͻÿ�\n");
				continue;
			}
			if(seats[ans3-1]==0) // ���� ���� �ʾҽ���  
			{
				seats[ans3-1]=1;
				printf("����Ǿ����ϴ�.\n");
			}
			else //�̹� ���� ������  
				printf("�̹� ����� �ڸ��Դϴ�.\n");
		 } 
		 else if(ans1=='n')
		 	return 0;
		
	}
	return 0;
	
}
