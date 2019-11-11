/** 
  * File:     main_hotel.cpp 
  * Author:   O. Tebai (Osama_Tebai@etu.u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Test Client hotel
  */

#include "Hotel.h"
#include "Chambre.h"
#include <iostream>
#include <vector>

int main(){
	std::vector<Chambre> liste;
	Chambre Premiere(1,10);
	Chambre Deuxieme(2,15,2);
	Chambre Troisieme(3,12,1);

	liste.push_back(Premiere);		
	liste.push_back(Deuxieme);
	liste.push_back(Troisieme);

	Hotel Forrer("FORRER","Tebai","Dijon",liste);
	std::cout<<Forrer.getId()<<" "<<Forrer.getNom()<<" "<<Forrer.getVille()<<std::endl;
	Forrer.afficherListe();

	Forrer.setId("Bananier");
	Forrer.setNom("Marcus");
	Forrer.setVille("Besancon");

	std::cout<<Forrer.getId()<<" "<<Forrer.getNom()<<" "<<Forrer.getVille()<<std::endl;

	return 0;
}