
#include"Autres.h"

void inverse(int n,int *t)
{
    int *i,*j,aux;
    for(i=t,j=t+n-1;i<t+n/2;i++,j--)
    {
        aux=*i;
        *i=*j;
        *j=aux;
    }
}

/*************************/

void rotation(int n,int *t)
{
    int *i,aux;
    aux=*(t+n-1);
    for(i=t+n-1;i>t;i--)
    {
       *i=*(i-1);
    }
    *t=aux;

}

/***************************/

int test(int n,int *t,int x)

{
    int *j;
    if(n!=0)
      {
          for(j=t;j<t+n;j++)
            {
                if(x==*j)
                    return 1;
            }
                return 0;
      }
    else
         return 0;
    }
/**************************/
void presents(int n1,int n5,int *t1,int *t5)
{int *i,*j,*t13,n13=0;
    if(n1>n5)
        t13=(int*)malloc(sizeof(int)*n1);
    else
         t13=(int*)malloc(sizeof(int)*n5);

    for(i=t1;i<t1+n1;i++)
      {
           for(j=t5;j<t5+n5;j++)
        {
            if(*i==*j)
                   if(test(n13,t13,*i)==0)
                   {
                    *(t13+n13)=*i;
                    n13++;
                   }


        }
      }
         Afficher(n13,t13);
}
/********************************************/
void absents(int n1,int n5,int *t1,int *t5)
{int *i,*j,*t13,n13=0,ok;

    t13=(int*)malloc(sizeof(int)*n1);

    for(i=t1;i<t1+n1;i++)
      {
           for(j=t5,ok=0;j<t5+n5;j++)
            {
                if(*i==*j)
                       ok=1;
            }
            if(ok==0)
                if(test(n13,t13,*i)==0)
                   {
                    *(t13+n13)=*i;
                    n13++;
                   }


      }
         Afficher(n13,t13);
}

/*********************************************/

void fusion1(int n3,int *t3,int n12,int *t12,int *t15)
{int *i,*j,k;
t15=(int*)malloc(sizeof(int)*(n3+n12));
    i=t3,j=t12,k=0;
    while(i<t3+n3 && j<t12+n12)
    {
        if(*i<*j)
        {
            *(t15+k)=*i;
            k++;
            i++;
        }
        else
        {
             *(t15+k)=*j;
            k++;
            j++;
        }
    }


    while(i<t3+n3)
    {
       *(t15+k)=*i;
            k++;
            i++;
    }

    while(j<t12+n12)
    {
         *(t15+k)=*j;
            k++;
            j++;
    }

Afficher(k,t15);
}

/********************************************/

void fusion2(int n,int *t10,int *t11,int *t16)
{int *i,*j,k;

    t16=(int*)malloc(sizeof(int)*n);

    for(i=t10,j=t11,k=0;i<t10+n;i++,j++,k++)
    {
        if(*j<*i)
        {
            *(t16+k)=(*i/10)*1000+(*j/10)*100+(*i%10)*10+(*j%10);
        }
        else
        {
             *(t16+k)=(*j/10)*1000+(*i/10)*100+(*j%10)*10+(*i%10);
        }

    }

    Afficher(k,t16);
}



