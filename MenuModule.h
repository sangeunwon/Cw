#include <MenuModule.h>

int MainMenu()
{
	int n;
	
	printf("\t#### ��Ģ����###\n");
	printf("\t1. ������ ��Ģ����\n");
	printf("\t2. �Ǽ��� ��Ģ����\n");
	printf("\t3. ����\n");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &n);
	
	return n;
}

int IntMenu( )
{
	int im;
	
	printf("\t@@ ������ ���� @@\n");
	printf("\t1. ����\n\t2.����\n\t3.����\n\t5.�ڷ�\n");
	printf("�޴� �����ϼ��� : ");
	scanf("%d", &im);
	
	return im;
}
