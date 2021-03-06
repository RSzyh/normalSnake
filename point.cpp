#include "point.h"
#include "tools.h"
#include <iostream>
#include <ncurses.h>

void Point::Block() {
    mvprintw(x, y, "◼ ");
    refresh();
}

void Point::Circle() {
    move(x, y);
    printw("● ");
    refresh();
}

void Point::Food() {
    move(x, y);
    printw("🍎 ");
    refresh();
}

void Point::Clear() {
    move(x, y);
    printw("  ");
    refresh();
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

int Point::setX(int nx) {
    x = nx;
}

int Point::setY(int ny) {
    y = ny;
}