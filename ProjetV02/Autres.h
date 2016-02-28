#include<stdio.h>
#include<stdlib.h>
#include"EntreSortie.h"
void inverse(int ,int *);//inverser un tab sans un autre tab
void rotation(int ,int *);//t(i+1)<-t(i)... et t(1)<-t(n)
int test(int,int *,int);
void presents(int ,int ,int *,int *);//un autre tab des entier present dans les 2 tab
void absents(int ,int ,int *,int *);//un autre tab des entier present dans le tab 1 et absent dans le 2éme tab
void fusion1(int ,int *,int ,int*,int *);
void fusion2(int ,int *,int*,int *);
