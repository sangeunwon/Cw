#include <stdio.h>
#include <string.h>


struct Coordi {
	int x;
	int y;
};

int main()
{
	struct Coordi p1;
	struct Coordi p2 = {5, 9};
	struct Coordi p3;
	struct Coordi p4;
	
	p1.x = 2;
	p1.y = 3;
	
	printf("p1ÀÇ ÁÂÇ¥( %d, %d )\n", p1.x, p1.y);
	printf("p2ÀÇ ÁÂÇ¥( %d, %d )", p2.x, p2.y);

	struct circle {
		int x;
		int y;
		double r;
	};
	
	int main()
	{
		struct circle c1, c3, c4;
		
		printf(" %d %d %d\n ", c1.x, c1.y, c1.r);
		
		struct circle c2 = {5, 5, 4};
		printf(" %d %d %d \n", c2.r, c2.x, c2.y);
		
		printf(" %d %d %d\n", c3.r = c1.r, c3.x = c1.x, c3.y = c1.y );
		
		printf(" %d %d %d\n", c4.r = c2.r, c4.x = c2.y, c4.y = c2.x);
		
		return 0;
	}
	
	struct person {
		char name[10];
		int age;
		double height;
		int num;
		char name2[11];
		int age2;
		double height2;
	};
	
	int main()
	{
		struct person m1;
		struct person m2 = {"Çã³­¼³Çå", 13, 159.9};
		struct person m4 = {"¿ø»óÀº", 14, 177.1};
		};
		
		strcpy(m1.name, "Çã±Õ");
		m1.age = 19;
		m1.height = 168.34;
		
		strcpy(, "¿ø»óÀº");
		m4. = 19;
		m1.height = 168.34;
		
		//printf("%s %d %.1lf", m2);
		//printf("%d %.2lf", m1.age, m1.height);
		struct person m3;
		
		scanf("%d", m3);

		m3.num = 14;
		printf("%d", m3.num);
		return 0;
		
		
	
	
	struct circle {
		double r;
		double i;
		double s;
		
	};
	
	int main()
	{
		double y;
		struct circle c;
		scanf("%.3lf", &c.r);
		
		c.i = 2 * c.r * 3.14 * 1.0;
		c.s = c.r * c.r * 3.14 * 1.0;
		
		printf("%.3lf %d %d", c.i, c.r, c.s);
		return 0;
	}
	
	struct coordi{
		int x;
		int y;
	};
	
	struct circle {
		struct coordi cen;
		double r;
	};
	
	int main()
	{
		struct circle c1;
		struct circle c2 = {{4 , 5}, 12.4};
		struct circle c3;
		
		c1.cen.x = 7;
		c1.cen.y = 12;
		c1.r = 5;
		printf("%d %d %.0lf", c1.cen.x, c1.cen.y, c1.r);
		
		printf("%d %d %.1lf", c2.cen.x, c2.cen.y, c2.r);
		
		scanf("%d %d %d", &c3.cen.x, &c3.cen.y, &c3.r);
		printf("%d %d %d", c3.cen.x, c3.cen.y, c3.r);
		return 0;
	}


