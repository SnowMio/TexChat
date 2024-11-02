#include <ncurses.h>

int main() {
    initscr();
    move(5, 10);
    printw("Hello, curses world!\n");
    refresh();
    getchar();
    endwin();
    return 0;
}