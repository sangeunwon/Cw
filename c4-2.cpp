#include <stdio.h>

int main()

{
	int mind1;
	double mind2;
	
	printf("���� �����θ� ������ ����ϼ���. \n");
	printf("1. �¾ �޿� 4�� ���մϴ�. \n");
	printf("2.�� ���� 9�� ���մϴ�.\n");
	printf("3.�� ���� 25�� ���մϴ�.\n");
	printf("4.�� ���� �¾ ��¥�� ���մϴ�. \n");
	printf("������ �� ���� �Է��ϼ���. >>> \n");
	scanf("%d",&mind1);
	printf("�Է��� ���� %d �Դϴ�.",mind1);
	printf("\n");
	
	printf("5. ���� ������ ����� �����ϴ� 10 �̸��� �ڿ����� �����ϼ���. \n");
	printf("6. ����� Ű(�Ҽ��� 2�ڸ�����)���� �� ���� ������. \n");
	printf("�� ���� �Ҽ��� 1�ڸ����� �Է��ϼ���. >>> \n");
	scanf("%.1lf \n",&mind2);
	printf("�Է��� ���� %.1lf �Դϴ�. \n",mind2);
	
	int month = (mind1-255) / ((int)mind2-(int)mind2%100);
	int day = (mind1-255) % ((int)mind2-(int)mind2%100); 
	
	printf("����� ������ %d�� %d�� �Դϴ�.\n",month,day);
	
}
