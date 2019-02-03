#include "Header.h"

/*---------------------------------------------------------------------------------------*/
/*                             Les procédures d'Affichage                                */
/*----------------------------------------- ---------------------------------------------*/
void delay ( char chaine [1000], int t)//ecrire une chaine de caractere avec repos de t mili second apres chaque lettre
{
    int i = 0;
    for (i=0; i < strlen(chaine);i++)
    {
        printf("%c", chaine[i]);
        Sleep(t);
    }
}
//---------------------------------------------------------------------------------
void color(int t,int f)//changer la couleur d'criture est du font
{
    	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    		SetConsoleTextAttribute(H,f*16+t);
}
//---------------------------------------------------------------------------------
void gotoxy ( short x, short y )//Aller a un espace precis dans la fenetre console
{
  COORD coord = {x, y};
  SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}
//------------------------------------------------------------------------------------------------------------------------
void Acceuil()//l'entre du programme
{
    int i,j;
    gotoxy(30,6);
    delay("REPUBLIQUE ALGERIENNE DEMOCRATIQUE ET POPULAIRE ",50);
    gotoxy(35,9);
    delay("ECOLE SUPERIEURE D'INFORMATIQUE (ESI)",50);
    SIGNALER("TP01 D'ALGORITHME",45,15,5);
    system("cls");
    WHITE();
    gotoxy(40,5);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    \n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);BLEU();gotoxy(67,5);printf("%c%c%c",0xDB,0xDB,0xDB);
    WHITE();
    gotoxy(40,6);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    \n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);BLEU();gotoxy(67,6);printf("%c%c%c",0xDB,0xDB,0xDB);
    WHITE();
    gotoxy(40,7);
    printf("%c%c%c          %c%c%c           \n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,8);
    printf("%c%c%c          %c%c%c           %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,9);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,10);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,11);
    printf("%c%c%c                 %c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,12);
    printf("%c%c%c                 %c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,13);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(40,14);
    printf("%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c    %c%c%c\n",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    putchar('\n');putchar('\n');putchar('\n');putchar('\n');
    gotoxy(50,18);
    printf("Chargement...\n");
    WHITE();
    for(j=0;j<101;j+=25)
    {
        gotoxy(54,22);
        printf("%d%%",j);
        gotoxy(31,20);
        for (i=0;i<13;i++)
        {
             printf(" %c %c",0xDB,0xDB);Sleep(50);
        }
        gotoxy(31,20);
        for (i=0;i<13;i++)
        {
             printf(" %c %c",0xDF,0xDF);Sleep(50);
        }
    }

    putchar('\n');putchar('\n');
    gotoxy(28,24);delay("Appuyez sur n'importe qu'elle touche pour continuer ... ! ! ",5);
    getch();
    system("cls");
    ROUGESIGN("Bienvenue Dans notre programme de manipulation des Matrice creuse",25,10);
    BLEUSIGN("Realise par : KHOUTIR Amir | KACI Mohammed Younes",33,14);
    WHITESIGN("Encadre par Mme L.CHARABI\n",43,18);
    WHITE();gotoxy(27,22);delay("Appuyez sur n'importe qu'elle touche pour continuer ... ! ! ",5);
    getch();
    system("cls");
}
//---------------------------------------------------------------------------------
void ROUGESIGN(char ch[],int x,int y)//Ecrire un texte en rouge en clignotant
    {
        ROUGEBACK();
        gotoxy(x,y);
        delay(ch,10);
        ROUGEINV();
        gotoxy(x,y);
        delay(ch,10);
        ROUGEBACK();
        gotoxy(x,y);
        delay(ch,10);
    }
void BLEUSIGN(char ch[],int x,int y)//Ecrire un texte en bleu en clignotant
{
        BLEUBACK();
        gotoxy(x,y);
        delay(ch,10);
        BLEUINV();
        gotoxy(x,y);
        delay(ch,10);
        BLEUBACK();
        gotoxy(x,y);
        delay(ch,10);
}
void WHITESIGN(char ch[],int x,int y)//Ecrire un texte en Blanc en clignotant
{
        WHITEINV();
        gotoxy(x,y);
        delay(ch,10);
        BLEUBACK();
        gotoxy(x,y);
        delay(ch,10);
        WHITEINV();
        gotoxy(x,y);
        delay(ch,10);
}

//-----------------------------------------------------------------------------
void DrapeauFR(int x,int y)//dessiner le drapeau de la france a partir du x,y
{
    BLEU();
    gotoxy(x,y);  printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+1);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+2);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+3);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+4);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+5);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+6);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+7);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+8);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+9);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    WHITE();
    gotoxy(x+10,y);  printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+1);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+2);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+3);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+4);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+5);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+6);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+7);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+8);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+10,y+9);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    ROUGE();
    gotoxy(x+20,y);  printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+1);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+2);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+3);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+4);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+5);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+6);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+7);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+8);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+20,y+9);printf("%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
}
void DrapeauEN(int x ,int y )//dessiner le drapeau de l'angltaire a partir du x,y
{
    WHITE();
    gotoxy(x,y);  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+1);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+2);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+3);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    ROUGE();
    gotoxy(x,y+4);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+5);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    WHITE();
    gotoxy(x,y+6);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+7);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+8);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);
    gotoxy(x,y+9);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c",0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB);

    ROUGE();
    gotoxy(x+13,y);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+1);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+2);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+3);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+4);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+5);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+6);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+7);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+8);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    gotoxy(x+13,y+9);printf("%c%c%c%c",0xDB,0xDB,0xDB,0xDB);
    WHITE();
}
//-------------------------------------------------------------------------------------------------------------------------
int choixLangue(int x,int y)//Choisir la langue en utilisant le clavier
{
    int choix;
    DrapeauFR(x-5,y);
    DrapeauEN(x+45,y);
    gotoxy(6,20);
    char menuOfChoices[2][50]=
    {
        "Francais",
        "English",
    };
    choix=selectMenu(menuOfChoices,2);
    return choix;
}
//-----------------------------------------------------------------------------
void SIGNALER(char ch[],int x,int y,int nb)//Flasher un texte
{
    int i ;

    for(i=0;i<nb;i++)
    {
        gotoxy(x,y);
        WHITEINV();
        printf("%s",ch);
        Sleep(250);
        gotoxy(x,y);
        WHITE();
        printf("%s",ch);
        Sleep(250);
    }
}
/**<*--------------------------------------------------------------------------- */
/**<*            Graphisme Francais                                              */
/**<*-------------------------------------- -------------------------------------*/
//-----------------------------------------------------------------------------------------------------------
void retourMenuFR() // Affiche un message pour retourner au menu
{
    ROUGE();
    delay("\nAppuyez sur n'importe qu'elle touche pour retourner au menu ...!!",25);
    getch();
    WHITE();
}
//-----------------------------------------------------------------------------------------------------------

