/** 
  * File:     Reservation.h 
  * Authors:  O.Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Reservation
  */

#ifndef _Reservation_h
#define _Reservation_h

#include "Date.h"
#include <string>

class Reservation{
public:
	Reservation(int t_id, Date t_date_debut, Date t_date_fin, std::string t_id_hotel, int t_id_chambre, int t_id_client, double t_montant); //constructeur
	//getters
	int getId(); 
	Date getDateDebut();
	Date getDateFin();
	std::string getIdHotel();
	int getIdChambre();
	int getIdClient();
	double getMontant();
	//setters
	void setDateSejour(Date t_date_debut, Date t_date_fin);
	void setIdChambre(int t_id_chambre);
	//methodes
	int getSejour(); //obtenir la duree du sejour en nombre de jour
	double montantTotal(double t_montant, double t_remise=0); //calcul prix totale

private:
	int m_id;
	Date m_date_debut;
	Date m_date_fin;
	std::string m_id_hotel;
	int m_id_chambre;
	int m_id_client;
	double m_montant;
};

#endif
