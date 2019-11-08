/** 
  * File:     hotel.h 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Date
  */

#ifndef _hotel_h
#define _hotel_h

#include <string>
#include <vector>

class Hotel{
	public:
		Hotel(std::string t_id, std::string t_nom, std::string t_ville, std::vector<int> t_listechambres); //constructeur
		
		void setID(std::string t_id);	
		void setNom(std::string t_nom);
		void setVille(std::string t_ville);
		void setListeChambres(std::vector<int> t_listechambres);
		std::string getID();
		std::string getNom();
		std::string getVille();
		std::vector<int>  getListeChambres();
		void afficherListe();
		
	
	private:
		std::string m_id; //id unique hotel
		std::string m_nom; //nom hotel
		std::string m_ville; //ville hotel
		std::vector<int> m_listechambres; //liste des chambres de l'hôtel
		
};

#endif
