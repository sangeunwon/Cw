#include <stdio.h>

int main()

{
	int mind1;
	double mind2;
	
	printf("마음 속으로만 다음을 계산하세요. \n");
	printf("1. 태어난 달에 4를 곱합니다. \n");
	printf("2.그 수에 9를 더합니다.\n");
	printf("3.그 수에 25를 곱합니다.\n");
	printf("4.그 수에 태어난 날짜를 더합니다. \n");
	printf("마지막 그 수를 입력하세요. >>> \n");
	scanf("%d",&mind1);
	printf("입력한 수는 %d 입니다.",mind1);
	printf("\n");
	
	printf("5. 마음 속으로 당신이 좋아하는 10 미만의 자연수를 생각하세요. \n");
	printf("6. 당신의 키(소수점 2자리까지)에서 그 수를 빼세요. \n");
	printf("그 수를 소수점 1자리까지 입력하세요. >>> \n");
	scanf("%.1lf \n",&mind2);
	printf("입력한 수는 %.1lf 입니다. \n",mind2);
	
	int month = (mind1-255) / ((int)mind2-(int)mind2%100);
	int day = (mind1-255) % ((int)mind2-(int)mind2%100); 
	
	printf("당신의 생일은 %d월 %d일 입니다.\n",month,day);
	printf("window 7이나 10베타 버전 컴퓨터는 생일이 잘못 표기될수 있습니다. \n");
{
 	return 0;
	}
}
