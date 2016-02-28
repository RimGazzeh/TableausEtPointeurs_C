#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//pour la modification du default parametre console du couleur du text
//pour la lecture animé
#include<time.h>
#define TAILLE_MAX 1000

//pour gotoxy
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <ctype.h>




/**
0 : Noir
1 : Bleu foncé
2 : Vert foncé
3 : Turquoise
4 : Rouge foncé
5 : Violet
6 : Vert caca d'oie
7 : Gris clair
8 : Gris foncé
9 : Bleu fluo
10 : Vert fluo
11 : Turquoise
12 : Rouge fluo
13 : Violet 2
14 : Jaune
15 : Blanc
**/
void Color(int ,int );//(int couleurDuTexte,int couleurDeFond)
void gotoxy(int ,int );//position affichage
void AnimationLigne(char[200] ,int ,int );//affichage(chemain,position x,y)
void AnimationChar(char[200] );
void EditFenetre(char[200],int,int );//fenetre(titre,largeur,longeur)

