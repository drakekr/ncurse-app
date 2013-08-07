#include <ncurses.h>

int main()
{
	initscr();
	printw("PC Tools");
	refresh();
	getch();
	endwin();
	return 0;
}
