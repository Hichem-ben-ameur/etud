#include <stdio.h>

typedef struct etud
{
  unsigned int num;
  char  nom[50];
  char  prenom[50];
  float note;
  struct etud* next;
}Etud;


/*
 * variable global externe
 */

extern Etud* pEtud;


/**
 *
 */
void print_list(Etud *Etud);

/**
 *
 */
void add_list(Etud** pEtud,int numeroEtud,char* nom,char* prenom,int note);

/**
 *
 */
int add_etud(int numeroEtud,char* nom,char* prenom,int note);


/**
 *
 */
int lire_choix();

void supp_list(Etud* pEtud, int numeroEtud);
