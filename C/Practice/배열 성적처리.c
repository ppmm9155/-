#include <stdio.h>

int main (void)
{
	int kor[3],eng[3],mth[3];
	int tot, total=0;
	int howmany, n;
	//�ο� �Է�  
	printf("����� ������ ó���ϵ��� �����Ͻðڽ��ϱ�? :");
	scanf("%d",&howmany);
	//���� �Է� 
	for(n=1;n<=howmany;++n)
	{
		printf("%d���� �л��� ���� �Է�:",n);
		scanf("%d %d %d",&kor[n],&eng[n],&mth[n]);		
	}
	
	printf("\n----------------------------------");
	printf("\n����\t����\t����\t����\t����\t���\n");
	for(n=1;n<=howmany;++n)
	{
		tot=kor[n]+eng[n]+mth[n];
		total += tot;
		printf("%d\t%d\t%d\t%d\t%d\t%5.2f\n",n,kor[n],eng[n],mth[n],tot,tot/3.0);
	}
	printf("\n----------------------------------");
	printf("\n\t�� ����: %d �� ���: %5.2f\n",total,total/(float)(3*howmany));
	printf("\n----------------------------------");	

}
