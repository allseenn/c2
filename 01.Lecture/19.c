#include <ncurses.h>
#include <unistd.h>

int main()
{
    initscr();
    printw("Hello World !!!");
    printw("\nPress any key to continue... ");
    refresh(); // попробуйте включить и выключить
    sleep(5);
    getch();
    endwin();
    return 0;
}
