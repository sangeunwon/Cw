#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	int n= 10;
	
	while (n <= 17)
	
	{
		printf("%d ", n);
		n++;
	}
	printf("\n after while finished, n : %d\n", n);
*/
	int s;
	s= 0;
	scanf("%d", &s);
	int nr = s % 10;
	
	while (nr >= 15)
	{
		printf("%d ", nr);
		nr--;
	
	}
	printf("\n after while finished, nr : %d\n", nr);
	printf("\n all ns : %d\n", nr);
	/*
	int ir;
	ir = 11;
	
	do{
	printf("%d ", ir);
	ir++;
	
}while(ir<=10);

	int i; 
	i = 11;
	while(i<=10)
	{
		printf("%d ", i);
		i++;
	}
	
	int i = 0;
	
	while (i < 10)
	{
		printf("iÀÇ °ª: %d\n", i);
		i++;
		if (i == 5)
		{
			break;
		}
	}
	
	int i = 0;
	
	while (i < 10)
	{
		if (i == 5)
		{
			i++;
			continue;
		}
		printf("i : %d\n", i);
		i++;
	}
	
	int n , num;
	n = 0;
	num = 1;
	
	scanf("%d ", &n);
	
	while(n <=num);
	
	num = num * -1;
	printf("%d", num);
	
	num++;
	*/
	

	return 0;
}
