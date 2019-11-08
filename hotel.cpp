/** 
  * File:     hotel.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Definition of the class Date
  */

#include <string>
#include "hotel.h"
#include <vector>

Hotel::Hotel(std::string t_id, std::string t_nom, std::string t_ville, int t_listechambres){
	m_id = t_id;
	m_nom = t_nom;
	m_ville = t_ville;
	m_listechambres.pushback(t_listechambres);
}

void Hotel::setID(std::string t_id){
	m_id = t_id;
}

void Hotel::setNom(std::string t_nom){
	m_nom = t_nom;
}
void Hotel::setVille(std::string t_ville){
	m_ville = t_ville;
}
void Hotel::setListeChambres(int t_listechambres){
	m_listechambres = t_listechambres;
}

std::string Hotel::getID(){
	return m_id;
}

std::string Hotel::getNom(){
	return m_nom;
}
std::string Hotel::getVille(){
	return m_ville;
}
int Hotel::getListeChambres(){
	return m_listechambres;
}

		
		