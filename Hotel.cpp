/** 
  * File:     Hotel.cpp 
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Hotel
  */

#include "Hotel.h"
#include "Chambre.h"
#include <string>
#include <vector>
#include <array>
#include <iostream>

Hotel::Hotel(){}

Hotel::Hotel(std::string t_id_hotel, std::string t_nom_hotel, std::string t_ville_hotel, std::vector<Chambre> t_listechambres){
	m_id_hotel = t_id_hotel;
	m_nom_hotel = t_nom_hotel;
	m_ville_hotel = t_ville_hotel;
	m_listechambres=t_listechambres;
}

void Hotel::setIdHotel(std::string t_id_hotel){
	m_id_hotel = t_id_hotel;
}

void Hotel::setNomHotel(std::string t_nom_hotel){
	m_nom_hotel = t_nom_hotel;
}
void Hotel::setVilleHotel(std::string t_ville_hotel){
	m_ville_hotel = t_ville_hotel;
}

void Hotel::setListeChambres(std::vector<Chambre> t_listechambres){
	m_listechambres=t_listechambres;
}

std::string Hotel::getIdHotel(){
	return m_id_hotel;
}

std::string Hotel::getNomHotel(){
	return m_nom_hotel;
}
std::string Hotel::getVilleHotel(){
	return m_ville_hotel;
}
std::vector<Chambre> Hotel::getListeChambres(){
	return m_listechambres;
}

void Hotel::afficherListe(){
	for(int i=0; i<m_listechambres.size();i++){
		std::cout<<m_listechambres[i].getIdChambre()<<std::endl;
		std::cout<<m_listechambres[i].getPrixParNuit()<<std::endl;
		std::cout<<m_listechambres[i].getType()<<std::endl;
	}
}