void quitterFR()//Afficher message de quitter le programme
{
    gotoxy(35,10);
    delay("MERCI POUR L'UTILISATION DE NOTRE ",50);
    gotoxy(48,13);
    delay("PROGRAMME\n",50);
    getch();
}
//----------------------------------------------------------------------------
void MenuAffMatFR(int n)//Menu pour les matrice a afficher (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQue ce que vous voulez affichez :\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n%d-Tous les matrice \n",n+1);
    JAUNE();printf("\n\nEntre votre choix: ");WHITE();
}
//----------------------------------------------------------------------------
void MenuSomFR(int n)//Menu pour les matrice a sommer(n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQue ce que vous voulez sommer :\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
}
//----------------------------------------------------------------------------
void MenuProdFR(int n)//Menu pour les matrice a faire le produit (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle matrices vous voulez faire le produit:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
}
//-----------------------------------------------------------------------------
void MenuProdScalFR(int n)//Menu pour les matrice a faire le produit par scalaire (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle matrices vous voulez produisez par un scalaire :\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n\nEntrer votre Choix :");
}
//----------------------------------------------------------------------------
void MenuDetFR(int n)//Menu pour les matrice a calculer le determinant (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle matrices vous voulez calculez le determinent:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n\nEntrer votre Choix :");
}
//-------------------------------------------------------------------------------
void MenuInvFR(int n)//Menu pour les matrice a calculer l'inverse (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle matrices vous voulez calculez l'inverse:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n\nEntrer votre Choix :");
}
//-------------------------------------------------------------------------------
void MenuTransFR(int n)//Menu pour les matrice a calculer la transpose (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle matrices vous voulez calculez la transposez:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n\nEntrer votre Choix :");
}
//-------------------------------------------------------------------------------
int SaveRestoreFR()//Menu pour sauvgarder ou restaurer
{
    int choix;
    printf("\nQue est ce que vous voulez faire: \n");
    printf("\n1-Sauvgarder\n\n2-Restaurer\n");
    printf("\n\nEntrer votre Choix :");
    scanf("%d",&choix);
    return choix;
}
//-------------------------------------------------------------------------------
void MenuSysFR(int n)//Menu pour les matrice dy systeme d'equation (n le nombre des matrice)
{
    int i;char c='A';

    printf("\nQuelle sont les matrices de votre systeme :\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrice %c\n",i+1,c);
        c++;
    }
    printf("\n\nEntrer votre Choix :");
}
//------------------------------------------------------------------------------
void  ProgramFR()//programme principale en francais
{
    tab2d mat;
    Matrice matLLC,sommat,prodmat,invmat,transmat;
    int lig=0,col=0,continu=1,i,j,k,f,repAff;
    TabMatrice tabMat[MAX];     //tableau qui contient les marice manipulé
    int nbMat=0,nbMatsauv;   //nombre des matrice manipulé
    char ch='A';     //nom des matrices
    int mat1,mat2,scal;  //numéro de matrice
    int retour=1;
    float det;
    FILE *fichier=NULL;

    do
    {
         system("cls");
         switch(choixMenuFR())
        {
            case 1:
                    ch='A';//nom de premiere matrice
                    SIGNALER("1-Construire des matrice",10,14,3);
                    system("cls");
                    if (nbMat!=0)//l'utilisateur a deja creer des matrice
                    {
                        ROUGE();printf("\nNote:\n");
                        WHITE();printf("Les matrice deja manipule seront supprimer !!\nsi vous voulez les garder..sauvgarder les avant de reecrer des matrice\n\n1-Continue\n\n2-retour\n\nEntrer votre choix : ");
                        scanf("%d",&retour);
                        if (retour==2)retourMenuFR();//si il choix de retour vers le menu alors le programme fait le retour
                    }
                    if (retour==1)//l'utilisateur choisis continuer ou c'est la premiere fois qu'il creer des matrice
                    {
                        system("cls");
                        printf("\nCombien de matrice Voulez vous manipulez !! ");
                        scanf("%d",&nbMat);
                        if (nbMat==0)
                        {
                            JAUNE();printf("\nVous ne voulez creez aucune matrice !! ok !! \n");WHITE();
                        }
                        else
                        {
                                for(i=0;i<nbMat;i++)//creation des matrice est les sauvgarder dans un tableau
                                {
                                    JAUNE();printf("\nConstruction de matrice %c :\n",ch);WHITE();
                                    ScanMatFR(mat,&lig,&col);
                                    TransMat(mat,lig,col,matLLC);
                                    for(j=0;j<lig;j++)
                                    {
                                        tabMat[i].Mat[j]=matLLC[j];
                                    }

                                    tabMat[i].NomMat=ch;
                                    tabMat[i].nblig=lig;
                                    tabMat[i].nbcol=col;
                                    ch++;
                                }
                                VERT();printf("\nVotre matrices a ete cree :) \n");WHITE();
                        }
                        ch--;
                        retourMenuFR();
                    }
                    break;
            case 2:
                    SIGNALER("2-Afficher des matrice",10,16,3);
                    system("cls");
                    if (nbMat==0)//il ya aucune matrice a Afficher
                    {
                        JAUNE();printf("\nVous n'avez pas cree des matrice !!  ...!!\n");WHITE();
                    }
                    else
                    {
                        MenuAffMatFR(nbMat);
                        scanf("%d",&repAff);
                        system("cls");
                        if ((repAff==0)||(repAff>nbMat+1))//le choix 0 et choix superier a le nombre de matrice+1 n'est pas valide
                            {
                                ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                            }
                        else if(repAff==nbMat+1)//Afficher tout les matrice
                            {
                                for(i=0;i<nbMat;i++)
                                {
                                    VERT();printf("\nMatrice %c\n",tabMat[i].NomMat);WHITE();
                                    AffichMatFR(tabMat[i].Mat,tabMat[i].nblig,tabMat[i].nbcol);
                                }
                            }
                            else//Afficher la matrice choisis
                            {
                                VERT();printf("\nMatrice %c\n",tabMat[repAff-1].NomMat);WHITE();
                                AffichMatFR(tabMat[repAff-1].Mat,tabMat[repAff-1].nblig,tabMat[repAff-1].nbcol);
                            }
                    }
                    retourMenuFR();
                    break;
            case 3:
                SIGNALER("3-Calculer la somme du deux matrice",10,18,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    VERT();printf("\nVous pouvez faire la somme du deux matrice ..ok..!\n");WHITE();
                    MenuSomFR(nbMat);
                    JAUNE();
                    printf("\nMatrice 1 :");
                    scanf("%d",&mat1);
                    printf("\nMatrice 2 :");
                    scanf("%d",&mat2);
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))//choix 0 et > a nombre de matrice n'est pas valide
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(((tabMat[mat1-1].nbcol)==(tabMat[mat2-1].nbcol))&&((tabMat[mat1-1].nblig)==(tabMat[mat2-1].nblig)))//les matrice ont le meme nombre de ligne et de colone
                            {
                                SomMat(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,sommat);
                                nbMat++;ch++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=sommat[j];
                                    }
                                tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].NomMat=ch;
                                AffichMatFR(sommat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("Votre nouvelle matrice est nommee : %c\n",ch);
                            }
                            else //les matrice ne sont pas identique
                            {
                                ROUGE();printf("\nImpossible de faire la somme du ces deux matrice\n\nle nombre d ligne et le nombre de colone n'est pas identique\n\n");
                                WHITE();
                            }

                    }
                }
                retourMenuFR();
                break;

            case 4:
                SIGNALER("4-Calculer le produit du deux matrice",10,20,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    VERT();printf("\nVous pouvez faire le produit du deux matrices ..ok..!\n");WHITE();
                    MenuProdFR(nbMat);
                    JAUNE();
                    printf("\nMatrice 1 :");
                    scanf("%d",&mat1);
                    printf("\nMatrice 2 :");
                    scanf("%d",&mat2);
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(tabMat[mat1-1].nbcol==tabMat[mat2-1].nblig)
                            {
                                prodMat(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,prodmat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,tabMat[mat2-1].nbcol);
                                nbMat++;ch++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=prodmat[j];
                                    }
                                tabMat[nbMat-1].nbcol=tabMat[mat2-1].nbcol;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].NomMat=ch;
                                AffichMatFR(prodmat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("Votre nouvelle matrice est nommee : %c\n",ch);
                            }
                            else
                            {
                                ROUGE();printf("\nImpossible de faire le produit du ces deux matrice\n\nLe nombre de ligne de matrice 2 n'est pas identique a le nombre de colone de la matrice 1\n\n");
                                WHITE();
                            }

                    }
                }
                retourMenuFR();
                break;

            case 5:
                SIGNALER("5-Calculer le produit par scalaire d'une matrice",10,22,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    VERT();printf("\nVous pouvez faire le produit d'une matrice par un scalaire..ok..!\n");WHITE();
                    MenuProdScalFR(nbMat);
                    JAUNE();
                    scanf("%d",&mat1);
                    if ((mat1==0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                            JAUNE();printf("\n\nDonner le scalaire : ");WHITE();
                            scanf("%d",&scal);
                            prodScal(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,scal,prodmat);
                            nbMat++;ch++;
                            for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=prodmat[j];
                                    }
                            tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                            tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                            tabMat[nbMat-1].NomMat=ch;
                            AffichMatFR(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                            ROUGE();
                            printf("\nNOTE:\n");
                            WHITE();
                            printf("Votre nouvelle matrice est nommee : %c\n",ch);
                    }
                }
                retourMenuFR();
                break;
            case 6:
                SIGNALER("6-Calculer le determinant d'une matrice",10,24,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    MenuDetFR(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                        if (tabMat[mat1-1].nbcol!=tabMat[mat1-1].nblig)//la matrice n'est pas carré
                        {
                            ROUGE();
                            printf("\nImpossible de calculer le determinent\n\nNOTE:\n");
                            WHITE();
                            printf("La Matrice %c n'est pas carre !! \n",tabMat[mat1-1].NomMat);
                        }
                        else
                        {
                            AffichMatFR(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            printf("\nLe determinent de la matrice %c est : ",tabMat[mat1-1].NomMat);
                            VERT();
                            printf("%.2f\n",DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol));
                            WHITE();
                        }
                    }
                }
                retourMenuFR();
                break;
            case 7:
                SIGNALER("7-Calculer l'inverse d'une matrice",10,26,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    MenuInvFR(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                        if (tabMat[mat1-1].nblig!=tabMat[mat1-1].nbcol)//la matrice n'est pas carré
                        {
                            ROUGE();printf("\nImpossbile de calculer l'inverse de cette matrice\n\nNote\n");WHITE();
                            printf("La Matrice %c n'est pas carre !! \n",tabMat[mat1-1].NomMat);
                        }
                        else
                        {
                            AffichMatFR(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            det=DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            if (det==0)//determinant nul !!
                            {
                                ROUGE();
                                printf("\nImpossbile de calculer l'inverse de cette matrice\n\nNote\n");
                                WHITE();
                                printf("Le determinent de la matrice %c est Nul (=0)\n",tabMat[mat1-1].NomMat);
                            }
                            else
                            {
                                invMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,invmat);
                                ch++;nbMat++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=invmat[j];
                                    }
                                tabMat[nbMat-1].NomMat=ch;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                                VERT();printf("\n\nVoici l'inverse de votre matrice : \n\n");WHITE();
                                AffichMatFR(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("La matrice inverse est nommee : %c\n",ch);
                            }
                        }
                    }
                }
                retourMenuFR();
                break;

            case 8:
                SIGNALER("8-Calculer la transpose d'une matrice",10,28,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    MenuTransFR(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else//crrer la transpose et la sauvgarder dans le tableau
                    {

                        transpoMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,transmat);
                        ch++;nbMat++;
                        for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=transmat[j];
                                    }
                        tabMat[nbMat-1].NomMat=ch;
                        tabMat[nbMat-1].nblig=tabMat[mat1-1].nbcol;
                        tabMat[nbMat-1].nbcol=tabMat[mat1-1].nblig;
                        AffichMatFR(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                        ROUGE();
                        printf("\nNOTE:\n");
                        WHITE();
                        printf("La matrice transpose est nommee : %c\n",ch);
                    }
                }
                retourMenuFR();
                break;

            case 9:
                SIGNALER("9-Resoudre un systeme d'equation base sur une matrice creuse",10,30,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                }
                else
                {
                    VERT();
                    printf("\nVous pouvez resoudre un systeme d'equation base sur deux matrice ..ok..!\n");
                    WHITE();
                    MenuSysFR(nbMat);
                    JAUNE();
                    printf("\n\nMatrice 1 :");
                    scanf("%d",&mat1);
                    printf("\nMatrice 2 :");
                    scanf("%d",&mat2);
                    WHITE();
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))
                    {
                        ROUGE();printf("\nChoix invalide !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(((tabMat[mat1-1].nbcol)!=(tabMat[mat1-1].nblig))||((tabMat[mat2-1].nblig)!=(tabMat[mat2-1].nbcol)))//les matrice ne sont pas carré
                            {
                                ROUGE();
                                printf("\nImpossible de resoudre ce systeme\n\nLes matrice ne sont pas carres\n\n");
                                WHITE();
                            }
                            else if (tabMat[mat1-1].nblig!=tabMat[mat2-1].nblig)//le nombre de ligne et de collone n'est pas identique
                            {
                                ROUGE();
                                printf("\nImpossible de resoudre ce systeme\n\nle nombre d ligne et le nombre de colone n'est pas identique\n\n");
                                WHITE();
                            }
                            else
                            {
                                AffichMatFR(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                                det=DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                                system("cls");
                                if (det==0)//deteminant de la matrice a inverser est Nul
                                {
                                    ROUGE();
                                    printf("\nImpossbile de resoudre ce systeme d'equation\n\nNote\n");
                                    WHITE();
                                    printf("Le determinent de la matrice %c est Nul (=0)\n",tabMat[mat1-1].NomMat);
                                }
                                else
                                {
                                    solEqua(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,matLLC);
                                    VERT();
                                    printf("\n\nLes solution du ce systeme d'equation sont :\n\n");
                                    WHITE();
                                    AffichMatFR(matLLC,tabMat[mat1-1].nblig,1);
                                }
                            }
                    }
                }
                retourMenuFR();
                break;
            case 10:
                SIGNALER("10-sauvegarder/restaurer",10,32,3);
                system("cls");
                switch (SaveRestoreFR())
                     {
                     case 1:
                        if (nbMat==0)
                        {
                            JAUNE();printf("\nVous n'avez creez aucune matrice !! ok !! \n");WHITE();
                        }
                        else
                            {
                                fichier=fopen("DataBase.txt","r+");
                                if (fichier==NULL)
                                {
                                    ROUGE();printf("Erreur : Le fichier n'existe pas !! ");WHITE();
                                }
                                else
                                {
                                    fprintf(fichier,"%d\n",nbMat);
                                    for(i=0;i<nbMat;i++)
                                    {
                                        fprintf(fichier,"%d\t%d\n",tabMat[i].nblig,tabMat[i].nbcol);
                                        TransTab(tabMat[i].Mat,mat,tabMat[i].nblig,tabMat[i].nbcol);
                                        for(j=0;j<tabMat[i].nblig;j++)
                                            {
                                                for(k=0;k<tabMat[i].nbcol;k++)
                                                {
                                                   fprintf(fichier,"%.2f\t",mat[j][k]);
                                                }
                                                fprintf(fichier,"\n");
                                            }
                                    }
                                }
                                fclose(fichier);
                                system("cls");
                                VERT();printf("\nVotre matrices sont sauvgarder .\n\n");WHITE();
                            }
                        break;
                     case 2:
                        fichier=fopen("DataBase.txt","r+");
                        ch='A';
                        if (fichier==NULL)
                        {
                            ROUGE();printf("Erreur : Le fichier n'existe pas !! ");WHITE();
                        }
                        else
                        {
                            fscanf(fichier,"%d\n",&nbMatsauv);
                            if (nbMatsauv==0)
                            {
                                system("cls");
                                ROUGE();printf("\nVous n'avez sauvgarder aucune matrice\n\n");WHITE();
                            }
                            else
                            {
                                nbMat=nbMatsauv;
                                for(i=0;i<nbMatsauv;i++)
                                {
                                    fscanf(fichier,"%d\t%d\n",&tabMat[i].nblig,&tabMat[i].nbcol);
                                    for(j=0;j<tabMat[i].nblig;j++)
                                        {
                                            for(k=0;k<tabMat[i].nbcol;k++)
                                            {
                                                fscanf(fichier,"%f\t",&mat[j][k]);
                                            }
                                            fscanf(fichier,"\n");
                                        }
                                    TransMat(mat,tabMat[i].nblig,tabMat[i].nbcol,matLLC);
                                    for(f=0;f<tabMat[i].nblig;f++)
                                                tabMat[i].Mat[f]=matLLC[f];
                                    tabMat[i].NomMat=ch;
                                    ch++;
                                }
                                fclose(fichier);
                                system("cls");
                                VERT();printf("\nVotre matrices sont recuperee.\n\n");WHITE();
                            }
                        }

                        break;
                     default:
                        system("cls");
                        ROUGE();printf("\nChoix invalide !!\n\n");
                        retourMenuFR();
                        break;
                    }
                retourMenuFR();
                break;
            case 11:
                    system("cls");
                    quitterFR();
                    continu=0;
                    break;

            default :
                    system("cls");
                    ROUGE();printf("\nChoix invalide !!\n\n");
                    retourMenuFR();
                    break;
        }
        system("cls");

    }while(continu!=0);

}
//------------------------------------------------------------------------------------------
void logoFR()
{
    printf("%c",188);
    WHITE();
    gotoxy(3,3);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(3,4);
    printf("%c%c",219,219);
    gotoxy(3,5);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(3,6);
    printf("%c%c",219,219);
    gotoxy(3,7);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(9,3);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(9,4);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(9,5);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(12,6);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(9,7);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(15,3);
    BLEU();
    printf("%c%c\n\n\n",219,254);
    WHITE();
    gotoxy(15,4);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,5);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,6);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,7);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(18,3);
    printf("ECOLE NATIONALE\n\n\n\n\n");
    gotoxy(18,5);
    printf("SUPERIEURE\n\n");
    gotoxy(18,7);
    printf("D'INFORMATIQUE\n");
    gotoxy(35,7);
}
//-------------------------------------------------------------------------------------------
int choixMenuFR()
{
    int choix;
    logoFR();
    BLEUBACK();
    gotoxy(50,6);
    delay("Programme de manipulation des matrice ",10);
    VERT();
    gotoxy(15,10);delay("Veuillez choisir un parmis les choix suivant : ",2);
    WHITE();
    gotoxy(10,14);
    printf("1-Construire des matrice");
    gotoxy(10,16);
    printf("2-Afficher des matrice");
    gotoxy(10,18);
    printf("3-Calculer la somme du deux matrice");
    gotoxy(10,20);
    printf("4-Calculer le produit du deux matrice");
    gotoxy(10,22);
    printf("5-Calculer le produit par scalaire d'une matrice");
    gotoxy(10,24);
    printf("6-Calculer le determinant d'une matrice");
    gotoxy(10,26);
    printf("7-Calculer l'inverse d'une matrice");
    gotoxy(10,28);
    printf("8-Calculer la transpose d'une matrice");
    gotoxy(10,30);
    printf("9-Resoudre un systeme d'equation base sur une matrice creuse");
    gotoxy(10,32);
    printf("10-sauvegarder/restaurer");
    ROUGE();
    gotoxy(10,34);
    printf("11-Sortir");
    VERT();
    SIGNALER("Entrez votre choix : ",15,36,5);
    scanf("%d",&choix);
    return choix;
}
//------------------------------------------------------------------------------------------
/**<*--------------------------------------------------------------------------- */
/**<*            Graphisme Anglais                                               */
/**<*-------------------------------------- -------------------------------------*/
//-----------------------------------------------------------------------------------------------------------
void retourMenuEN() // Affiche un message pour retourner au menu
{
    ROUGE();
    delay("\nPress any key to get back to the menu...!!",25);
    getch();
    WHITE();
}
//-----------------------------------------------------------------------------------------------------------

