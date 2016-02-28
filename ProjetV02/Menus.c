#include"Menus.h"
#include"EntreSortie.h"
#include"Edit.h"
#include"trie.h"
#include"Autres.h"
#include"recherche.h"

#define x 110
#define y 48


void menu_general(int *t1,int *t2,int *t3,int *t4,int *t5,int *t6,int *t7,int *t8,int *t9,int *t10,int *t11,int *t12,int *n1,int *n2,int *n3,int *n4,int *n5_6,int *n7,int *n8,int *n9,int *n10_11,int *n12)
{int c,ok;
    EditFenetre("Menu Principale",x,y);
    Color(11,0);
    AnimationLigne("Interfaces/menu.txt",30,1);
    Color(7,0);
    AnimationLigne("Interfaces/Cadre1.txt",4,11);
    Color(11,0);
    AnimationLigne("Interfaces/MenuGeneral.txt",18,16);
    Color(8,0);


    AnimationLigne("Interfaces/msg.txt",48,22);
    Color(7,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    gotoxy(83,30);
    Color(6,0);

    AnimationChar("Interfaces/text.txt");
    Color(14,0);
    do{
    gotoxy(90,31);
    printf("     ");
    gotoxy(90,31);
    ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
    if(ok==0)
        scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
    }while(ok==0 || c<1 || c>12);
    switch(c){
    case 1:
        menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        break;
    case 2:
     {


        system("cls");
            EditFenetre("Transfere tab 1",x,y);

         if(*n1!=0)
        {

            Color(11,0);
            gotoxy(13,1);
            printf("Transfere tableau 1");
            printf("\n\n\n\n\n");
            Color(9,0);
            int *A;
            A=(int*)malloc(sizeof(int)*(*n1));
            printf("**** Tableau initial ****\n");
            Afficher(*n1,t1);
            printf("\n\n\n\n\n");
            Tranfere(*n1,t1,A);
            Color(14,0);
            printf("**** Nouveau Tableau ****\n");
            Afficher(*n1,A);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}


        }

        }
        else
        {
             Color(11,0);
            gotoxy(13,1);
            printf("Transfere tableau 1");
            printf("\n\n\n\n\n");
            Color(12,0);
            gotoxy(20,30);
            printf("Remplire le tablrau 1 avant d'effectuer cette operation !!!!!");
            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}


        }

        }
         break;
     }
   case 3:
       {
           system("cls");
            EditFenetre("Symetrique t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Symetrique tab1");
            printf("\n\n\n\n\n");
            Color(14,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n\n");
            if(Symetrique(*n1,t1))
                printf("---->t1 est symetrique ");
            else
                printf("---->t1 n'est pas symetrique ");


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
       }
    case 4:
        menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        break;
    case 5:
        menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        break;

/*    case 6:

         {

            system("cls");
            EditFenetre("Insertion",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Insertion d'une valeaur dans t2");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T2 avant Insertion:\n ");
            Afficher(*n2 ,t2);
            printf("\n\n\n");
            Color(7,0);

            int *t22,n;
            int v;
            printf("\n\nDonner la val a inserer :: ");
            scanf("%d", &v);
            insertion_pos(*n2,t22,v);


            printf("***T2 apret insertion:\n ");
            Afficher(n,t22);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }*/

    case 7:
        {

        system("cls");
            EditFenetre("Inversion",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Inversion de t9");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T9 avant Invertion:\n ");
            Afficher(*n9 ,t9);
            printf("\n\n\n");
            Color(7,0);

            printf("***T9 apret invertion:\n ");
             inverse(*n9,t9);
            Afficher(*n9,t9);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }



    case 8:

         {

        system("cls");
            EditFenetre("Rotation",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Rotation de t9");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T9 avant Rotation:\n ");
            Afficher(*n9 ,t9);
            printf("\n\n\n");
            Color(7,0);

            printf("***T9 apret Rotation:\n ");
             rotation(*n9,t9);
            Afficher(*n9,t9);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }



    case 9:
         {

        system("cls");
            EditFenetre("Present",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Present avec t1 et t5");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("*** T1 :\n ");
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            printf("*** T5 :\n ");
            Afficher(*n5_6 ,t5);
            Color(7,0);

            printf("***Present:\n ");
            presents(*n1,*n5_6,t1,t5);
            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }



    case 10:


         {

        system("cls");
            EditFenetre("Absent",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Absent avec t1 et t5");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("*** T1 :\n ");
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            printf("*** T5 :\n ");
            Afficher(*n5_6 ,t5);
            Color(7,0);

            printf("***Absent :\n ");
            absents(*n1,*n5_6,t1,t5);
            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


    case 11:
        menu_fusion(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        break;
    case 12:
        exit(0);
        break;


        }

}

/***-------------------------------***/

void menu_remplissage(int *t1,int *t2,int *t3,int *t4,int *t5,int *t6,int *t7,int *t8,int *t9,int *t10,int *t11,int *t12,int *n1,int *n2,int *n3,int *n4,int *n5_6,int *n7,int *n8,int *n9,int *n10_11,int *n12)
{int c,ok;
    EditFenetre("Menu Remplissage",x,y);
    Color(11,0);
    AnimationLigne("Interfaces/menu.txt",30,1);
    Color(7,0);
    AnimationLigne("Interfaces/Cadre1.txt",4,11);
    Color(11,0);
    AnimationLigne("Interfaces/MenuRemplissage.txt",10,14);
    Color(6,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
     Color(7,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    gotoxy(83,30);
    Color(6,0);
    AnimationChar("Interfaces/text.txt");
    Color(14,0);
     do{
    gotoxy(90,31);
    printf("     ");
    gotoxy(90,31);
    ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
    if(ok==0)
        scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
    }while(ok==0 || c<1 || c>13);
    switch(c){

    case 1:
        {
            system("cls");
            EditFenetre("Remplissage tableau 1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 1");
            gotoxy(10,2);
            Color(7,0);
            printf("<<tab d'entiers strictement positives>>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n1);
            t1=(int*)malloc(sizeof(int)*(*n1));
            Color(7,0);
            Chargement1(*n1 ,t1);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T1.txt";
            remplissage(t1,*n1,nom);

            Color(14,0);
            Afficher(*n1 ,t1);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
    }
    case 2:
        {
            system("cls");
            EditFenetre("Remplissage tableau 2",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 2");
            gotoxy(10,2);
            Color(7,0);
            printf("<<tab d'entiers strictement positives>>");
            printf("\n\n\n\n\n");
            Color(10,0);
            saisie(n2);
            t2=(int*)malloc(sizeof(int)*(*n2));
            Color(7,0);
            Chargement1(*n2,t2);//on vas lesser une case pour la fonction insertion
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T2.txt";
            remplissage(t2,*n2,nom);

            Color(14,0);
            Afficher(*n2 ,t2);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 3:
         {
            system("cls");
            EditFenetre("Remplissage tableau 3",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 3");
            gotoxy(10,2);
            Color(7,0);
            printf("<<tab d'entiers>>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n3);
            t3=(int*)malloc(sizeof(int)*(*n3));
            Color(7,0);
            Chargement2(*n3 ,t3);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T3.txt";
            remplissage(t3,*n3,nom);

            Color(14,0);
            Afficher(*n3 ,t3);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 4:
         {
            system("cls");
            EditFenetre("Remplissage tableau 4",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 4");
            gotoxy(10,2);
            Color(7,0);
            printf("<<tab d'entiers>>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n4);
            t4=(int*)malloc(sizeof(int)*(*n4));
            Color(7,0);
            Chargement2(*n4 ,t4);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T4.txt";
            remplissage(t4,*n4,nom);

            Color(14,0);
            Afficher(*n4 ,t4);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 5:
        {
            system("cls");
            EditFenetre("Remplissage tableau 5",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 5");
            gotoxy(10,2);
            Color(7,0);
            printf("<<tab d'entiers strictement positives>>");
            printf("\n\n\n\n");
            Color(10,0);
            printf("%d",*n5_6);
            if (*n5_6==0)
                saisie(n5_6);
            t5=(int*)malloc(sizeof(int)*(*n5_6));
            Color(7,0);
            Chargement1(*n5_6 ,t5);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T5.txt";
            remplissage(t5,*n5_6,nom);

            Color(14,0);
            Afficher(*n5_6 ,t5);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 6:
         {
            system("cls");
            EditFenetre("Remplissage tableau 6",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 6");
            gotoxy(6,2);
            Color(7,0);
            printf("<<tab entier positive et distinct tieé par ordre croissant >>");
            printf("\n\n\n\n");
            Color(10,0);
            if (*n5_6==0)
                saisie(n5_6);
            t6=(int*)malloc(sizeof(int)*(*n5_6));
            Color(7,0);
            Chargement6(*n5_6 ,t6);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T6.txt";
            remplissage(t6,*n5_6,nom);

            Color(14,0);
            Afficher(*n5_6 ,t6);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 7:
         {
            system("cls");
            EditFenetre("Remplissage tableau 7",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 7");
            gotoxy(6,2);
            Color(7,0);
            printf("<<tab entier positive et distinct tieé par ordre croissant >>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n7);
            t7=(int*)malloc(sizeof(int)*(*n7));
            Color(7,0);
            Chargement6(*n7 ,t7);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T7.txt";
            remplissage(t7,*n7,nom);

            Color(14,0);
            Afficher(*n7 ,t7);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 8:
         {
            system("cls");
            EditFenetre("Remplissage tableau 8",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 8");
            gotoxy(6,2);
            Color(7,0);
            printf("<<tab avec des entiers aleatoires de 3 chiffres >>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n8);
            t8=(int*)malloc(sizeof(int)*(*n8));
            Color(7,0);
            Chargement5(*n8 ,t8);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T8.txt";
            remplissage(t8,*n8,nom);

            Color(14,0);
            Afficher(*n8 ,t8);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 9:
         {
            system("cls");
            EditFenetre("Remplissage tableau 9",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 9");
             gotoxy(6,2);
            Color(7,0);
            printf("<< tab d'entier genérer aleatoirement >>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n9);
            t9=(int*)malloc(sizeof(int)*(*n9));
            Color(7,0);
            Chargement4(*n9 ,t9);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T9.txt";
            remplissage(t9,*n9,nom);

            Color(14,0);
            Afficher(*n9 ,t9);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 10:
         {
            system("cls");
            EditFenetre("Remplissage tableau 10",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 10");
             gotoxy(6,2);
            Color(7,0);
            printf("<< tab d'entier de 2 chiffres >>");
            printf("\n\n\n\n");
            Color(10,0);
            if(*n10_11==0)
                saisie(n10_11);
            t10=(int*)malloc(sizeof(int)*(*n10_11));
            Color(7,0);
            Chargement7(*n10_11 ,t10);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T10.txt";
            remplissage(t10,*n10_11,nom);

            Color(14,0);
            Afficher(*n10_11 ,t10);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 11:
         {
            system("cls");
            EditFenetre("Remplissage tableau 11",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 11");
            gotoxy(6,2);
            Color(7,0);
            printf("<< tab d'entier de 2 chiffres >>");
            printf("\n\n\n\n");
            Color(10,0);
            if(*n10_11==0)
                saisie(n10_11);
            t11=(int*)malloc(sizeof(int)*(*n10_11));
            Color(7,0);
            Chargement7(*n10_11 ,t11);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T11.txt";
            remplissage(t11,*n10_11,nom);

            Color(14,0);
            Afficher(*n10_11 ,t11);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 12:
         {
            system("cls");
            EditFenetre("Remplissage tableau 12",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Remplissage tableau 12");
             gotoxy(6,2);
            Color(7,0);
            printf("<< tab d'entier genérer aleatoirement >>");
            printf("\n\n\n\n");
            Color(10,0);
            saisie(n12);
            t12=(int*)malloc(sizeof(int)*(*n12));
            Color(7,0);
            Chargement2(*n12 ,t12);
            char* nom =(char*) malloc(sizeof(char)*10);
            nom = "BD/T12.txt";
            remplissage(t12,*n12,nom);

            Color(14,0);
            Afficher(*n12 ,t12);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_remplissage(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }
    case 13:
        menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);


        }

}

/***-------------------------------***/

void menu_recherche(int *t1,int *t2,int *t3,int *t4,int *t5,int *t6,int *t7,int *t8,int *t9,int *t10,int *t11,int *t12,int *n1,int *n2,int *n3,int *n4,int *n5_6,int *n7,int *n8,int *n9,int *n10_11,int *n12)
{int c,ok;
    EditFenetre("Menu Recherche",x,y);
    Color(11,0);
    AnimationLigne("Interfaces/menu.txt",30,1);
    Color(7,0);
    AnimationLigne("Interfaces/Cadre1.txt",4,11);
    Color(11,0);
    AnimationLigne("Interfaces/MenuRecherche.txt",8,16);
    Color(6,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    Color(7,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    gotoxy(83,30);
    Color(6,0);
    AnimationChar("Interfaces/text.txt");
    Color(14,0);
     do{
    gotoxy(90,31);
    printf("     ");
    gotoxy(90,31);
    ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
    if(ok==0)
        scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
    }while(ok==0 || c<1 || c>12);
    switch(c){

    case 1:
        {
            system("cls");
            EditFenetre("Recherche distinct t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Nombre d'elements distinct dans t1");
            printf("\n\n\n\n\n");
            Color(14,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(10,0);
            printf("-----> Nb d'elements distincts:: %d",recherche_distinct(*n1,t1));


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }



    case 2:
        {
            system("cls");
            EditFenetre("Recherche Elements Sup t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Elements Sup dans t1");
            printf("\n\n\n\n\n");
            Color(10,0);
            int a;
            printf("donner un entier :: ");
            scanf("%d",&a);
            Color(7,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(12,0);
            recherche_element_sup(*n1,t1,a);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 3:
        {
            system("cls");
            EditFenetre("Recherche Div Multiples t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Div Multiples dans t1");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(7,0);
            recherche_div_multiple(*n1,t1);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


        case 4:
        {
            system("cls");
            EditFenetre("Recherche Elements Consecutifs t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Elements Consecutifs dans t1");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(7,0);
            recherche_consecutif(*n1,t1);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 5:
        {
            system("cls");
            EditFenetre("Recherche Blocs t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Blocs dans t1");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(7,0);
            //fflush(stdin);
            recherche_blocks(t1,*n1);


            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 6:
        {
            system("cls");
            EditFenetre("Recherche El Frequent t1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche El Frequent  t1");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n1 ,t1);
            printf("\n\n\n");
            Color(7,0);
            recherche_div_multiple(*n1,t1);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 7:
        {
            system("cls");
            EditFenetre("Recherche Sequentielle t3",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Sequentielle t3");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n3 ,t3);
            printf("\n\n\n");
            Color(7,0);
            recherche_sequencielle(*n3,t3);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


    case 8:
        {
            system("cls");
            EditFenetre("Recherche dichotomique t3",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche dichotomique t3");
            printf("\n\n\n\n\n");

            Color(12,0);
            tri_insertion(*n3,t3);
            Afficher(*n3 ,t3);
            printf("\n\n\n");
            Color(7,0);
            recherche_dichotomique(*n3,t3);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

      case 9:
        {

            system("cls");
            EditFenetre("Recherche median t6/7",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche median t6/7");
            printf("\n\n\n\n\n");

            Color(12,0);
            tri_insertion(*n5_6,t6);
            tri_insertion(*n7,t7);
            printf("Tab6:");
            Afficher(*n5_6 ,t6);
            printf("Tab7:");
            Afficher(*n7 ,t7);
            printf("\n\n\n");
            int u;
            Color(7,0);

            printf("Donner un enier positives:");
            scanf("%d",&u);
            recherche_median(u,t6,t7);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 10:
        {

            system("cls");
            EditFenetre("Recherche Permutation t8",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Permutation t8");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n8 ,t8);
            printf("\n\n\n");
            Color(7,0);
            recherche_permutation(*n8,t8);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

    case 11:
        {

            system("cls");
            EditFenetre("Recherche Nb sequences t8",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Recherche Nb sequences t8");
            printf("\n\n\n\n\n");

            Color(12,0);
            Afficher(*n8 ,t8);
            printf("\n\n\n");
            Color(7,0);
            recherche_nb_sequences(*n8,t8);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_recherche(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

    case 12:
        menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        break;
        }

}

/***-------------------------------***/

void menu_tri(int *t1,int *t2,int *t3,int *t4,int *t5,int *t6,int *t7,int *t8,int *t9,int *t10,int *t11,int *t12,int *n1,int *n2,int *n3,int *n4,int *n5_6,int *n7,int *n8,int *n9,int *n10_11,int *n12)
{int c,ok;
    EditFenetre("Menu Tri",x,y);
    Color(11,0);
    AnimationLigne("Interfaces/menu.txt",30,1);
    Color(7,0);
    AnimationLigne("Interfaces/Cadre2.txt",4,11);
    Color(11,0);
    AnimationLigne("Interfaces/MenuTri.txt",8,20);
    Color(6,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    Color(7,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    gotoxy(83,30);
    Color(6,0);
    AnimationChar("Interfaces/text.txt");
    Color(14,0);
     do{
    gotoxy(90,31);
    printf("     ");
    gotoxy(90,31);
    ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
    if(ok==0)
        scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
    }while(ok==0 || c<1 || c>5);
    switch(c){
    case 1:
         {

            system("cls");
            EditFenetre("Trie par selection de t3",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Trie par selection de t3");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T3 avant tri:\n ");
            Afficher(*n3 ,t3);
            printf("\n\n\n");
            Color(7,0);
            tri_selection(*n3,t3);
            printf("***T3 apret tri:\n ");
            Afficher(*n3 ,t3);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

    case 2:
         {

            system("cls");
            EditFenetre("Trie a bulles de t3",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Trie a bulles de t");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T3 avant tri:\n ");
            Afficher(*n3 ,t3);
            printf("\n\n\n");
            Color(7,0);
            tri_bulls(*n3,t3);
            printf("***T3 apret tri:\n ");
            Afficher(*n3 ,t3);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


        case 3:
         {

            system("cls");
            EditFenetre("Trie par insertion ",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Trie par insertion de t3");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T3 avant tri:\n ");
            Afficher(*n3 ,t3);
            printf("\n\n\n");
            Color(7,0);
            tri_insertion(*n3,t3);
            printf("***T3 apret tri:\n ");
            Afficher(*n3 ,t3);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

        case 4:
         {

            system("cls");
            EditFenetre("Trie Remplacer",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Trie remplacer de t4");
            printf("\n\n\n\n\n");

            Color(12,0);
            printf("***T4 avant tri:\n ");
            Afficher(*n4 ,t4);
            printf("\n\n\n");
            Color(7,0);
            int *b;
            b=(int *)malloc(sizeof(int)*(*n4));
            tri_repmplacer(*n4,t4,b);
            printf("***T3 apret tri:\n ");
            Afficher(*n4 ,t4);
            Afficher(*n4 ,b);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_tri(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


    case 5:
        menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        }
}

/***-------------------------------***/

void menu_fusion(int *t1,int *t2,int *t3,int *t4,int *t5,int *t6,int *t7,int *t8,int *t9,int *t10,int *t11,int *t12,int *n1,int *n2,int *n3,int *n4,int *n5_6,int *n7,int *n8,int *n9,int *n10_11,int *n12)
{int c,ok;
    EditFenetre("Menu Fusion",x,y);
    Color(11,0);
    AnimationLigne("Interfaces/menu.txt",30,1);
    Color(7,0);
    AnimationLigne("Interfaces/Cadre2.txt",4,11);
    Color(11,0);
    AnimationLigne("Interfaces/MenuFusion.txt",8,22);
    Color(6,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    Color(7,0);
    AnimationLigne("Interfaces/msg.txt",48,22);
    gotoxy(83,30);
    Color(6,0);
    AnimationChar("Interfaces/text.txt");
    Color(14,0);
     do{
    gotoxy(90,31);
    printf("     ");
    gotoxy(90,31);
    ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
    if(ok==0)
        scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
    }while(ok==0 || c<1 || c>3);
    switch(c){

    case 1:
         {

            system("cls");
            EditFenetre("Fusion_1",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Fusion de t3 et t12");
            printf("\n\n\n\n\n");

            Color(7,0);
            printf("***Tab t3:\n ");
            Afficher(*n4 ,t4);
            printf("***\n\n\nTab t12:\n ");
            Afficher(*n12 ,t12);
            printf("\n\n\n");
            Color(12,0);

            printf("***Fusion:\n ");
            int *t15;
            fusion1(*n3,t3,*n12,t12,t15);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_fusion(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }

    case 2:
         {

            system("cls");
            EditFenetre("Fusion__2",x,y);
            Color(11,0);

            gotoxy(13,1);
            printf("Fusion de t10 et t11");
            printf("\n\n\n\n\n");

            Color(7,0);
            printf("***Tab t10:\n ");
            Afficher(*n10_11 ,t10);
            printf("***\n\n\nTab t11:\n ");
            Afficher(*n10_11 ,t11);
            printf("\n\n\n");
            Color(12,0);

            printf("***Fusion2:\n ");
            int *t16;
            fusion2(*n10_11,t10,t11,t16);

            Color(7,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
             Color(13,0);
            AnimationLigne("Interfaces/msg.txt",48,30);
            Color(6,0);
            AnimationLigne("Interfaces/text1.txt",83,38);
            Color(14,0);
             do{
            gotoxy(90,40);
            printf("     ");
            gotoxy(90,40);
            ok=scanf("%d",&c);//ok pour tester si le type entré est int->1 ou nn->0
            if(ok==0)
                scanf ("%*[^\n]");//reparer le buffer car si dans le scanf en a entré un type diff a celui declarer -> l'execution se bloque
            }while(ok==0 || c<0 || c>1);
            switch(c){
            case 0:
               {
                   system("cls");
                   menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}
            case 1:
               {
                   system("cls");
                   menu_fusion(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
                    break;}

         break;
        }
            break;
        }


    case 3:
        menu_general(t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,n1,n2,n3,n4,n5_6,n7,n8,n9,n10_11,n12);
        }
}

/***-------------------------------***/

void erreur()
{
    EditFenetre("Erreur!!",20,10);
    AnimationLigne("Interfaces/msg.txt",20,10);
}

