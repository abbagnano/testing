#include <stdio.h>
#include <unistd.h>


int main()
{
	int x = 0;
	printf("start\n");
	int pid = fork();
	printf("forkato pid: %d\n", pid);
	if (pid == 0)  // parent
	{
		printf("parent\tx:%d\n", x);
		x = 3;
		printf("parent\tx:%d\n", x);
	}
	else
	{
		printf("child\tx:%d\n", x);
		x = 2;
		printf("child\tx:%d\n", x);
	}
}