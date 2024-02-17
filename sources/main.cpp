#include <curses.h>
#include <iostream>
#include <ncurses.h>
#include <clocale>
#include <unistd.h>

int main()
{
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    cbreak();
    nodelay(stdscr, TRUE);

    mvaddstr(0, 0, "\\(^o^)/");
    refresh();

    sleep(3);

    endwin();

    return 0;
}