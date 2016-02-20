list supprimerElementEnTete(list liste)
{
	if(liste != NULL)
	{
		pthread* aRenvoyer = liste->next;
		free (liste);
		return aRenvoyer;
	}
	else
		return NULL;
}

list ajouterEnTete(list liste, pthread val)
{
	pthread* nouvelElement = malloc(sizeof(pthread)));
	nouvelElement-> t = val;
	nouvelElement-> next =liste;
	return nouvelElement;
}

