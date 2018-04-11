 /******************
 * 
 * 控制台版贪吃蛇
 * 
 * **************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

// 移动方向
#define UP 1
#define RIGHT 2
#define DOWN 3
#define LEFT 4

// 死亡方式
#define KISSME 1
#define KISSWALL 2

// 菜单
#define MENU_START 1
#define MENU_SETTING 2
#define MENU_EXIT 3

#define POINT(x, y) (y * 80 + x)
#define GETX(p) (p % 80)
#define GETY(p) (p / 80)

HANDLE Console;

void setPosition(int x, int y);
void refresh();
void refreshGrid();
void refreshFood();
void refreshSnake();
int showMenu();

void main()
{
    CONSOLE_CURSOR_INFO cur_info = { sizeof(CONSOLE_CURSOR_INFO), 0};
    Console = GetStdHandle(STD_OUTPUT_HANDLE);

    return 0;
}

void setPosition(int x, int y) 
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(Console, coord);
}



int showMenu() {

	return MENU_START;
}

void refresh()
{
    
}

void refreshFood()
{

}

void refreshGrid()
{

}

void refreshSnake() 
{

}

