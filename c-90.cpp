#include <stdio.h>
#include <windows.h>

void GotoXY(int x, int y);

int main()
{
	int x, y = 5;
	
	for(x = 1; x < 80; x += 2)
	{
		system("cls");
		GotoXY(x, y);
		printf("¤±");
		Sleep(1);
	}
	printf("\n");
}

void GotoXY(int x, int y)
{
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
