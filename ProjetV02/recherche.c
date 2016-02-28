
#include "recherche.h"


int recherche_distinct(int n,int *t)
{
    int nd=0 ,*i ,*j ,nr;
    for(i=t;i<t+n;i++)
    { nr=0;
        for(j=i;j<t+n;j++)
          {
              if(*i==*j)
                nr++;
          }

        if(nr==1)
            nd++;

    }

    return nd;

}
/********************************************/

void recherche_element_sup(int n1,int *t1,int a)
{
    int *i=t1,min;
    do
    {
    i++;
    }while(*i<a);

    printf("\n---->Les nombres superieure a %d :: ",a);

    for(i=i;i<t1+n1;i++)
    {
        if(*i>a)
        {
            printf(" %d | ",*i);
                if(min>*i)
                    min=*i;
        }
    }

    printf("\n\n\n---->Le petit nombre superieur a %d est  ::   %d",a, min);
}

/***************************************************/
void recherche_div_multiple(int n1,int *t1)
{
int *i,inf,sup,val;
do
{
    printf("Donner un ind_inf>0 :: ");
    scanf("%d",&inf);
}while(0>=inf);
do{
    printf("Donner un ind_sup<%d :: ",n1);
    scanf("%d",&sup);
}while(sup>=n1);


    printf("Donner une valeur :: ");
    scanf("%d",&val);

printf("\n--->Les vals diviseurs de %d dans [%d,%d] = ",val,inf,sup);
for(i=t1+inf;i<t1+sup;i++)
{
    if((*i%val==0))
    {
        printf("%d  |  ",*i);
    }

}
printf("\n\n---->les vals multiples de %d dans [%d,%d] = ",val,inf,sup);
for(i=t1+inf;i<t1+sup;i++)
{
    if(val%(*i)==0)
        {
        printf("%d  |  ",*i);
    }
}
}

/********************************/

void recherche_consecutif(int n1,int *t1)
{
    int *i,*j,s=0,pos;
do{
    printf("Donner pos enre 0 et %d :: ",n1);
    scanf("%d",&pos);
}while(pos<0 || pos>n1);

for(i=t1+pos-1;i>t1;i--)
{
    s=s+(*i);
    if(s==(*(t1+pos)))
    { printf("\n--->Condition verifiée et les éléements consécutifs qui le préecédent immédiatement sont :  ");
        for(j=t1+pos-1;j>=i;j--)
        {
            printf("%d  |  ",*j);
        }
    }
}
if(s>(*(t1+pos)))
    printf("\n--->condition non vérifiée");
}
/****************************************/


int *position(int *t,int n,int val ,int ind)
{int *i,*pos=NULL;
    for(i=t+ind;i<t+n;i++)
        if(*i==val)
        return (i);


        else return pos;


}

/**********************************/
void recherche_sequencielle(int n3,int *t3)
{

  int *i,pos ,val;
  printf("donner une val:");
  scanf("%d",&val);
 pos = -1;
 for (i=t3 ; (i<t3+n3) ; i++)
      {
          printf("%d",*i);
          if (*i==val)
              {
                 pos=i-t3+1;
                 break;
              }

      }
if(pos!=-1)
    printf("premiére position de %d :: %d  ",val,pos);
else
    printf("pas de %d dans se tableau",val);
}
/***********************************/

void recherche_dichotomique(int n3,int *t3)
{int pos ,val,inf,sup,mil=0;
  printf("donner une val:");
  scanf("%d",&val);
 pos = -1;
 inf=0;
 sup=n3-1;
 while ((inf<=sup) && (pos==-1))
        {
         mil=(sup+inf)/2;
         printf("%d",mil);
         if (val<*(t3+mil))
               sup=mil-1;
         else if (val > *(t3+mil))
               inf=mil+1;
         else
               pos=mil;

        }

if(pos!=-1)
    printf("premiére position de %d :: %d  ",val,pos);
else
    printf("pas de %d dans se tableau",val);
}
/*****************************/

void recherche_blocks(int *t1, int n1)
{
    int a, b, *pos1, *pos2, *i;
    do
    {
        printf("donner a et b");
        scanf("%d %d", &a,&b);
    }
    while(a<=0|| b<=0);

    pos1=position(t1,n1,a,0);
    pos2=position(t1,n1,b,0);

    if(pos1!=NULL && pos2!=NULL)
    {
                  while(pos1!=NULL &&pos2!=NULL)
                  {
                                   for (i=pos1+1; pos1<pos2 ;i++)
                                        printf("%d\t",*i);
                                   printf("\n");
                                   pos1=position(t1,n1,a,(int)(pos2+1-t1));
                                   pos2=position(t1,n1,b,(int)(pos2+1-t1));
                  }

    }}

/*********************************/

void recherche_median(int n,int *t6,int *t7)
{//test tab trié coissant
int *i,*j,elem,trouv=0;
for(i=t6,j=(t7+n-1);i<t6+n,j==t7,trouv==0;i++,j--)
{
    if(*i==*j)
    {
        trouv=1;
        elem=*i;
    }

}

if(trouv==1)
    printf("L'entier %d est un element median pour les deux tableaux",elem);
else
    printf("pas d'element median pour les deux tableaux");

}

/*********************************************/

void recherche_permutation(int n,int *t)
{
    int *i,*j,max=*t,v,tm=0,*m,ok;
    for(i=t+1;i<(t+n);i++)
        if (*i>max)
            max=*i;

    v=max;
    do
    {
        v=v/10;
        tm++;//taille de val max
    }while(v!=0);

    m=(int*)malloc(sizeof(int)*(tm));//tab qui contien les chiffres de max
    for(i=m,v=max;i<m+tm;i++)
       {
           *i=v%10;
            v=v/10;
       }

printf("les elements de t8 dont la permutation des chiffres donne la valeur maximale %d sont:\n->>\t",max);
    for(i=t;i<(t+n);i++)
    {   ok=0;
            if(*i!=max)
             {
                for(j=m;j<m+tm;j++)
                {v=*i;
                    while((v%10!=*j)&&(v!=0))
                    {
                        v=v/10;
                    }
                    if(v%10==*j)
                        ok++;
                    else
                        break;

                }
                if(ok==3)
                 printf("%d\t",*i);
             }
    }

}

/*****************************************/
void recherche_nb_sequences(int n,int *t)
{
    int *i,nb=1,*j;
    printf("\n-> %d\t",*t);
    for(i=t+1;i<t+n;i++)
    {
        if(*i>=*(i-1))
            printf("%d\t",*i);
        else
        {
            printf("\n-> %d\t",*i);
            nb++;
        }
    }

    printf("\nLe nombre de sequences est=%d",nb);
}
/***********************************************/




