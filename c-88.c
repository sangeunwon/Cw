#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
	/* char c1 = 'A';
	char c2 = 'B';
	
	printf("%d\n", c1 + c2);
	printf("%d\n", c1 > c2);
	printf("%d\n", c1 == 'A');
	printf("%d\n", 'b' > c2);
	printf("%d\n", 'a' - c1);
	
	char* sp1 = "C3coding";
	char* sp2 = "C3coding";
	
	printf("%d\n", sp1 == sp2);
	printf("%d\n", sp1 == "C3coding");
	printf("%d\n", sp2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", sp1 == "c3coding");
	
	printf("%d %d\n", sp1, "c3coding");
	printf("%d %d\n", sp2, "c3coding");
	
	char str1[] = "C3coding";
	char str2[10] = "C3coding";
	
	printf("%d\n", str1 == str2);
	printf("%d\n", str1 == "C3coding");
	printf("%d\n", str2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", str1 == "c3coding");
	
	char *sp = "C3coding";
	char str[] = "C3coding";
	int res;
	
	res = strcmp(sp, str);
	printf("%d\n", res);
	res = strcmp(sp, "C3coding");
	printf("%d\n", res);
	res = strcmp("C3coding", "C3coding");
	printf("%d\n", res);
	
	res = strcmp("test", "text");
	printf("%d\n", res);
	res = strcmp("text", "test");
	printf("%d\n", res);
	
	char start[15] = "C3";
	char ed[15] = "coding";
	int len;
	
	printf("start = %s %d\n", start, strlen(start)); //strlen = 문자열의 길이를 측정한다. 
	printf("ed = %s %d\n", ed, strlen (ed));
	
	strcat(start, ed); //strcat = 문자열 a의 뒤에 문자열 b를 접합하여 붙여주	는 역할. 
	len = strlen(start);
	printf("%s %d\n", start, len);
	
	int* p;
	int i;
	
	p = (int*)malloc(sizeof(int) * 5);
	
	for (i = 0; i < 5; i++)
	{
		p[i] = i;
		printf("%d", p[i]);
	}
	printf("\n");
	
	for (i = 0; i < 5; i++)
	{
		printf("%d", *p + i);
	}
	
	free(p);
	*/
	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	int *pr;
	
	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
	
	for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		printf("%d ", ar[i]);
	}
	pr = (int*)malloc(sizeof(int) * 20);
	for (i = 0; i < 20; i++)
	{
		pr[i] = i;
		printf("%d ", pr[i] + 1 );
	}
	
	free(pr);
	//return 0;
}
