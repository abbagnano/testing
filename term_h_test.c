#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "my_define.h"

#define	PRINTC(a,b)	 (printf("%s : %c\n",a,b))
#define	PRINTS(a,b)	 (printf("%s : %s\n",a,b))
#define	PRINTI(a,b)	 (printf("%s : %d\n",a,b))

// void	ft_parent(struct termtype *my_termtype, struct term *my_term)
// {
// 	printf("%s\n", bell);
// 	printf("%s\n", my_term->_termname);
// }

// void	ft_print_bools(struct term *cur_term)
// {
// 	int b = 0;
// 	while (b <= 36)
// 		printf("%c\n", cur_term->type.Booleans[b++]);
// }

int main(int ac, char **av, char **env)
{
	struct term *cur_term;
	struct termtype type;
	struct termios my_term;

	char *term_buffer;

	cur_term = (struct term *)malloc(sizeof(struct term) * 1);
	char *termtype = getenv ("TERM");
	if (termtype == 0)
	  printf ("Specify a terminal type with `setenv TERM <yourtype>'.\n");	
	tgetent(term_buffer, termtype);
	cur_term->type = type;
	//my_termtype.term_names = "my_minishell";
	//int pid = fork();

	// ft_print_bools(&cur_term);
	// int b = -1;
	// while (b++ <= 36)
	// 	printf("cur_term->type.Booleans[%d]: %d\n", b, cur_term->type.Booleans[b]);
	
	// int n = -1;
	// while (n++ <= 32)
	// 	printf("cur_term->type.Numbers[%d]: %d\n", n, cur_term->type.Numbers[n]);
	
//	int s = -1;
//	while (s++ <= 393)
//		printf("cur_term->type.Strings[%d]: %s\n", s, cur_term->type.Strings[s]);

	//printf("cur_term->type.Strings[0]: %s\n", cur_term->type.Strings[0]);
	

}

//	char *matr[3] = { "qwe", "asd", "zxc"};


//	cur_term = (struct term *)malloc(sizeof(struct term) * 1);
//	new_term = set_curterm(cur_term);
//	printf("cols: %d\n", cur_term->type.Numbers[0]);
//	char *ret;
	//ret = (char *)malloc(sizeof(char) * 1024);
//	ret = tgetstr(cur_term->type.Strings[1], cur_term->type.Strings);
//	ret = tgetstr(bell, cur_term->type.Strings);
//	printf("%s\n", ret);
//	ret = tgetstr(display_clock, cur_term->type.Strings);
/*	printf("%s\n", display_clock);
	printf("%s\n", row_address );

	bell = tgetstr("\a\n", cur_term->type.Strings);
	printf("%s\n", bell);
	bell = tgetstr("\a\n", matr);
	printf("%s\n", bell);
	
	bell = "qweasd";
	printf("%s\n", bell);



	struct termtype my_term;
//	my_term.type = cur_term;
	my_term.term_names = "fuck_you_all";
	printf("%s\n", my_term.term_names);
	printf("%s\n", getenv("TERM"));

	printf("%d\n", cur_term->Filedes);
	printf("%s\n", cur_term->_termname);
*/

