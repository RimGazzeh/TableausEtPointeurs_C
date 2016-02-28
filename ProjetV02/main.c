#include <stdio.h>
#include <stdlib.h>
#include"Menus.h"
#include"Edit.h"
#include"EntreSortie.h"





int main(int argc, char *argv[])
{


    int *t1,*t2,*t3,*t4,*t5,*t6,*t7,*t8,*t9,*t10,*t11,*t12;
    int n1,n2=0,n3=0,n4=0,n5_6=0,n7=0,n8=0,n9=0,n10_11=0,n12=0;



    t2=affecter("BD/T2.txt",&n2,t2);

    t1=affecter("BD/T1.txt",&n1,t1);
    t3=affecter("BD/T3.txt",&n3,t3);
    t4=affecter("BD/T4.txt",&n4,t4);
    t5=affecter("BD/T5.txt",&n5_6,t5);
    t6=affecter("BD/T6.txt",&n5_6,t6);
    t7=affecter("BD/T7.txt",&n7,t7);
    t8=affecter("BD/T8.txt",&n8,t8);
    t9=affecter("BD/T9.txt",&n9,t9);
    t10=affecter("BD/T10.txt",&n10_11,t10);
    t11=affecter("BD/T11.txt",&n10_11,t11);
    t12=affecter("BD/T12.txt",&n12,t12);

   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,&n1,&n2,&n3,&n4,&n5_6,&n7,&n8,&n9,&n10_11,&n12);




    system("pause");
    return 0;
}
