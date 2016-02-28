#include "EntreSortie.h"
#include"trie.h"// on va utiliser tri_selection dans chargement6
#include"Autres.h"//on va utiliser la fonction test dans Chargement3



void saisie(int *n)
{
     do
    {
        printf("\n**Donner la taille du tab entre 5 et 50::\t");
        scanf("%d",n);
    }while((*n<=5)||(*n>=50));
    printf("\n");
}

/************************************************/

void Chargement1(int n,int *t)
{int *i;
for(i=t;i<t+n;i++)
{
    do
    {
        printf("t[%d]=",i-t);
        scanf("%d",i);
    }while((*i)<0);
}

}

/****************************************/

void Chargement2(int n,int *t)
{int *i;

for(i=t;i<t+n;i++)
{

        printf("t[%d]=",i-t);
        scanf("%d",i);
}

}

/********************************************/

void Chargement3(int n,int *t)
{int *i;
 do
    {
printf("t[0]=");
scanf("%d",t);
}while((*t)<0);
for(i=t+1;i<t+n;i++)
{
    do
    {
        printf("t[%d]=",i-t);
        scanf("%d",i);

    }while(test(i-t,t,*i)!=0 || ((*i)<0));
}

}
/************************************/

void Chargement4(int n,int *t)
{int *i;

for(i=t;i<t+n;i++)
{
        *i= rand() % 50;//permet de generer aleatoirement un entier entre 0 et 50
}

}

/************************************/

void Chargement5(int n,int *t)
{int *i;


for(i=t;i<t+n;i++)
{
        *i= rand()%(999 - 100) + 100;//permet de generer aleatoirement un entier de 3 chiffres
}

}
/*********************************************/
void Chargement6(int n,int *t)
{
    Chargement3(n,t);
    tri_selection(n,t);
}

/*************************************/

void Chargement7(int n, int *t)
{
     int *i;

    for(i=t;i<t+n;i++)
    {
            do{
            printf("t[%d]=",i-t);
            scanf("%d",i);
            }while(*i<10 || *i>99);
    }

}

/*************************************/
void Afficher(int n,int *t)
{int *i;
printf("\nt->\t");
for(i=t;i<t+n;i++)
{
    printf("%d\t",(*i));

}
printf("\n");
}

/*********************************************/

void remplissage(int *T,int n,char* nom)
{
      int *pi;
      FILE *tab11=fopen(nom,"w");
      fprintf(tab11,"%d/",n);
      for(pi=T;pi<T+n;pi++)
      {
          fprintf(tab11,"%d/",*pi);
      }
      fclose(tab11);
}


/****************************************************/

int affecter(char fichier[200],int *n,int *t)
{
     FILE* tab = NULL;
    tab=fopen(fichier,"r");
    fscanf(tab,"%d/",n);
    t=(int*)malloc(sizeof(int)*(*n));
    int *p=t;


           while (p<t+(*n))
         {

            fscanf(tab,"%d/",p);
            p++;
         }

        fclose(tab);
        return t;

}
