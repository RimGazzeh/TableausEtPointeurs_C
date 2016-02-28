#include<stdio.h>
#include<stdlib.h>


void saisie(int *) ; //taille du tableau et allocation dynamique du tab
void Chargement1(int ,int *) ; //tab entier strictement positive[t1,t2,t5]
void Chargement2(int ,int *) ; //tab de n entier[t3,t4,t12]
void Chargement3(int ,int *) ; //tab d'entier strictement positive et distinct(+fonction verif)--->7
void Chargement4(int ,int *) ; // tab d'entier genérer aleatoirement[t9,t12]
void Chargement5(int ,int *) ;//remlire un tab avec des entiers aleatoires de 3 chiffres[t8]
void Chargement6(int ,int *);//remplissage avec entier positive et distinct tieé par ordre croissant (t6+t7)
void Chargement7(int ,int *);//contient des entier de 2 chiffres (t10+t11)
void Afficher(int ,int *); //afficher un tableau
void remplissage(int *,int ,char* );//stocké tab dan fichier
int affecter(char [200],int *,int *);
