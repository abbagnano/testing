
#include        <stdio.h>
#include        <curses.h>
#include        <term.h>
#include        <stdlib.h>

int     main()
{
  const char *name;
  char  *bp;
  char  *term;
  int   height;
  int   width;

  bp = malloc(sizeof(*bp) * 1);
  name = "TERM";
  if ((term = getenv(name)) == NULL)
    return (1);
  printf("My terminal is %s.\n", term);
  printf("tgetent: %d\n", tgetent(bp, term));
  height = tgetnum ("li");
  width = tgetnum ("co");
  printf("H : %d\nL : %d\n", height, width);
  free(bp);
  return (0);
}

/*
#include <curses.h>
#include <term.h>				//  /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/term.h
#include <termios.h>
#include <unistd.h>	
*/
// gcc -lncurses term_test.c 

/*
tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs
*/
/*
int main()
{
	int r;
	char *c;
	struct termios my_term;
	read(0, &c, 10);

	printf("'str\n'.. %d\n", tgetent(c, "str"));
	printf("'ter'.. %d\n", tgetent(c, "ter"));
	printf("''.. %d\n", tgetent(c, ""));
	printf("'qwe'.. %d\n", tgetent(c, "qwe"));
	printf("'gcc'.. %d\n", tgetent(c, "gcc"));

	read(0, &c, 10);
}
*/

//https://www.youtube.com/watch?v=lV-OPQhPvSM&list=PL2U2TQ__OrQ8jTf0_noNKtHMuYlyxQl4v