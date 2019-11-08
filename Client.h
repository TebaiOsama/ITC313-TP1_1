/** 
  * File:     Client.h 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Client
  */

#ifndef _Client_h
#define _Client_h

#include <string>

class Client{
	public:
		Client(int t_id, std::string t_nom, std::string t_prenom, int t_nbrReservation=0); //constructeur
		
		void setID(std::string t_id);
		void setNom(std::string t_nom);
		void setPrenom(std::string t_prenom);
		void setNbrReservation(int t_nbrReservation);
		std::string getID();
		std::string getNom();
		std::string getPrenom();
		int getNbrReservation();
			
	
	private:
		int m_id; //id unique utilisateur
		std::string m_nom; //nom client
		std::string m_prenom; //prenom client
		int m_nbrReservation; //nombre de reservactions effectués au total 
		
};

#endif
