#include <stdio.h>

int main()

{
	int a, b;
	
	a = 23;
	b = 24;
	printf("%d\n", a>b);
	printf("%d\n", a<b);
	
	return 0;
}

{
	printf("%d\n", 10>5&&8<3);
	printf("%d\n", 10>5||8<3);
	printf("%d\n", !(10<8));
}

{
int res;

res = 0 && 0;
printf("%d\n", res);
res = 0 && 1;
printf("%d\n", res);
res = 1 && 0;
printf("%d\n", res);
res = 1 && 1;
printf("%d\n", res);
res = 0 || 0;
printf("%d\n", res);
res = 0 || 1;
printf("%d\n", res);
res = 1 || 0;
printf("%d\n", res);
res = 1 || 1;
printf("%d\n", res);

printf("%d\n", !res);

}
{
int n;
n=2;
printf("%d \n", n%2==0);
n=3;
printf("%d \n", n%3==0);
	printf("%d \n", n%2==0 && n%3==0);

	
}

{
	int a;
	a=0;
	scanf("%d",&a);
printf("%d \n", a/7==5);
printf("%d \n", a/3==0);
printf("%d \n", a%5!=0);
printf("%d \n", a%3==0 && a/2==0);
printf("%d \n", a/4==0 || a/7==0);
}

{
printf("%d \n", 2*5000>15*1000);
printf("%d \n", (1000/2) - (1000/3) > 100 );
printf("%d \n", 500*5 + 1000*2 <=5000);
printf("%d \n", );
 )	
}

