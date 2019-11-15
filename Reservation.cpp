/** 
  * File:     Reservation.cpp 
  * Authors:  O.Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Reservation
  */

#include "Date.h"
#include "Reservation.h"
#include <iostream>

Reservation::Reservation(int t_id, Date t_date_debut, Date t_date_fin, std::string t_id_hotel, int t_id_chambre, int t_id_client, double t_montant){
	m_id = t_id;
	m_date_debut = t_date_debut;
	m_date_fin = t_date_fin;
	m_id_hotel = t_id_hotel;
	m_id_chambre = t_id_chambre;
	m_id_client= t_id_client;
	m_montant = t_montant;
}

int Reservation::getId(){
	return m_id;
}
Date Reservation::getDateDebut(){
	return m_date_debut;
}
Date Reservation::getDateFin(){
	return m_date_fin;
}
std::string Reservation::getIdHotel(){
	return m_id_hotel;
}
int Reservation::getIdChambre(){
	return m_id_chambre;
}
int Reservation::getIdClient(){
	return m_id_client;
}
double Reservation::getMontant(){
	return m_montant;
}

void Reservation::setDateSejour(Date t_date_debut, Date t_date_fin){
	m_date_fin = t_date_fin;
	m_date_debut = t_date_debut;
}
void Reservation::setIdChambre(int t_id_chambre){
	m_id_chambre = t_id_chambre;
}

int Reservation::getSejour(){
	int jours_par_mois[12]    ={31,28,31,30,31,30,31,31,30,31,30,31}; //jours de chaque mois
	int jours_par_mois_bis[12]={31,29,31,30,31,30,31,31,30,31,30,31}; //jours de chaque mois dans une annee bisestile
	int jours_sejour=0; //variable qu'on va retourner
	int i_month=m_date_debut.getMonth(); //compteur pour savoir dans quel mois on se trouve
	int i_year=m_date_debut.getYear(); //compteur pour savoir dans quelle annee on se trouve
	if(m_date_debut.getMonth()==m_date_fin.getMonth() && m_date_debut.getYear()==m_date_fin.getYear()) //si ils sont dans le meme mois et an, il suffit de faire une difference
		jours_sejour=m_date_fin.getDay()-m_date_debut.getDay();
	else{
		//On initialise les jours aux jours restants dans le mois du debut jusqu'à ceux du mois finale
		if(i_year%4)
			jours_sejour=jours_par_mois_bis[m_date_debut.getMonth()-1]-m_date_debut.getDay()+m_date_fin.getDay();
		else
			jours_sejour=jours_par_mois[m_date_debut.getMonth()-1]-m_date_debut.getDay()+m_date_fin.getDay();
		while(i_year<=m_date_fin.getYear()){
			if(i_year%4==0){ //On verifie si l'annee presente est bissextile ou pas 
				if(i_year==m_date_fin.getYear()){ //si le compteur annee et l'anne de fin sont identiques, on va faire arriver le compteur jusqu'au mois finale
					while(i_month<m_date_fin.getMonth()-1){
						jours_sejour+=jours_par_mois_bis[i_month];
						i_month++;
					}
				}
				else{
					while(i_month<12){ //Sinon, si on ne se trouve pas dans l'annee de la date de fin, on va faire arriver le compteur di mois jusqu'à 11
						jours_sejour+=jours_par_mois_bis[i_month];
						i_month++;
					}
				}
			}
			else{
				if(i_year==m_date_fin.getYear()){
					while(i_month<m_date_fin.getMonth()-1){
						jours_sejour+=jours_par_mois[i_month];
						i_month++;	
				}
			}
				else{
					while(i_month<12){
						jours_sejour+=jours_par_mois[i_month];
						i_month++;
					}
				}
			}
			i_year++; //on reinitialise le compteur des mois a chaque fois qu'on passe à l'annee suivante
			i_month=0;
		}
	}
	return jours_sejour;
}

double Reservation::montantTotal(double t_montant, double t_remise){
	return getSejour()*(t_montant-t_remise*t_montant);
}

