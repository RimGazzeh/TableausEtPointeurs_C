#include "trie.h"

void Tranfere(int n ,int *t1 ,int *A)
{int *i,max=n,min=0;

for(i=t1;i<t1+n;i++)
{
    if((*i)%2!=0)
       {
          *(A+max-1)=*(i);
          max--;
       }
    else
    {*(A+min)=*(i);
        min++;
    }

}
}

/****************************************/

int Symetrique(int n ,int *t1)
{int *i;

for(i=t1;i<t1+(n/2);i++)
{
    if(*i!=*((t1+n)-(i-t1)-1))
    return 0;
}
    return 1;

}

/***********************************/

void tri_selection(int n3,int *t3)
{int *i,*j,aux,min;
    for (i=t3; i<t3+n3; i++)
     {
      min=i-t3;
      for (j=i+1; j<t3+n3; j++)
          if (*j<*(t3+min)) min=j-t3;
     aux=*i;
      *i=*(t3+min);
      *(t3+min)=aux;
     }

}
/***************************************/
void tri_bulls(int n3,int *t3)
{int *i,*j,*pos,aux;
    for (i=t3+n3-1 ; i>t3 ; i=pos)
     {
      pos=t3;
      for (j=t3; j<i; j++)
            if (*j>*(j+1))
            {
             pos=j;
             aux=*j;
             *j=*(j+1);
             *(j+1)=aux;
            }
     }
}


/**********************************/

void insertion(int *n,int *t,int val )
{
    int i;
    for(i=*n;i>0 && *(t+i-1)>val;i--)
        *(t+i)=*(t+i-1);

    *(t+i)=val;
    (*n)++;
}

/*****************************************/

void tri_insertion(int n3,int *t3)
{ int i;

    i=1;
    while(i<n3)
    {insertion(&i,t3,*(t3+i));// le "i" s'increment a l'interieur de la fonction insertion
    }
}

/*******************************************
void insertion_pos(int n,int *t,int v)
{int pos,*t22,*i;

    printf("donner la position de val??=  ");
    scanf("%d",&pos);
    t22=(int*)malloc(sizeof(int)*(n+1));
    for(i=t;i<t+pos;i++)
    {
        *i=*t;
        *t22=*i;
        t22++;
    }
    t22++;
    *t22=v;
    t22++;

    for(i=t+pos;i<t+n;i++)
    {
        *i=*t;
        *t22=*i;
        t++;
    }

    Afficher(n+1,t22);



}*/

/******************************************/

int *maxi(int n,int *t)
{
    int *i, *max;
    max=t;
    for(i=t+1;i<(t+n);i++)
        if (*i>*max)
            max=i;

    return max;
}

/********************/

void tri_repmplacer(int n4,int *t4,int *b)
{
    int *i,*m;
    for(i=t4;i<=(t4+n4);i++)
    {
        m=maxi(n4,t4);
        *(b+(i-t4))=*m;
        *m=-1;

    }
}



