#include<stdio.h>
#include<stdlib.h>

void Tranfere(int ,int *,int *);//elements de t1 :impair->fin de A en ordre inverse , pair->dans A dans le mˆeme ordre
int Symetrique(int ,int *);//symetrique->1 sinon->0
void tri_selection(int ,int *);
void tri_bulls(int ,int *);
void insertion(int *,int *,int );//inserer une val dans tab trié(on vas l'utiliser dans la fonction trie_insertion )
void tri_insertion(int,int *);
int *maxi(int n,int *t);//retourner l'indice du val max du tab (on l'utilisera dans la tri_repmplacer)
void tri_repmplacer(int,int*,int *);//ranger dans un autre tab par ordre decroissant


