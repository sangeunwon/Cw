#include <stdio.h>

int main()

{
	/*char ch1, ch2;
	
	ch1 = 'a';
	ch2 = 'A';
	printf("%d %d\n", ch1, ch2);
	
	ch1 = ch1 + 32 ; 
	ch2 = ch2 -32 ;
	printf("%c %c\n", ch1, ch2);
	
	char ch;
	
	printf("write : ");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n", ch, ch);
	
	char str1[ ] = {'H', 'i', ' ', 'C', '3', 'C', 'o', 'd', 'i', 'n', 'g'}; 
	char str2[ ] = {'H', 'i', ' ', 'C', '3', 'C', 'o', 'd', 'i', 'n', 'g', '\10'}; 
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	*
	char str1[15] = "Coding is fun";
	char str2[ ] = "Coding is fun";
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	
	char word[20];
	
	printf("write your own word : ");
	scanf("%s", word);
	printf("입력하신 단어는 %s 입니다.", word);
	
	char sentence[80];
	
	puts("write your sentence : ");
	gets(sentence);
	puts(sentence);
	printf("%s", sentence);
	
	char str[ ] = {'H', 'i', ' ', 'C', '3',' ', 'C', 'o', 'd', 'i', 'n', 'g', '\0'}; 
	
	int n = 0;
	while(str[n] != '\0' ){
		
	
	printf("%c", str[n]);
	n++;
	*/
	char str[ ] = "Coding is computer prgramming";
	int t = 0;
	while(str[t] != '\0' ){
		printf("%c", str[30 - t]);
		t++;
	
	}
	
	
	
	return 0;
}
