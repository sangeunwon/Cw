#include <stdio.h>

int main()
{
	
	
	/*
	int i = 0;
	int y = 0;

	for(i = 1; i <= 100; i--){
		printf("%d : ", i);
		for(y = 1; y <= i; y++)
		if(i % y == 0 ){
		
		printf("%d", y);
	}
	}
	
	}
	
	
	int num = 1;
	int y = 7;
	
	
	do{
		printf("%d Grade", num);
		
		do{
			printf("%d Class", y);
			y--;
			num++;
			
			printf("\n");
	
		}	
	}
	
	/*
	int n = 1;
	int F = 1;
	
	while(n == 1){
		printf("%d Grade", n);
		while(F == 7){
			printf("%d Class", F);
			F++;
		}
		F = 1;
		n--;
		
		----------------------------------------------------------------------------------
		//이건 시험 연습용 입니다; 
	}
	/*for(n = 1; n < 7; n++)
	{
		printf("%d Grade", n);
		
		for (F = 1; F < 8; F++)
			printf("%d Class", F);
			printf("\n")
	}
*/
	int a = 0;
	int g = 0;
	
	for (a = 1; a <= 5; a++){
		for(g = 1; g <= 5 - a; g++){
			printf(" ");
		}
		for ( g = 1; g <= a; g++) {
			printf("%1d", g);
		}
		printf("\n");
	}
}
		

	
	

