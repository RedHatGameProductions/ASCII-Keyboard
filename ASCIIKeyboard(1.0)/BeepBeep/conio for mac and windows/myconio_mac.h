// Nom du fichier : myconio_mac.h
// Auteur : puzzog.isat@gmail.com
// Objectif : remédier à l'absence de certaines fonctions conio sous mac 

/* Remarques :
    - « textmode n'a pas été réécrite car les modes d'affichage prévus sous DOS 
      n'ont pas de sens dans une fenêtre console.
    - « window » n'a pas pu être écrite... seule une fonction « MYclrwin » a été
      codée pour remplacer l'appel de « window » suivi d'un « clrscr ». 
      Toutefois la zone d'écriture à l'écran n'est pas limitée.
    - « MYclrwin » redimensionne l'arrière plan de la console en la remplisant d'une couleur 
      à l'aide de textbackground ( pour créer des formes ). 
      A noter : le comportement de cette fonction n'a aucun rapport avec celui 
      de « window » de conio.
*/
#ifndef MYCONIO_MAC_H_INCLUDED
#define MYCONIO_MAC_H_INCLUDED
#include "myconio_mac.c"

void mode_raw(int);
void clreol(void);
void gotoxy(int,int);
void clrscr(void); 
void _fflush(void); /*fflush(stdin) sous windows*/
void Sleep(int);
void Blod(int);
void Underline(int);
char ReadKey(void);
int KeyPressed(void);
void GetPass(char *, char *);
int getche();
int getch(void);
int wherex(void);
int wherey(void);
int kbhit(void);
//void clr(void);
void textcolor(int);
void textbackground(int);
void line(int,char,char);
void MYclrwin(int,int,int,int);
#endif