void quitterEN()
{
    gotoxy(35,10);
    delay("THANK YOU FOR USING OUR PROGRAM",50);
    getch();
}
//----------------------------------------------------------------------------
void MenuAffMatEN(int n)
{
    int i;char c='A';

    printf("\nWhat do you want to display :\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
    printf("\n%d-All the matrix \n",n+1);
    JAUNE();printf("\n\nEnter your choice ");WHITE();
}
//----------------------------------------------------------------------------
void MenuSomEN(int n)
{
    int i;char c='A';

    printf("\nChoose the matrix that you want to do the addition:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
}
//----------------------------------------------------------------------------
void MenuProdEN(int n)
{
    int i;char c='A';

    printf("\nWhich matrix you want to do the product:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
}
//-----------------------------------------------------------------------------
void MenuProdScalEN(int n)
{
    int i;char c='A';

    printf("\nWhich matrix you want to multiply with a scalar:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix%c\n",i+1,c);
        c++;
    }
    printf("\n\nEnter your choice:");
}
//----------------------------------------------------------------------------
void MenuDetEN(int n)
{
    int i;char c='A';

    printf("\nWhich matrix you want to calculate the deteminant:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
    printf("\n\nEnter your choice:");
}
//-------------------------------------------------------------------------------
void MenuInvEN(int n)
{
    int i;char c='A';

    printf("\nWhich matrix you want to calculate the reverse:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
    printf("\n\nEnter your choice:");
}
//-------------------------------------------------------------------------------
void MenuTransEN(int n)
{
    int i;char c='A';

    printf("\nWhich matrix you want to calculate the transposed:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
    printf("\n\nEnter your choice:");
}
//-------------------------------------------------------------------------------
int SaveRestoreEN()
{
    int choix;
    printf("\nWhat do you want to do: \n");
    printf("\n1-Save\n\n2-Restore\n");
    printf("\n\nEnter your choice:");
    scanf("%d",&choix);
    return choix;
}
//-------------------------------------------------------------------------------
void MenuSysEN(int n)
{
    int i;char c='A';

    printf("\nWhich are the matrix of your system:\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d-Matrix %c\n",i+1,c);
        c++;
    }
    printf("\n\nEnter your choice:");
}
//------------------------------------------------------------------------------
void  ProgramEN()
{
    tab2d mat;
    Matrice matLLC,sommat,prodmat,invmat,transmat;
    int lig=0,col=0,continu=1,i,j,k,f,repAff;
    TabMatrice tabMat[MAX];     //tableau qui contient les marice manipulé
    int nbMat=0,nbMatsauv;   //nombre des matrice manipulé
    char ch='A';     //nom des matrices
    int mat1,mat2,scal;  //numéro de matrice
    int retour=1;
    float det;
    FILE *fichier=NULL;

    do
    {
         system("cls");
         switch(choixMenuEN())
        {
            case 1:
                    ch='A';
                    SIGNALER("1-Create a matrix",10,14,3);
                    system("cls");
                    if (nbMat!=0)
                    {
                        ROUGE();printf("\nNote:\n");
                        WHITE();printf("The matrix already manipulated will be deleted!!\nIf you want to keep them..save them before creating new ones\n\n1-Continu\n\n2-Back\n\nEnter your choice: ");
                        scanf("%d",&retour);
                        if (retour==2)retourMenuEN();
                    }
                    if (retour==1)
                    {
                        system("cls");
                        printf("\nHow many matrix you want to manipulate:");
                        scanf("%d",&nbMat);
                        if (nbMat==0)
                        {
                            JAUNE();printf("\nYou don't want to create any matrix !! ok !! \n");WHITE();
                        }
                        else
                        {
                                for(i=0;i<nbMat;i++)
                                {
                                    JAUNE();printf("\nCreating the matrix %c :\n",ch);WHITE();
                                    ScanMatEN(mat,&lig,&col);
                                    TransMat(mat,lig,col,matLLC);
                                    for(j=0;j<lig;j++)
                                    {
                                        tabMat[i].Mat[j]=matLLC[j];
                                    }

                                    tabMat[i].NomMat=ch;
                                    tabMat[i].nblig=lig;
                                    tabMat[i].nbcol=col;
                                    ch++;
                                }
                                VERT();printf("\nYour matrix have been created :) \n");WHITE();
                        }
                        ch--;
                        retourMenuEN();
                    }
                    break;
            case 2:
                    SIGNALER("2-Display a matrix ",10,16,3);
                    system("cls");
                    if (nbMat==0)
                    {
                        JAUNE();printf("\nYou haven't create any matrix!! ok !!\n");WHITE();
                    }
                    else
                    {
                        MenuAffMatEN(nbMat);
                        scanf("%d",&repAff);
                        system("cls");
                        if ((repAff==0)||(repAff>nbMat+1))
                            {
                                ROUGE();printf("\nInvalid choice !!...\n");WHITE();
                            }
                        else if(repAff==nbMat+1)
                            {
                                for(i=0;i<nbMat;i++)
                                {
                                    VERT();printf("\nMatrix %c\n",tabMat[i].NomMat);WHITE();
                                    AffichMatEN(tabMat[i].Mat,tabMat[i].nblig,tabMat[i].nbcol);
                                }
                            }
                            else
                            {
                                VERT();printf("\nMatrix %c\n",tabMat[repAff-1].NomMat);WHITE();
                                AffichMatEN(tabMat[repAff-1].Mat,tabMat[repAff-1].nblig,tabMat[repAff-1].nbcol);
                            }
                    }
                    retourMenuEN();
                    break;
            case 3:
                SIGNALER("3-Calculate the addition of two matrix",10,18,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nYou haven't create any matrix!! ok !! \n");WHITE();
                }
                else
                {
                    VERT();printf("\nYou can do the addition of two matrix..ok..!\n");WHITE();
                    MenuSomEN(nbMat);
                    JAUNE();
                    printf("\nMatrix 1 : ");
                    scanf("%d",&mat1);
                    printf("\nMatrix 2 : ");
                    scanf("%d",&mat2);
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(((tabMat[mat1-1].nbcol)==(tabMat[mat2-1].nbcol))&&((tabMat[mat1-1].nblig)==(tabMat[mat2-1].nblig)))
                            {
                                SomMat(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,sommat);
                                nbMat++;ch++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=sommat[j];
                                    }
                                tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].NomMat=ch;
                                AffichMatEN(sommat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("Your new matrix is named : %c\n",ch);
                            }
                            else
                            {
                                ROUGE();printf("\nImpossible to do the addition of the two matrix\n\nThe number of line and the number of column is not the same\n\n");
                                WHITE();
                            }

                    }
                }
                retourMenuEN();
                break;

            case 4:
                SIGNALER("4-Calculate the product of two matrix",10,20,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    VERT();printf("\nYou can calculate the product of two matrix ..ok..!\n");WHITE();
                    MenuProdEN(nbMat);
                    JAUNE();
                    printf("\nMatrix 1 :");
                    scanf("%d",&mat1);
                    printf("\nMatrix 2 :");
                    scanf("%d",&mat2);
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(tabMat[mat1-1].nbcol==tabMat[mat2-1].nblig)
                            {
                                prodMat(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,prodmat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,tabMat[mat2-1].nbcol);
                                nbMat++;ch++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=prodmat[j];
                                    }
                                tabMat[nbMat-1].nbcol=tabMat[mat2-1].nbcol;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].NomMat=ch;
                                AffichMatEN(prodmat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("Your new matrix is named : %c\n",ch);
                            }
                            else
                            {
                                ROUGE();printf("\nImpossible to do the product of the two matrix\n\nThe number of lines of the matrix 2 is not the same as the number of column of matrix 1\n\n");
                                WHITE();
                            }

                    }
                }
                retourMenuEN();
                break;

            case 5:
                SIGNALER("5-Calculate the product with a scalar of a matrix",10,22,3);
                system("cls");
                if (nbMat==0)
                {
                        JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    VERT();printf("\nYou can do the product of a matrix with a scalar..ok..!\n");WHITE();
                    MenuProdScalEN(nbMat);
                    JAUNE();
                    scanf("%d",&mat1);
                    if ((mat1==0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                            JAUNE();printf("\n\nGive the scalar : ");WHITE();
                            scanf("%d",&scal);
                            prodScal(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,scal,prodmat);
                            nbMat++;ch++;
                            for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=prodmat[j];
                                    }
                            tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                            tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                            tabMat[nbMat-1].NomMat=ch;
                            AffichMatEN(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                            ROUGE();
                            printf("\nNOTE:\n");
                            WHITE();
                            printf("Your new matrix is named : %c\n",ch);
                    }
                }
                retourMenuEN();
                break;
            case 6:
                SIGNALER("6-Calculate the determinant of a matrix",10,24,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    MenuDetEN(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                        if (tabMat[mat1-1].nbcol!=tabMat[mat1-1].nblig)
                        {
                            ROUGE();
                            printf("\nImpossible to calculate the determinant\n\nNOTE:\n");
                            WHITE();
                            printf("The matrix %c is not square !! \n",tabMat[mat1-1].NomMat);
                        }
                        else
                        {
                            AffichMatEN(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            printf("\nThe determinant of the matrix %c is : ",tabMat[mat1-1].NomMat);
                            VERT();
                            printf("%.2f\n",DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol));
                            WHITE();
                        }
                    }
                }
                retourMenuEN();
                break;
            case 7:
                SIGNALER("7-Calculate the reverse of a matrix",10,26,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    MenuInvEN(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                        if (tabMat[mat1-1].nblig!=tabMat[mat1-1].nbcol)
                        {
                            ROUGE();printf("\nImpossbile to calculate the reverse of this matrix\n\nNote\n");WHITE();
                            printf("The matrix %c is not square !! \n",tabMat[mat1-1].NomMat);
                        }
                        else
                        {
                            AffichMatEN(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            det=DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                            if (det==0)
                            {
                                ROUGE();
                                printf("\nImpossbile to calculate the reverse of this matrix\n\nNote\n");
                                WHITE();
                                printf("The determinant of the matrix %c is Nul (=0)\n",tabMat[mat1-1].NomMat);
                            }
                            else
                            {
                                invMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,invmat);
                                ch++;nbMat++;
                                for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=invmat[j];
                                    }
                                tabMat[nbMat-1].NomMat=ch;
                                tabMat[nbMat-1].nblig=tabMat[mat1-1].nblig;
                                tabMat[nbMat-1].nbcol=tabMat[mat1-1].nbcol;
                                VERT();printf("\n\nThere is the reverse of your matrix : \n\n");WHITE();
                                AffichMatEN(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                                ROUGE();
                                printf("\nNOTE:\n");
                                WHITE();
                                printf("Your new matrix is named : %c\n",ch);
                            }
                        }
                    }
                }
                retourMenuEN();
                break;

            case 8:
                SIGNALER("8-Calculate the transposed of a matrix",10,28,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    MenuTransEN(nbMat);
                    scanf("%d",&mat1);
                    if ((mat1<=0)||(mat1>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {

                        transpoMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,transmat);
                        ch++;nbMat++;
                        for(j=0;j<tabMat[mat1-1].nblig;j++)
                                    {
                                        tabMat[nbMat-1].Mat[j]=transmat[j];
                                    }
                        tabMat[nbMat-1].NomMat=ch;
                        tabMat[nbMat-1].nblig=tabMat[mat1-1].nbcol;
                        tabMat[nbMat-1].nbcol=tabMat[mat1-1].nblig;
                        AffichMatEN(tabMat[nbMat-1].Mat,tabMat[nbMat-1].nblig,tabMat[nbMat-1].nbcol);
                        ROUGE();
                        printf("\nNOTE:\n");
                        WHITE();
                        printf("The matrix transpose is named: %c\n",ch);
                    }
                }
                retourMenuEN();
                break;

            case 9:
                SIGNALER("9-Fix a system of equation of matrix",10,30,3);
                system("cls");
                if (nbMat==0)
                {
                    JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                }
                else
                {
                    VERT();
                    printf("\nYou can fix a system of equation of two matrix ..ok..!\n");
                    WHITE();
                    MenuSysEN(nbMat);
                    JAUNE();
                    printf("\n\nMatrix 1 :");
                    scanf("%d",&mat1);
                    printf("\nMatrix 2 :");
                    scanf("%d",&mat2);
                    WHITE();
                    if ((mat1==0)||(mat2==0)||(mat1>nbMat)||(mat2>nbMat))
                    {
                        ROUGE();printf("\nInvalid choice !!...!!\n");WHITE();
                    }
                    else
                    {
                            if(((tabMat[mat1-1].nbcol)!=(tabMat[mat1-1].nblig))||((tabMat[mat2-1].nblig)!=(tabMat[mat2-1].nbcol)))
                            {
                                ROUGE();
                                printf("\nImpossible to fix this system\n\nThe matrix is not square\n\n");
                                WHITE();
                            }
                            else if (tabMat[mat1-1].nblig!=tabMat[mat2-1].nblig)
                            {
                                ROUGE();
                                printf("\nImpossible to fix this system\n\nThe number of lines and the number of columns is not the same\n\n");
                                WHITE();
                            }
                            else
                            {
                                AffichMatEN(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                                det=DetMat(tabMat[mat1-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol);
                                system("cls");
                                if (det==0)
                                {
                                    ROUGE();
                                    printf("\nImpossbile to fix this system\n\nNote\n");
                                    WHITE();
                                    printf("The determinant of matrix %c is Nul (=0)\n",tabMat[mat1-1].NomMat);
                                }
                                else
                                {
                                    solEqua(tabMat[mat1-1].Mat,tabMat[mat2-1].Mat,tabMat[mat1-1].nblig,tabMat[mat1-1].nbcol,matLLC);
                                    VERT();
                                    printf("\n\nThe solutions of this system are :\n\n");
                                    WHITE();
                                    AffichMatEN(matLLC,tabMat[mat1-1].nblig,1);
                                }
                            }
                    }
                }
                retourMenuEN();
                break;
            case 10:
                SIGNALER("10-Save/Restore",10,32,3);
                system("cls");
                switch (SaveRestoreEN())
                     {
                     case 1:
                        if (nbMat==0)
                        {
                            JAUNE();printf("\nYou haven't create any matrix!! ok !!  \n");WHITE();
                        }
                        else
                            {
                                fichier=fopen("DataBase.txt","r+");
                                if (fichier==NULL)
                                {
                                    ROUGE();printf("Erreur : The file don't exist !! ");WHITE();
                                }
                                else
                                {
                                    fprintf(fichier,"%d\n",nbMat);
                                    for(i=0;i<nbMat;i++)
                                    {
                                        fprintf(fichier,"%d\t%d\n",tabMat[i].nblig,tabMat[i].nbcol);
                                        TransTab(tabMat[i].Mat,mat,tabMat[i].nblig,tabMat[i].nbcol);
                                        for(j=0;j<tabMat[i].nblig;j++)
                                            {
                                                for(k=0;k<tabMat[i].nbcol;k++)
                                                {
                                                   fprintf(fichier,"%.2f\t",mat[j][k]);
                                                }
                                                fprintf(fichier,"\n");
                                            }
                                    }
                                }
                                fclose(fichier);
                                system("cls");
                                VERT();printf("\nYour matrix has been saved .\n\n");WHITE();
                            }
                        break;
                     case 2:
                        fichier=fopen("DataBase.txt","r+");
                        ch='A';
                        if (fichier==NULL)
                        {
                            ROUGE();printf("Erreur : The file don't exist !! ");WHITE();
                        }
                        else
                        {
                            fscanf(fichier,"%d\n",&nbMatsauv);
                            if (nbMatsauv==0)
                            {
                                system("cls");
                                ROUGE();printf("\nYou haven't saved any matrix\n\n");WHITE();
                            }
                            else
                            {
                                nbMat=nbMatsauv;
                                for(i=0;i<nbMatsauv;i++)
                                {
                                    fscanf(fichier,"%d\t%d\n",&tabMat[i].nblig,&tabMat[i].nbcol);
                                    for(j=0;j<tabMat[i].nblig;j++)
                                        {
                                            for(k=0;k<tabMat[i].nbcol;k++)
                                            {
                                                fscanf(fichier,"%f\t",&mat[j][k]);
                                            }
                                            fscanf(fichier,"\n");
                                        }
                                    TransMat(mat,tabMat[i].nblig,tabMat[i].nbcol,matLLC);
                                    for(f=0;f<tabMat[i].nblig;f++)
                                                tabMat[i].Mat[f]=matLLC[f];
                                    tabMat[i].NomMat=ch;
                                    ch++;
                                }
                                fclose(fichier);
                                system("cls");
                                VERT();printf("\nYour matrix has been restored.\n\n");WHITE();
                            }
                        }

                        break;
                     default:
                        system("cls");
                        ROUGE();printf("\nInvalid choice !!\n\n");
                        retourMenuEN();
                        break;
                    }
                retourMenuEN();
                break;
            case 11:
                    system("cls");
                    quitterEN();
                    continu=0;
                    break;

            default :
                    system("cls");
                    ROUGE();printf("\nInvalid choice !!\n\n");
                    retourMenuEN();
                    break;
        }
        system("cls");

    }while(continu!=0);

}
//------------------------------------------------------------------------------------------
void logoEN()
{
    printf("%c",188);
    WHITE();
    gotoxy(3,3);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(3,4);
    printf("%c%c",219,219);
    gotoxy(3,5);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(3,6);
    printf("%c%c",219,219);
    gotoxy(3,7);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(9,3);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(9,4);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(9,5);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(12,6);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(9,7);
    printf("%c%c%c%c%c\n\n\n\n",219,219,219,219,219);
    gotoxy(15,3);
    BLEU();
    printf("%c%c\n\n\n",219,254);
    WHITE();
    gotoxy(15,4);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,5);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,6);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(15,7);
    printf("%c%c\n\n\n\n",219,219);
    gotoxy(18,3);
    printf("NATIONAL\n\n\n\n\n");
    gotoxy(18,5);
    printf("ENGENEERING\n\n");
    gotoxy(18,7);
    printf("SCHOOL\n");
    gotoxy(35,7);
}
//-------------------------------------------------------------------------------------------
int choixMenuEN()
{
    int choix;
    logoEN();
    BLEUBACK();
    gotoxy(50,6);
    delay("Program of manupilation of matrix",10);
    VERT();
    gotoxy(15,10);delay("Pick a choice from the list please: ",2);
    WHITE();
    gotoxy(10,14);
    printf("1-Create a matrix");
    gotoxy(10,16);
    printf("2-Display a matrix ");
    gotoxy(10,18);
    printf("3-Calculate the addition of two matrix");
    gotoxy(10,20);
    printf("4-Calculate the product of two matrix");
    gotoxy(10,22);
    printf("5-Calculate the product with a scalar of a matrix");
    gotoxy(10,24);
    printf("6-Calculate the determinant of a matrix");
    gotoxy(10,26);
    printf("7-Calculate the reverse of a matrix");
    gotoxy(10,28);
    printf("8-Calculate the transposed of a matrix");
    gotoxy(10,30);
    printf("9-Fix a system of equation of matrix");
    gotoxy(10,32);
    printf("10-Save/Restore");
    ROUGE();
    gotoxy(10,34);
    printf("11-Exit");
    VERT();
    SIGNALER("Enter your choice: ",15,36,5);
    scanf("%d",&choix);
    return choix;
}
//------------------------------------------------------------------------------------------
