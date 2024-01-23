#include <stdio.h>
#include "MenuModule.h"
#define ERROR "입력요류\n"

int main()
{
	int menu = 0;
	int subm = 0;
	
	while (menu != 3)
	{
		menu = MainMenu();
		switch (menu)
		{
			case 1;
			subm = IntMenu();
			switch (subm)
			{
				case 1 : IntSum(); break;
				case 2 : IntSub(); break;
				case 3 : IntDiv(); break;
				
				
			}
		}
	}
}
