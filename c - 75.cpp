#include <stdio.h>

void inputdata(int *p);
	void printarray(int ar[]);
	int getmax(int *ar);
	int getmin(int *ar);
	
	//*수업 (c2 ~ c3) 코딩 연습장 입니다.* 
	
int main()
{
	/*int n, *p;
	*p = 70;
	
	printf("%d %d", n, *p);
	
	*
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int i;
	
	*(ar+0) = 34;
	*(ar+1) = 21;
	
	printf("%d %d\n", ar[0], *(ar+0));
	printf("%d %d\n", ar[1], *(ar+1));
	printf("%d %d\n", *(ar+2), *(ar+3));
*/
	int ar[ ] = {11, 21, 31, 41, 51, 61, 71};
	int *p, *q, *r;
	
	p = ar;
	q = &ar[1];
	r = (ar+2);
	
	printf("%d %d\n", *p, ar[0]);
	printf("%d %d\n", *q, *(ar+1));
	printf("%d %d\n", *r, ar[2]);
	
	int ay[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int *x;
	int i;
	int lenx = sizeof(ay[0]) / sizeof(ay[0][0]);
	 
	for(i = 0; i < lenx; i++)
	{
		printf(" %d ", ay[0][i]);
	}
	
	char Vox[] = "Hello C3 coding";
	char name[20] = "C3 coding";
	char *b, *u;
	
	b = Vox;
	u = name;
	
	printf("%d %d\n", Vox, name);
	printf("%s %s\n", Vox, name);
	
	char *spf = "vox";
	char *spx = "Lead";
	
	printf("%d %d\n", spf, "vox");
	printf("%d %d\n", spx, "Lead");
	printf("%d %d\n", spf, "vox");
	printf("%d %d\n", spx, "Lead");
	
	//int main()
	{
		int ar[10] = {0};
		int max, min;
		
		inputdata(ar);
		max = getmax(ar);
		min = getmin(ar);
	}
	return 0;
}
