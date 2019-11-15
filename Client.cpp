/** 
  * File:     Client.cpp 
  * Authors:  O.Tebai/F.Forrer (Osama_Tebai@etu.u-bourgogne.fr/Francois_Forrer@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Client
  */

#include <string>
#include <iostream>
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

int Client::getIdClient(){
	return m_id_client;
}

std::string Client::getNomClient(){
	return m_nom_client;
}
std::string Client::getPrenomClient(){
	return m_prenom_client;
}
int Client::getNbrReservation(){
	return m_nbrReservation;
}

void Client::affichageClient(){
	std::string singplur=(m_nbrReservation<=1)?" reservation":" reservations"; //variable pour savoir si ajouter un s ou pas
	std::cout<<"Le client avec un ID de "<<m_id_client<<" s'appelle "<<m_nom_client<<" "<<m_prenom_client<<", et il a fait "<<m_nbrReservation<<singplur<<std::endl;
}
