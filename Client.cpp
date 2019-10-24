/** 
  * File:     Client.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Date
  */

#include <string>
#include "Client.h"

Client::Client(int t_ID, std::string t_nom, std::string t_prenom, int t_nbrReservation){
	m_ID = t_ID;
	m_nom = t_nom;
	m_prenom = t_prenom;
	m_nbrReservation = t_nbrReservation;
}
		
void Client::setNom(std::string t_nom){
	m_nom = t_nom;
}
void Client::setPrenom(std::string t_prenom){
	m_prenom = t_prenom;
}
void Client::setNbrReservation(int t_nbrReservation){
	m_nbrReservation = t_nbrReservation;
}

std::string Client::getNom(){
	return m_nom;
}
std::string Client::getPrenom(){
	return m_prenom;
}
int Client::getNbrReservation(){
	return m_nbrReservation;
}

