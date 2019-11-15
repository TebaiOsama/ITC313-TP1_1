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
		Hotel();
		Hotel(std::string t_id, std::string t_nom, std::string t_ville, std::vector<Chambre> t_listechambres); //constructeur
		//setters
		void setIdHotel(std::string t_id);	
		void setNomHotel(std::string t_nom);
		void setVilleHotel(std::string t_ville);
		void setListeChambres(std::vector<Chambre> t_listechambres);
		//getters
		std::string getIdHotel();
		std::string getNomHotel();
		std::string getVilleHotel();
		std::vector<Chambre> getListeChambres();
		//methodes
		void afficherListe(); //affichage id, type et prix de chaque chambres
		std::vector<Chambre*> remplissageTableauChambres(int* t_tab_types); //remplir une liste de chambres
		
	
	private:
		std::string m_id_hotel; //id unique hotel
		std::string m_nom_hotel; //nom hotel
		std::string m_ville_hotel; //ville hotel
		std::vector<Chambre> m_listechambres; //liste des chambres de l'hôtel
		
};	

#endif
