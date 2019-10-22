#include <stdlib.h>
#include "etud.h"


int add_etud(int numeroEtud,char* nom,char* prenom,int note){

FILE *f = fopen("files/etudiants.txt", "a");
if (f == NULL)
{
    printf("Le fichier étudiants exite pas !\n");
    //exit();
}

fprintf(f, "%d;%s;%s;%d \n",numeroEtud,nom,prenom,note);


fclose(f);


  return 0;
}


void print_list(Etud *Etud){
  while (Etud!=NULL)
  {
   printf("%d \n",Etud->note);
  

   Etud=Etud->next;
  }
  
 // printf(" Liste des etudiants \n ");

}


/*void supp_list(Etud* pEtud, int numeroEtud){
Etud *temp= pEtud,*ptr=pEtud;
int i=0;
while (temp!=NULL)
{
  if (i>1)
  ptr=ptr->next;
  
  if (numeroEtud==temp->num)
  {
    ptr->next=temp->next;
    free(temp);
    print_list(pEtud);
    //return 1;
  }
    temp=temp->next;
    i++;
  
}
//return 0;
}*/



