#ifndef SELECTMENU_H_INCLUDED
#define SELECTMENU_H_INCLUDED

typedef enum
{
    BLACK,          /**< black color */
    BLUE,           /**< blue color */
    GREEN,          /**< green color */
    CYAN,           /**< cyan color */
    RED,            /**< red color */
    MAGENTA,        /**< magenta color */
    BROWN,          /**< brown color */
    LIGHTGRAY,      /**< light gray color */
    DARKGRAY,       /**< dark gray color */
    LIGHTBLUE,      /**< light blue color */
    LIGHTGREEN,     /**< light green color */
    LIGHTCYAN,      /**< light cyan color */
    LIGHTRED,       /**< light red color */
    LIGHTMAGENTA,   /**< light magenta color */
    YELLOW,         /**< yellow color */
    WHITE           /**< white color */
} COLORS;


enum{ARROW_UP = 72,ARROW_DOWN = 80, ENTER = '\r', SPACE = 32, ESCAPE = 27};

void textbackground (int color);

void textcolor (int color);

void gotoxy(int x, int y);

void flashbackground (int color, int ms);


#endif // SELECTMENU_H_INCLUDED
