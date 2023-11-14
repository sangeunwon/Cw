#include <stdio.h>
#include <stlidb.h>

int main()
{
	int n;
	n = 2;
	
	switch(3)
	{
		case 0:
			printf("Zero. \n");
		case 1:
			printf("one. \n");
		case 2:
			printf("two. \n");
		case 3:
			printf("three. \n");
	}
	
	int a = 0;
	int b = 0;
	
	scanf("%d", &a);
	b = a / 10;
	
	switch(b)
	{
		case 0:
		printf("yousonuyn \n");
		break;
			case 1:	
		printf("youth \n");
		break;
			case 2:	
		printf("adult \n");
		break;
			case 3:	
		printf("adult of adult \n");
		break;
			case 4:	
		printf("before Noin \n");
		break;
			case 5:
		printf("Noin \n");
		break;
			case 6:
		printf("100 age before \n");
		break;;
			case 7:
		printf("100 age!! \n");
	default:
		printf("100 \n");
	}
	
	int n = 0;
	
	scanf("%d", &n);
	
	
	if ( n == 0 )
	{
	printf("Zero \n");	
	}
	else
	
	switch(n % 2)
	{
		case 0:
		printf("Â¦¼ö\n");
		break;
		
		case 1:
		printf("È¦¼ö\n");
		break;
	}
	
	int num = 0;
	
	scanf("%d", &num);
	switch(num % 7)
	{
		case 0:
		printf("Friday \n");
		break;
		case 1:
		printf("Saturday \n");
		break;
		case 2:
		printf("Sunday \n");
		break;
		case 3:
		printf("Monday \n");
		break;
		case 4:
		printf("Tuesday \n");
		break;
		case 5:
		printf("Wendesday \n");
		break;
		case 6:
		printf("Tursday \n");
		break;
		
		{
			int b = 0;
			int y = 1;
			int z = 0;
			
			while(i = 0; i < 10, b++)
			{
				scanf("%d", &z);
				if( y < z )
				{
					y = z;
				}
			}
			printf("%d\n", y);
			printf("\n");
		}
		
	}
	return 0;
}
