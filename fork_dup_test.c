#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
void	ft_1();
void	ft_2();
void	ft_3();
void	ft_4();
void	ft_5();
void	ft_6();
void	ft_7();
void	ft_8();
void	ft_9();
void	ft_0();

int main(int ac, char **av)
{
	if (av[1][0] == '1')
		ft_1();
	if (av[1][0] == '2')
		ft_2();
	if (av[1][0] == '3')
		ft_3();
/*	if (av[1][0] == '4')
		ft_4();
	if (av[1][0] == '5')
		ft_5();
	if (av[1][0] == '6')
		ft_6();
	if (av[1][0] == '7')
		ft_7();
	if (av[1][0] == '8')
		ft_8();
	if (av[1][0] == '9')
		ft_9();
	if (av[1][0] == '0')
		ft_0();*/
}

void	ft_1()
{
	int x = 0;
	int fd;

	fd = open("test", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd =  dup2(fd, 1);
	printf("start\n");
	int pid = fork();
	printf("forkato pid: %d\n", pid);
	if (pid == 0)  // parent
	{
		write(fd, "parent\n", 7);
	}
	else
	{
		write(fd, "par_child\n", 10);
	}
	close(fd);
}

void	ft_2()
{
	int x = 0;
	int fd;
	int fd2;

	fd = open("test", O_RDWR /*| O_TRUNC*/ | O_CREAT, 0666);
	fd =  dup2(fd, 1);
	printf("start\n");
	int pid = fork();
	printf("forkato pid: %d\n", pid);
	if (pid == 0)  // parent
	{
		write(fd, "parent\n", 7);
	}
	else
	{
		fd2 = open("test", O_RDWR | O_TRUNC | O_CREAT, 0666);
		fd2 =  dup2(fd2, 1);
		write(fd2, "par_child\n", 10);
	}
	close(fd);
	close(fd2);
}


void	ft_3()
{
	int x = 0;
	int fd;
	int fd2;

	fd = open("test", O_RDWR /*| O_TRUNC*/ | O_CREAT, 0666);
	fd =  dup2(fd, 1);
	printf("start\n");
	int pid = fork();
	printf("forkato pid: %d\n", pid);
	if (pid == 0)  // parent
	{
		write(fd, "parent\n", 7);
	}
	else
	{
		//write(1, "first_child\n", 12);
		// pid2 = fork();
		// if (pid2)
		// {
		// //	write(fd, "child\n", 6);
		// 	fd2 = open("test", O_RDWR | O_TRUNC | O_CREAT, 0666);
		// 	fd =  dup2(fd, fd2);
		// 	write(fd, "dup_child\n", 10);
		// //	write(fd, "child\n", 6);
		// }
		// else
		// {
			fd2 = open("test", O_RDWR | O_TRUNC | O_CREAT, 0666);
			fd2 =  dup2(1, fd2);
			write(fd2, "par_child\n", 10);
			
		//}
	}
	close(fd);
	close(fd2);
}
