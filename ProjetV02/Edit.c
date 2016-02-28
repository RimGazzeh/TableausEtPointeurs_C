#include"Edit.h"



/****----------Pour la modification titre et size console----------------***/


/*!
 * \fn          int setConsoleScreenBufferInfo(COORD dwSize)
 * \brief       Modifie la taille de la console en cours.
 * \param[in]   dwSize  Spécifie la nouvelle taille de la console.
 * \return      Si l'opération a réussi, retourne \c EXIT_SUCCESS,
 *              sinon \c EXIT_FAILURE.
 * \note        To get extended error information, call GetLastError.
 */
int setConsoleScreenBufferInfo(COORD dwSize)
{   HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE) ;
    COORD bakDwSize = dwSize ;
    SMALL_RECT srctWindow ;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo ;

    // Obtenir les informations de la console
    if(!GetConsoleScreenBufferInfo(hConsoleOutput, &csbiInfo)) return EXIT_FAILURE ;

    // Adapter le buffer de la console en fonction des tailles maximales
    dwSize.X = (dwSize.X>csbiInfo.srWindow.Right)?dwSize.X:csbiInfo.dwSize.X ;
    dwSize.Y = (dwSize.Y>csbiInfo.srWindow.Bottom)?dwSize.Y:csbiInfo.dwSize.Y ;
    if(!SetConsoleScreenBufferSize(hConsoleOutput, dwSize)) return EXIT_FAILURE ;

    // Modifier la taille de la console
    dwSize = bakDwSize ;
    srctWindow = csbiInfo.srWindow ;
    srctWindow.Right = dwSize.X - 1 ;
    srctWindow.Bottom = dwSize.Y - 1 ;
    if(!SetConsoleWindowInfo(hConsoleOutput, TRUE, &srctWindow)) return EXIT_FAILURE ;

    // Adapter la taille du buffer de la console à sa taille (pas d'ascenseurs)
    dwSize = bakDwSize ;
    if(!SetConsoleScreenBufferSize(hConsoleOutput, dwSize)) return EXIT_FAILURE ;

    return EXIT_SUCCESS ;
}


void EditFenetre(char titre[200],int x,int y)
{   COORD dwSize = {x,y} ;//(120,25)

    SetConsoleTitle(titre) ;	// Réglage du titre
    if(setConsoleScreenBufferInfo(dwSize)) {	// Réglage des coordonnées
        printf("setConsoleScreenBufferInfo (%ld)\n", GetLastError());
    }

}

/****----------Pour la modification couleur console----------------***/


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);

}

/* dans le main:
 ->
   Color(12,3);
   printf("La ton texte va avoir la couleur 12 comme texte et 3 pour fond");
   Color(15, 0); //pour retourner au parametre default de la console          */



   /****------Ecriture dans la position (x,y)----------****/


 void gotoxy(int x, int y)
{
   HANDLE hConsoleOutput;
   COORD dwCursorPosition;
   //cout.flush();
   dwCursorPosition.X = x;
   dwCursorPosition.Y = y;
   hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

//----->>  RQ:y tres grande->retour a la ligne  <<<----------

/****----------****-------------lECTURE ligne par ligne-------------*****------****/
void AnimationLigne(char chemain[200],int x,int y)
{
    int MAX=100;
    FILE* fichier = NULL;
    char chaine[MAX] ;
    chaine[MAX] = "";
    fichier = fopen(chemain, "r");

    if (fichier != NULL)
    {char line [ 128 ];
         while (fgets(chaine, MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            gotoxy(x,y);
            printf("%s", chaine);
            y++;
            _sleep(45);
        }
        fclose(fichier);
    }
}



/****-------lECTURE caractére par caractére-------****/
void AnimationChar(char chemain[200])
{


    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen(chemain, "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
            _sleep(60);
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }
}

