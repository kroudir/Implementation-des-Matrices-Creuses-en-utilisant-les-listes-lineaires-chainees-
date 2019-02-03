#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "selectMenu.h"

static int __BACKGROUND = BLACK;
static int __FOREGROUND = LIGHTGRAY;

void textbackground (int color)
{
    __BACKGROUND = color;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
      __FOREGROUND + (color << 4));
}


void textcolor (int color)
{
    __FOREGROUND = color;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
      color + (__BACKGROUND << 4));
}

int selectMenu(char choices[5][50],int nbrChoices)
{
    int i=0,keyPressed;
    gotoxy(50,10);
    textbackground(BLUE);
    textcolor(WHITE);
    printf("%s",choices[i]);
    textbackground(BLACK);
    for(i=1;i<=nbrChoices;i++)
    {
        gotoxy(50,10+i);
        printf("%s",choices[i]);
    }
    i=0;
    while( keyPressed != ENTER)
    {
    int keyPressed2;
    keyPressed = getch();
    if(keyPressed==ENTER)
    {
        textbackground(BLACK);
        return i+1;
        break;
    }
    keyPressed2 = getch();
        if(keyPressed2 == ARROW_DOWN)
        {
            if(i<=nbrChoices)
            {
                gotoxy(50,10+i);
                textbackground(BLACK);
                printf("%s",choices[i]);
                i=(1+i)%(nbrChoices+1);
                gotoxy(50,10+i);
                textbackground(BLUE);
                printf("%s",choices[i]);
            }
        }
        if(keyPressed2 == ARROW_UP)
        {
            if(i>=0)
            {
                gotoxy(50,10+i);
                textbackground(BLACK);
                printf("%s",choices[i]);
                if(i==0) i=nbrChoices;
                else i--;
                gotoxy(50,10+i);
                textbackground(BLUE);
                printf("%s",choices[i]);
            }
        }
    }
}
