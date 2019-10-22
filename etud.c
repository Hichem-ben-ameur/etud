#include "etud.h"


int add_etud(int numero,char* nom, char* prenom, int note){

FILE *f = fopen("files/etudiants.txt", "a");
if (f == NULL)
{
    printf("Le fichier étudiants exite pas !\n");
    //exit();
}

fprintf(f, "%d;%s;%s;%d \n",numero,nom,prenom,note);


fclose(f);


  return 0;
}


void print_list(){
  printf(" Liste des etudiants \n ");

}
