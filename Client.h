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
		Client(int t_id_client, std::string t_nom_client, std::string t_prenom_client, int t_nbrReservation=0); //constructeur
		
		void setIdClient(int t_id_client);
		void setNomClient(std::string t_nom_client);
		void setPrenomClient(std::string t_prenom_client);
		void setNbrReservation(int t_nbrReservation);
		int getIdClient();
		std::string getNomClient();
		std::string getPrenomClient();
		int getNbrReservation();
			
	
	private:
		int m_id_client; //id unique utilisateur
		std::string m_nom_client; //nom client
		std::string m_prenom_client; //prenom client
		int m_nbrReservation; //nombre de reservactions effectués au total 
		
};

#endif
