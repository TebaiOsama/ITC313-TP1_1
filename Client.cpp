/** 
  * File:     Client.cpp 
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Client
  */

#include <string>
#include "Client.h"
#include "Hotel.h"

Client::Client(int t_id_client, std::string t_nom_client, std::string t_prenom_client, int t_nbrReservation){
	m_id_client = t_id_client;
	m_nom_client = t_nom_client;
	m_prenom_client = t_prenom_client;
	m_nbrReservation = t_nbrReservation;
}

void Client::setIdClient(int t_id_client){
	m_id_client = t_id_client;
}

void Client::setNomClient(std::string t_nom_client){
	m_nom_client = t_nom_client;
}
void Client::setPrenomClient(std::string t_prenom_client){
	m_prenom_client = t_prenom_client;
}
void Client::setNbrReservation(int t_nbrReservation){
	m_nbrReservation = t_nbrReservation;
}

<<<<<<< HEAD
std::string Hotel::getID(){
	return m_id;
} 
=======
int Client::getIdClient(){
	return m_id_client;
}
>>>>>>> dev

std::string Client::getNomClient(){
	return m_nom_client;
}
std::string Client::getPrenomClient(){
	return m_prenom_client;
}
int Client::getNbrReservation(){
	return m_nbrReservation;
}

