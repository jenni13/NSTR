#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <signal.h>
#include "predicat_liste.h"
#include <sys/errno.h>

int nbMachine = 3;
bool MachineEnPanne[nbMachine] = false;
pthread_mutex_t MutexMachine[nbMachine]=1;
pthread_mutex_t Mutex1 = 1;

typedef struct list_thread list_thread
struct list_thread
{
	pthread t;
	struct list_thread *next;

};
typedef list_thread* list;




thread Th_Dialoque ()
{
	list ListeThreadPiece = Vide;
	
void fonc_evenementielle_USER1 (list l)
{
	pthread x;
	while( l != NULL)
	{
		x= l;
		pthread_sigkill(SIGKILL,x);
		exit(1);
		
		
}

void fnc_evenementielle_SIGUSER2(list l)
{
	RemoveFromListe(Liste_ThreadPiece, Sender);
}
 while(1)
 {
	 Saire_ordre_operateur(code_piece);
	 Numero_machine = corresponce_machine_code(code_piece);
	 
 }
	
}
