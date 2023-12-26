#include <stdio.h>
int addnum(int, int);
int subnum(int*, int*);
int mulnum(int*, int*);
int divnum(int, int);
//int add(int* num1, int* num2);

int main()
{
	/*char ch = 'A';
	
	char*pch;
	pch = &ch;
	
	printf("%p\n", pch);
	printf("%c\n", *pch);
	

	int number1 = 5;
	int number2 = 10;
	
	add(&number1, &number2);
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);

int a; double b; char c;
int *pa; double *pb; char *pc;

a = 153; b = 12.7; c = 'J';
pa = &a; pb = &b; pc = &c;
printf("pa = %x pb = %x pc = %x\n", pa, pb, pc);
printf("&a = %p &b = %p &c = %p\n", &a, &b, &c);

printf("a = %d b = %lf c = %c\n", a, b, c);
printf("*pa = %d *pb = %lf *pc = %c\n", *pa, *pb, *pc);
return 0;	

int n;
int *pn, *pr;
int ar[10] = {10,20,30,40,50,60,70,80,90,100};

n = 49;
pn = &n;
pr = &ar[2];
printf("%d %d %p %p\n", n, ar[2], pn, pr);

*pn = 59;
*pr = 33;
printf("%d %d\n", *pn, *pr);


int a, b;
int add, sub, mul, div;
int *pa, *pb;

pa = &a;
pb = &b;
a = 30;
b = 55;
add = *pa + *pb;
printf("add = %d\n", add);

*pa = 9;
*pb = 7;
sub = *pa - *pb;
printf("sub = %d\n", sub);

*pa = 12;
b = 3;
mul = *pa * *pb;
printf("mul = %d\n", mul);

a = 45;
*pb = 5;
div = *pa/ *pb;
printf("div = %d\n", div);
*/
int n,m;
int *pa = &n, *pb = &m;

printf("정수 입력:");
scanf("%d %d", &n, pb);

addnum(a, b);
subnum(&a, &b);
mulnum(pa, pb);
divnum(*pa, *pb);

return 0;
}
