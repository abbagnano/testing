#include <stdio.h>
#include <unistd.h>

int g_y = 666;

int main()
{
	int x = 0;
	printf("start\n");
	int pid = fork();
	if (pid != 0)		// child
	{
		printf("child\tx:%d\tg_y:%d\n", x, g_y);
		x = 2;
		g_y = 999;
		printf("child\tx:%d\tg_y:%d\n", x, g_y);
	}
	else
	{
		printf("parent\tx:%d\tg_y:%d\n", x, g_y);
		x = 3;
		g_y = -666;
		printf("parent\tx:%d\tg_y:%d\n", x, g_y);
	}
}