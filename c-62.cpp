#include <stdio.h>
#include <stdlib.h>

int main()

{
	
	// This is using for coading class;;
	int a;
	
	a = 20;

	
	a += 4;
	printf("a = %d\n", a);
	a = 20;
	a /= 2;
	printf("a = %d\n", a);
	a = 20;
	a = a-9;
	printf("a = %d\n", a);
	a = 20;
	a = a*6+1;
	printf("a = %d\n", a);

	
	return 0;
}

{
	int a = 10;
	
	a++;
	a++;
	printf("a = %d\n", a);
	++a;
	++a;
	printf("a = %d\n", a);
	
 a = 10;
	
	a--;
	printf("a = %d\n", a);
	--a;
	printf("a = %d\n", a);
	
	return 0;

}

{
	int num1 = 10;
	int num2 = 20;
	
	int num3 = ++num1 + num2++;
	
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);	
}


{
	int a = 10;
	int b= 2;
	
	a -= a-b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a--;
	printf("a = %d\n", a);
	a %= b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	a -= b;
	printf("a = %d\n", a);
}

{
	int a, b;
	
	a = 10;
	b = a++;
	printf("a = %d b = %d\n", a, b); // 10,11
	b = ++a;
	printf("a= %d b = %d\n", a, b); // 10, 12	
	
	a = 20;
	b = a--;
	printf("a = %d b = %d\n", a, b); // 20,19
	b = --a;
	printf("a = %d b = %d\n", a, b); // 20,18
	
	return 0;
	
	{
		int a,h;
		
		h = 126;
		a = 44512;
	}

	{
	int num = 3;
	
	printf("%d\n", num -= 1);
	printf("%d\n", --num);
	printf("%d\n", num--);
	printf("%d\n", num);
} 

{
	int a = 12;
	int b = 3;
	
	b-- /= a;
	printf("a = %d b = %d\n", a, b);
	b-- /= a;
	printf("a = %d b = %d\n", a, b);
	a + b++;;
	printf("a = %d b = %d\n", a, b);
	a %=++b;
	printf("a = %d b = %d\n", a, b);
	a += --b;
	printf("a = %d b = %d\n", a, b);
	
	return 0;
	
}
