/**
  * File:     Chambre.cpp
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Definition of the class Chambre
  */

#include "Chambre.h"
#include <string>
#include <array> //librairie pour les tableaux

Chambre::Chambre(int t_id, double t_prix_par_nuit, int t_type){
	m_id = t_id;
	m_prix_par_nuit = t_prix_par_nuit;
	m_type = t_type;
}

int Chambre::getIdChambre(){
	return m_id;
}

double Chambre::getPrixParNuit(){
	return m_prix_par_nuit;
}

std::string Chambre::getType(){
	std::string types[] = {"Single", "Double", "Suite"};
	return types[m_type];
}

void Chambre::setChambre(int t_id, double t_prix_par_nuit, int t_type){
	m_id = t_id;
	m_prix_par_nuit = t_prix_par_nuit;
	m_type = t_type;
}

void Chambre::setIdChambre(int t_id){
	m_id = t_id;
}

void Chambre::setPrixParNuit(double t_prix_par_nuit){
	m_prix_par_nuit = t_prix_par_nuit;
}

void Chambre::setType(int t_type){
	m_type = t_type;
}
