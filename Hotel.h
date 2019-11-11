/** 
  * File:     Hotel.h 
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Hotel
  */

#ifndef _Hotel_h
#define _Hotel_h

#include "Chambre.h"
#include <string>
#include <vector>

class Hotel{
	public:
		Hotel(std::string t_id, std::string t_nom, std::string t_ville, std::vector<Chambre> t_listechambres); //constructeur
		//setters
		void setId(std::string t_id);	
		void setNom(std::string t_nom);
		void setVille(std::string t_ville);
		void setListeChambres(std::vector<Chambre> t_listechambres);
		//getters
		std::string getId();
		std::string getNom();
		std::string getVille();
		std::vector<Chambre> getListeChambres();
		//methodes
		void afficherListe();
		
	
	private:
		std::string m_id; //id unique hotel
		std::string m_nom; //nom hotel
		std::string m_ville; //ville hotel
		std::vector<Chambre> m_listechambres; //liste des chambres de l'hôtel
		
};	

#endif