/**
  * File:     Chambre.cpp
  * Author:   O.Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Definition of the class Chambre
  */

#include "Chambre.h"
#include <iostream>
#include <string>
#include <array> //librairie pour les tableaux

Chambre::Chambre(int t_id_chambre, double t_prix_par_nuit, int t_type){
	m_id_chambre = t_id_chambre;
	m_prix_par_nuit = t_prix_par_nuit;
	m_type = t_type;
}

int Chambre::getIdChambre(){
	return m_id_chambre;
}

double Chambre::getPrixParNuit(){
	return m_prix_par_nuit;
}

std::string Chambre::getType(){
	std::string types[] = {"Single", "Double", "Suite"};
	return types[m_type];
}

void Chambre::setChambre(int t_id_chambre, double t_prix_par_nuit, int t_type){
	m_id_chambre = t_id_chambre;
	m_prix_par_nuit = t_prix_par_nuit;
	m_type = t_type;
}

void Chambre::setIdChambre(int t_id_chambre){
	m_id_chambre = t_id_chambre;
}

void Chambre::setPrixParNuit(double t_prix_par_nuit){
	m_prix_par_nuit = t_prix_par_nuit;
}

void Chambre::setType(int t_type){
	m_type = t_type;
}

void Chambre::affichageChambres(){
	std::cout<<"La chambre avec ID = "<<m_id_chambre<<" aura un prix par nuit de "<<m_prix_par_nuit<<"€, et sera un type "<<m_type<<std::endl;
}
