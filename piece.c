#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <signal.h>
#include "predicat_liste.h"
#include <sys/errno.h>

pthread_mutex_t mutex_machine[3];
pthread_mutex_t mutex_convoyeur;
int sec=0;


mutex_lock(mutex_machine[]);
mutex_lock(mutex_convoyeur);

send("deposer piece brute sur convoyeur\n", th_robot_alimentation);

if((message == NULL) || message == "defaillance")
{
	pthread_kill(th_Dialogue, SIGUSER1);
	exit(1);
}
else
{
	send("deposer piece brute sur table\n"th_machine[]);
	time_receive(message,sec);
}
if (message == NULL)
{
	pthread_kill(th_Dialogue,SIGUSR1);
	exit(1);
}	
mutex_unlock(mutex_convoyeur);
time_received(message,sec);

if(message == NULL)
{
	mutex_lock(Mutex1);
	Machine_en_panne[1]= true;
	mutex_unlock(Mutex1);
	pthread_kill(th_Dialogue, SIGUSR2);
	exit(1);
}
mutex_lock(mutex_convoyeur);
send("deposer piece usinee sur convoyeur",th_machine[]);
timed_received(message, sec);

if(message == NULL)
{
	pthread_kill(th_Dialogue, SIGUSR1);
	exit(1);
}
else
{
	send("retirer piece usinee du convoyeur, th_robot_retrait);
	timed_received(message,sec);
}

if(message == NULL)
{
	pthread_kill(th_Dialogue,SIGUSR1);
	exit(1);
}

else
{
	mutex_unlock(mutex_convoyeur);
	mutex_unlock(mutex_machine[]);
	pthread_kill(th_Dialogue, SIGUSER2);
	printf("usinage de la piece, code piece: %d : OK\n");
}

	 
		
	
	
	







