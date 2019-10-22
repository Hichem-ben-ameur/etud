#include <stdio.h>
#include <stdlib.h>
#include "appli.h"
#include "etud.h"

/*
 * Variable globale qui contient la liste chainé etudiants
 */

//Etud* pEtud;

int main (int argc, char* argv[]){
    Etud* pEtud=NULL;
    int note,numeroEtud;
    char nom[50],prenom[50],choix;
   printf(" === Scola === \n");
    print_menu();
     scanf("%c", &choix);
     
     switch (choix){
  case '1':
    return  0;
    break;
  case '2':
     printf("Nom: \n");
     scanf("%s", nom);
     printf("Prénom: \n");
     scanf("%s", prenom);
     printf("Note: \n");
     scanf("%d", &note);
     printf("Numéro: \n");
     scanf("%d", &numeroEtud);
    // struct pEtud liste={numeroEtud,nom,prenom,note};
       /* allocation (en vert sur le diagramme) et affectation à la variable list (en bleu) */
       //pEtud = malloc(sizeof(pEtud)); 
   //add_list(&pEtud,numeroEtud,nom,prenom,note);

     add_etud(numeroEtud,nom,prenom,note);
    return 0;
    break;
  case '3':
  printf("Numero étudiant:  \n");
    scanf("%d", &numeroEtud);
    supp_list(pEtud,numeroEtud);
    return 0;
    break;
  case '4':
    return 0;
    break;
  default :
printf("Choix invalide ! \n");
printf("merci de saisir un chiffre entre 1 et 4 \n");
     print_menu();
  }

   //int i = add_etud(12,"hichem","ben ameur",4);


    return 0; 
}

