#include "donnees.h"

Donnees::Donnees()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		lesEmployes[cpt] = NULL;
	}
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		lesTaches[cpt] = NULL;
	}
}
Donnees::~Donnees()
{
	DetruireEmployes();
	DetruireTaches();
}
void Donnees::DetruireEmployes()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		if (lesEmployes[cpt] != NULL)
		{
			delete lesEmployes[cpt];
			lesEmployes[cpt] = NULL;
		}
	}
}
void Donnees::DetruireTaches()
{
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		if (lesTaches[cpt] != NULL)
		{
			delete lesTaches[cpt];
			lesTaches[cpt] = NULL;
		}
	}
}
bool Donnees::AjouterEmploye(Employe inEmploye) 
{
	bool ajoutReussi = false;

	return ajoutReussi;
}
bool Donnees::AjouterTache(Tache inTache) 
{
	int cptTache = 0;
	bool ajoutReussi = false;
	while (cptTache<=maxTaches && ajoutReussi==false)
	{
		if (lesTaches[cptTache] = NULL)
		{
			lesTaches[cptTache] = new Tache(inTache);				
			ajoutReussi = true;

		}
		cptTache += 1;
	}

	return ajoutReussi;
}
Employe Donnees::ChercherEmployeSelonNumero(string inNumero)
{
	Employe employeTrouve;

	return employeTrouve;
}
Tache Donnees::ChercherTacheParIdentifiant(string inId)
{
	Tache tacheTrouve;
	bool trouver = false;
	int cptTache=0;
	while (cptTache <= maxTaches && trouver==false )
	{
		if (lesTaches[cptTache]->getIdentifiant()==inId)
		{
			tacheTrouve.setEtat(lesTaches[cptTache]->getEtatAvancement());
			tacheTrouve.setIdentifiant(lesTaches[cptTache]->getIdentifiant());
			tacheTrouve.setTitre(lesTaches[cptTache]->getTitre());
			tacheTrouve.initialiserDuree(lesTaches[cptTache]->getDuree(), lesTaches[cptTache]->getUniteMesure());
		}


		cptTache += 1;
	}

	return tacheTrouve;
}
