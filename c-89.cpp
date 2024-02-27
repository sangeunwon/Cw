#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
//#define X_END 79
//#define Y_END 24

void GotoXY(int x, int y);
void Move_LeftRight_Key(char chr, int *x, int *y, int h);

int main()
{
	char key;
	int x = 0, y = 0, h = 0;
	
	do
	{
		srand(time(NULL));
		GotoXY(x, y);
		printf("@");
		key = getch();
		key = getch();
		Move_LeftRight_Key(key, &x, &y,h);
		system("cls");
	} while (key != 27);
}
void GotoXY(int x, int y)
{
	COORD Pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Move_LeftRight_Key(char key, int *x1, int *y1, int h)
{
	switch (key)
	{
		case 80:
		//*y1 = *y1 + 1;
		h = rand() % 2;
		if(h == 0){
			*y1 = *y1 - 0;
		}
		if(h == 1){
			*y1 = *y1 - 1;
		}
		if(h == 2){
			*y1 = *y1 - 2;
		}
		if(*y1 < 1) {
		//	*y1 = Y_END;
		}
		//*y1 = Y_END;
		break;
		
		case 72:
		*y1 = *y1 - 1;
		h = rand() % 2;
		if(h % 2 == 0){
			*y1 = *y1 + 0;
		}
		if(h % 2 == 1){
			*y1 = *y1 + 1;
		}
		if(h % 2 == 2){
			*y1 = *y1 + 2;
		}
		if(*y1 < 1) {
		//	*y1 = Y_END;
		}
		break;
		
	}
}
