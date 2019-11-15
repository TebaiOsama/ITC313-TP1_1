/**
  * File:     Chambre.h
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of the class Chambre
  */

#ifndef _Chambre_h
#define _Chambre_h

#include <string>

class Chambre{
 public:
 	Chambre();
 	Chambre(int t_id, double t_prix_par_nuit, int t_type=0); //constructeur avec 
 															 //comme type de chambre de base Single
 	//getters
 	int getIdChambre();
 	double getPrixParNuit();
 	std::string getType();
 	//setters
 	void setChambre(int t_id, double t_prix_par_nuit, int t_type);
 	void setIdChambre(int t_id);
 	void setPrixParNuit(double t_prix_par_nuit);
 	void setType(int t_type);
 	//methodes
 	void affichageChambres();

 private:
 	int m_id_chambre; //identifiant unique de la chambre
 	double m_prix_par_nuit; //prix par nuit d'une chambre
 	int m_type; //type de la chambre (ex. Single=0, Double=1)

};

#endif